# Import necessary libraries
from sklearn.linear_model import LinearRegression
import joblib
import numpy as np

# Generating example training data (i could not find real data )
X = np.array([[10, 20], [30, 40], [50, 60], [70, 80]])  # Features(CPU, memory)
y = np.array([1, 0, 1, 0])  # Labels (readiness)

# Training a linear regression model
model = LinearRegression()
model.fit(X, y)

# Saving the trained model
joblib.dump(model, "model.pkl")
print("Model saved as model.pkl")
