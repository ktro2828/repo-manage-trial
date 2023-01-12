package main

import (
    "fmt"
    "github.com/ktro2828/greetings"
)

func main() {
    // Get a greeting message and print it.
    message := greetings.Hello("Gladys")
    fmt.Println(message)
}
