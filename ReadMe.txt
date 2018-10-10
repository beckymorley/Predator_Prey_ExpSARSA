Thank you for downloading this project!

ABOUT
This project was part of a Computer Games Technology MSc dissertation and looked into creating a self sustaining ecosystem for games using reinforcement learning.
The simulation was built using Unreal Engine 4.19, and data extraction is achieved using Rama's Victory Plugin.
This is the test version of the application, and the purpose of the maps are to test behaviour of the agents and extract data on 
agent state action values and populations over time.

RUNNING THE APPLICATION
To run the application please select one of the DeerPlantTest maps and select play within the UE4 editor. 
Please be aware that the SmallMapTest, MedMapTest and FullMapTest levels will export data into a folder within the project and may
not run at optimal performance.

If you are interested in seeing the applicaiton run in the original test conditions or would like to view the data results for a certain test, 
you can do the following: 

	- Open the InitialTestValues.csv file found in the project folder. Each row in this file refers to the initial data for each test case.
	  Feel free to change the values in this file if you would like to change the conditions (make sure that the headers do not change, and that
	  after changes are made, the file is exported into the project throught the UE4 editor).
	- To run a test case, go to TestResults and open TestNumber.txt and enter the number ensuring that there are three digits in the entry 
          (i.e. for test number 1, enter 001). Please make sure that there are no spaces before or after the 3 digit number.
	- When you are happy with the selections select one of the following levels; SmallTestMap, MedTestMap or FullTestMap, then click play in the editor

NOTE: A demo version of this application is being built where the options will be available to select within a menu before the simulation runs.
I will also be creating an exectuable file for this demo once it is complete. 

If you have any questions on the project, please do not hesitate to contact me via email: r.morley624@gmail.com and I will be happy to help :)

ASSET REFERENCES

Poly Art Wolf/Poly Art Deer - by MalberS Animations
bought via the Unreal Engine Marketplace, June 2018

Plant Berberys Garden - by TomaszCGB
downloaded for free via 3DExport website, June 2018
