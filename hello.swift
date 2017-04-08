//
//  test.swift
//  
//
//  Created by Sean Healy on 2017-04-08.
//
//

import Foundation

var count = 0

func helloWorld() -> String {
    count = count + 1
    return "Hello World - \(count)"
}

print(helloWorld())
print(helloWorld())
print(helloWorld())
