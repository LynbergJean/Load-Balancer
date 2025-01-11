ML Load-Balancer
Load balancer that distributes traffic intelligently using a machine learning model to predict server load and performance, and it will also operate on AWS for redundancy, cost optimization and performance.
Features:
High Performance
Developed with C for socket handling and low-latency operations
Machine Learning integration
Python based ML model predicts server load and assigns weights dynamically
Dynamic scalability
Will adapth to changes in the server in real time 4- Customizable metrics
Will support metrics like CPU usage, memory utilization, and latency for load prediction.
Technologies used:
1. C 
   - pthread for multithreading
   - socket programming for network handling

2. Python
   - scikit-learn for machine learning
   - joblib for saving and loading models.

3. Communication tools:
   - Python C API for intergration

Possible Usage: - Traffic allocation: the load balancer will use predictions to distribute traffic dynamically. - The ML model will predict readiness score.
Future possible enhacements:
intergration with multiple cloud platforms and not just AWS. ex(Azure, oracle, and google cloud).
adding a real-time dashboard for vizualizing server loads and traffic patterns.
Contributors: Lynberg Jean.
