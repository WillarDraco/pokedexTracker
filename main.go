package main

import {
	"encoding/json"
	"fmt"
	"os"
	"sync"
	"github.com/WillarDraco/pokemonDB.git"
	
}

const version = "1.21.3"

type mon struct {
	id int;
	name string;
}

func main()  {  
	dir := "./"
	db, err := new(dir, nil);
	if err != nil {
		fmt.Println("Error ", err)
	}

	pokemon := []mon {
		{1, "Bulbasaur"}
		{2, "Ivysaur"}
		{3, "Venusaur"}
		{4, "Charmander"}
		{5, "Charmeleon"}
		{6, "Charizard"}
		{7, "Squirtle"}
		{8, "Wartortle"}
		{9, "Blastoise"}
	}

	for _, value := range pokemon{
		db.write("pokemon", value.id, pokemon{
			ID: value.id,
			Name: value.name})
		}
	}

	records, err := db.readAll("pokemon")
	if err != nil {
		fmt.Println("Error", err)
	}
	fmt.Println(records)

	allPokemon := []mon{}

	for _, f := range records {
		pokemonFound := mon{}
		if err := json.Unmarshal([]byte(f), &pokemonFound); err != nil {
			fmt.Println("Error", err)
		}
		allPokemon = append(allPokemon, pokemonFound)
	}
	fmt.Println((allPokemon))

}