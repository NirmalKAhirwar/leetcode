class Solution:
    def findItinerary(self, tickets: List[List[str]]) -> List[str]:
        # Create a dictionary to represent the graph
        graph = {}
        for ticket in tickets:
            from_city, to_city = ticket
            if from_city in graph:
                graph[from_city].append(to_city)
            else:
                graph[from_city] = [to_city]
        
        # Sort the destinations in lexical order
        for city in graph:
            graph[city].sort()
        
        def dfs(city):
            if city in graph:
                while graph[city]:
                    next_city = graph[city].pop(0)
                    dfs(next_city)
            itinerary.append(city)
        
        itinerary = []
        dfs("JFK")
        
        # Reverse the itinerary since we are starting from JFK
        return itinerary[::-1]