from datetime import datetime

def greet_user(name):
    # Get the current time
    current_time = datetime.now().time()
    
    # Determine time of day
    if 3 <= current_time.hour < 12:
        time_of_day = "morning"
    elif 12 <= current_time.hour < 17:
        time_of_day = "afternoon"
    elif 17 <= current_time.hour < 20:
        time_of_day = "evening"
    else:
        time_of_day = "night"
    
    # Print the greeting
    print(f"Good {time_of_day}, {name}!")

# Example usage
greet_user("Your Name")
