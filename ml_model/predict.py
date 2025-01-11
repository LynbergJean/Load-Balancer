import sys
import joblib
import numpy as np

# Load the trained model
model = joblib.load("ml_model/model.pkl")

# Read CPU and memory usage from command-line arguments
cpu_usage = int(sys.argv[1])
memory_usage = int(sys.argv[2])

# Prepare the data for prediction
data = np.array([[cpu_usage, memory_usage]])

# Make the prediction
score = model.predict(data)[0]
print(score)  # Output the result for C program
