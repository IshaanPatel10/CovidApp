# CovidApp

Ishaan Patel
3/27/2022
Portfolio Project Check In


COVID-County Tracker: 

	My portfolio project is going to be a user friendly covid statistic tracker. What this means is I am going to take statistics, on COVID-19, from the CDC website pertaining to the state of Illinois. The user will choose a county in the state of Illinois and which they will then be given information about covid-19 in the county. They will be given the number of cases, number of deaths, number recovered, and these percentages will be compared to the rest of the state. I will use a library that will output graphical information’s for the user to better understand the data using a c++ library. 
	How will I go about this? I will first use a web scraper to get all the information from the CDC’s website and go through the data and store the data in variables pertaining to the specific county. I will create private variables that will hold the data, and in the public class county I will create setters and getters that will set and get data. I will use a library that will allow me to upload all the information into graphs.
	I am creating a header file that will be the parent class. In this class it will give the statistics of the state so set/getDeaths, set/getCases, set/getSurivialPerct, etc. This will be inherited by the county class and will give the information of covid statistics pertaining to the county. It will have its own set/getDeath, set/getCases, and set/GetSurvivalPerct but pertaining to the county. The county class will also have a compare class that will compare the county statistics to the overall state statistics. 
