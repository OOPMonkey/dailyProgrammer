# Anagram Algorithm
// Create new hashtable/hashmap to keep track of how many times each character
// is being used
character_map -> new hash map

// Initial check. If lengths are not the same, they can't be anagrams.
if s1.length != s2.length:
    throw exception "Not anagrams"

// Add all characters from s1 to hashmap. Increment the value to keep track of
// number of occurences
foreach character c1 in s1:
    character_map[c1]++

// Iterate through all character in s2 and decrement count of each character.
foreach character c2 in s2:
    character_map[c2]--

// If they are anagrams, each character should be at "0" count at the point.
// If we come across a character that is not, it means that they are not anagrams
foreach key k, value v in character_map:
    if v != 0:
            throw exception "Not anagrams"