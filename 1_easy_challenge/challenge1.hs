printUserInfo :: String -> String -> String -> String
printUserInfo [] _ _ = error "Please specify a name!"
printUserInfo _ [] _ = error "Please enter an age!"
printUserInfo _ _ [] = error "Please enter a username!"
printUserInfo name age redditUsername = "Your name is " ++ name ++ ", you are " ++ age ++ " years old, and your username is " ++ redditUsername