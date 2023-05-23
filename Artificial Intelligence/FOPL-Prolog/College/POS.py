
# Loading Libraries
from nltk.tag import DefaultTagger
 
# Defining Tag
tagging = DefaultTagger('NN')
 
# Tagging
tag=tagging.tag(['Hello','ayush'])
print(tag)