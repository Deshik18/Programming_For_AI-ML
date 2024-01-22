# Hate Speech Classification with BERT Embeddings

## Overview

This project focuses on implementing a deep learning-based text classification model for hate speech detection using BERT embeddings. The model employs two channels: BERT+CNN and BERT+biGRU, with the outputs concatenated and passed through a fully connected layer and a softmax output layer.

## Problem Description

### Task
Implement a deep learning model for hate speech detection.

### Model Architecture
1. BERT Language Model: Generates embeddings (Max sequence length * 768) for input sentences.
2. Channel-1: BERT+CNN
3. Channel-2: BERT+biGRU
4. Concatenation: Concatenate outputs from both channels
5. Fully Connected Layer (FC): Process concatenated features
6. Softmax Output Layer: Produce classification probabilities

## Datasets

- Raw Dataset Link: Hate_Speech_Dataset
- Train, Valid, and Test Split: 70%, 10%, 20%
- Class Labels: 
  - 0: Hate Speech
  - 1: Offensive Language
  - 2: Neither

## Implementation Details

- Framework: PyTorch (TF or Keras can be used as alternatives)
- Random Seed: 08012023
- Assumptions: (Specify any necessary assumptions)

## Evaluation Metrics

### Primary Metrics

- Accuracy
- Precision
- Recall
- F1 Score

### Additional Metrics

- Confusion Matrix
- Training Time
- Inference Time

## How to Run

1. Clone the repository.
2. Install the required dependencies: (Specify the dependencies, e.g., PyTorch, Transformers library)
3. Run the training script: `python train.py`

## Results and Analysis

Examine the results and analysis in the accompanying report or documentation file.

## Contributing

If you have improvements or additional features to add, feel free to submit a pull request!

