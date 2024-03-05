# API advanced

# Background Context

Questions involving APIs are common for interviews. Sometimes they’re as simple as ‘write a Python script that queries a given endpoint’, sometimes they require you to use recursive functions and format/sort the results.

A great API to use for some practice is the Reddit API. There’s a lot of endpoints available, many that don’t require any form of authentication, and there’s tons of information to be parsed out and presented. Getting comfortable with API calls now can save you some face during technical interviews and even outside of the job market, you might find personal use cases to make your life a little bit easier.

# General

* How to read API documentation to find the endpoints you’re looking for

    API Overview: Start by reading the API overview section to understand what the API offers, its purpose, and key concepts.

    Authentication: Determine if the API requires authentication and what type (e.g., API key, OAuth).

    Endpoints: Look for a section detailing the available endpoints. Each endpoint typically represents a specific function or resource the API can interact with.

    Parameters: Check what parameters are required or optional for each endpoint. These parameters might include query parameters, request body parameters, or headers.

    Response Format: Understand the format of the response the API returns. It could be JSON, XML, or another format.

    Error Handling: Learn how errors are returned by the API and how to handle them in your application.

* How to use an API with pagination

    Pagination Parameters: Look for pagination parameters in the API documentation. These parameters often include limit (number of items per page) and offset (index of the first item on the page).

    Iterate Through Pages: Make requests to the API endpoint, adjusting the pagination parameters to fetch subsequent pages until you have retrieved all the data you need.

* How to parse JSON results from an API

    Response Format: Determine if the API returns data in JSON format.

    JSON Parsing Library: Use a JSON parsing library appropriate for your programming language (e.g., json module in Python) to parse the JSON response into a data structure like a dictionary or list.

    Accessing Data: Once parsed, access the data elements you need from the JSON structure using appropriate keys or indices.

* How to make a recursive API call

    Define Recursive Function: Write a function that makes an API call and processes the response.

    Termination Condition: Define a termination condition for the recursion, such as reaching the end of a data set or hitting a certain depth.

    Recursive Call: Within the function, make a recursive call to itself, possibly with modified parameters, until the termination condition is met.

* How to sort a dictionary by value

    Extract Values: Extract the values from the dictionary.

    Sort Values: Use a sorting algorithm or built-in function to sort the extracted values.

    Map Values to Keys: Map the sorted values back to their corresponding keys in the dictionary.


    Here's a Python example:

    ```python


    # Sample dictionary
        my_dict = {'a': 3, 'b': 1, 'c': 2}

    # Sort dictionary by value
    sorted_dict = {k: v for k, v in sorted(my_dict.items(), key=lambda item: item[1])}

    print(sorted_dict)  # Output: {'b': 1, 'c': 2, 'a': 3}

    ```

    This sorts the dictionary by its values in ascending order. Adjust the sorting logic as needed for different sorting requirements.
