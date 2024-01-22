# Word Embeddings and Text Representations Repository

## Overview

This repository focuses on various techniques for word embeddings and text representations, including popular models and methods. The implementations cover a range of approaches, from traditional bag-of-words to state-of-the-art transformer-based embeddings.

## Models and Methods

1. **Word2Vec**
   - Implementation: `word2vec_embedding.py`
   - Description: Word2Vec is a popular model that learns word embeddings based on word co-occurrences in a given corpus.

2. **GloVe**
   - Implementation: `glove_embedding.py`
   - Description: GloVe (Global Vectors for Word Representation) is an unsupervised learning algorithm that learns word embeddings by considering the global statistical information of the corpus.

3. **BERT**
   - Implementation: `bert_embedding.py`
   - Description: BERT (Bidirectional Encoder Representations from Transformers) is a transformer-based model that provides contextualized word embeddings, taking into account the surrounding context.

4. **Bag of Words (BoW)**
   - Implementation: `bag_of_words.py`
   - Description: Bag of Words is a traditional method for text representation, where the occurrence of words in a document is used to create a vector representation.

5. **TF-IDF (Term Frequency-Inverse Document Frequency)**
   - Implementation: `tfidf_embedding.py`
   - Description: TF-IDF is a statistical measure that evaluates the importance of a word in a document relative to a collection of documents. It is commonly used for text representation.

## Usage

Each model or method implementation comes with usage instructions in its respective file. You can use these representations for various NLP tasks such as sentiment analysis, text classification, or semantic similarity.

## Dependencies

- Python 3.x
- Libraries: [gensim](https://radimrehurek.com/gensim/), [transformers](https://huggingface.co/transformers/), [scikit-learn](https://scikit-learn.org/stable/)

## How to Run

1. Clone the repository.
2. Run the desired model or method implementation script.

## Contributing

If you have more word embedding models or text representation methods to add or want to contribute, feel free to submit a pull request!


