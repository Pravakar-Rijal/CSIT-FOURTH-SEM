
import nltk
from nltk.stem import WordNetLemmatizer 

# Init the Wordnet Lemmatizer
lemmatizer = WordNetLemmatizer()

# Lemmatize Single Word
print(lemmatizer.lemmatize("cats"))
#> bat

print(lemmatizer.lemmatize(""))
#> are

print(lemmatizer.lemmatize("goes"))
#> foot