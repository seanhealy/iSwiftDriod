#!/usr/bin/env bash

rm -rf main

swiftc main.swift hello.swift -o main
