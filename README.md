# magnetic-north
Is magnetic north constant?
April 11, 2023
The original question actually was about magnetic north.  I got distracted by the pendulums and put it off.  Now I have time and it is back on schedule.  I have finished the structure for the big compass needle.  I wanted to put it on a needle like a typical compass, but this does not look like it will work.  I have it suspended the magnetic needle on a string and feel pretty comfortable with it.  The structure has three arches and is quite stable.  It is entirely made of plywood and glue;  no ferrous metal.
The little mirror sits in a little cradle that attaches firmly to the magnetic needle.  It can be adjusted and then made secure.
The laser on the survey tool seems fine.  My prototype is giving a split image off the mirror, but this is a practice mirror;  the front surface mirror is safely in storage.
The software will be C++ with Arduino.  It will not be a trivial project, but less difficult than the others.  I have a Mega board that has 30 inputs.  This means the detector will be 30 inputs.  This should be enough.  And I do not need a reading every 20 seconds.  Every hour, for example should be plenty.
The initial prototype is very nearly ready.
4/27/2023 
the prototype is finished and past prototype.  I am setting it up for manual readings.
What is a degree and how is it subdivided?
A degree has 60 minutes and a minute has 60 seconds.  So, the degree is divided into 3600 seconds.  That should work.
A degree projected out 5 meters is what length (to an approximation;  assume that the length is linear)
This sin of 1 degree is 0.0175.  The formula tells us that one-degree 5meters out is 8.75 cm.  That looks about right.
3600 seconds per degree times divided by 8.75 cm per degree  is 411 seconds per degree.
Hmmm.
So, the 8.75 cm needs to be divided into 411 parts to be seconds (where there are 3600 seconds per degree)
At any rate, this looks fine enough, just about right.  
So, what is the ‘move forward’?  Hummmm
I need a graduation that is 411 lines in 8.75 cm (about 3.5 inches)  more than 10 lines per cm.  Might be possible with excel?  No?
10 per cm is right at a milliliter apart
Hmmm
The distance I want to use is 12 feet,  3.65 meters

I made a table ‘graduations for mag north.xls’
3.65, from the new table is 6.37 cm (as opposed to 8.75)
3600 seconds per degree times divided by 6.37 cm per degree  is 565 seconds per degree.
So:  as the distance gets bigger(this refers to the mirror to detector)
Hummmm  anyway I think this is the right track:  the scale has to be in seconds.  The further away, the farther apart the lines.
I really need a way to custom make graduation lines at a specified size.  Or I need to put the detector at a specific distance to get the appropriate magnification.
Another complication:  If the laser comes off the mirror at an oblique angle, then the delt is magnified. If fact I could make the adjustment with this; set the angle, incident reflection, to utilize the graduations that I have.
5:pm
I am thinking that I need to simplify my approach.  Do it all with an empirical observation:
Move the needle one degree and look for the variation.  And to move accurately one degree, use a screw.  How many turns or fractions of turns is one degree?
How much lateral (turning) movement is one degree.
Radius is 5.5 inches = 17.4 cm
2 pi r = circumference  = 107 cm  about.  
107/360 = 0.3 cm is one degree.
That looks about right.  .3 cm is 3 mm
I should be able to see a correlation between the two approaches.
Experimental approach:
Set up a sort of stable platform with a ¼ 20 screw.  Set up the rotor with gentle pressure against this screw.  Take a reading with the mirror.  Move the set screw 3 mm take another reading with the laser/mirror.
I should be able to find a correlation.  But without very careful calculations and construction, the empirical approach will be better.  And much easier.
A metal screw could be a problem.  Just find a shim that is the correct width. 
Xxx
I read that the magnetic north moves 57 miles a year.  ?That is a lot, but it is far away.  How many degrees is this.  Is there any remote possibility of detecting this from Asheville.  Especially when the movement is largely toward the US?
57 miles is about 9 million centimeters.  How far away is the north pole?
The circumference of the earth is about 40K km or forty thousand million centimeters.
Let’s call it 6000 km to the north pole.  That looks about right.
One degree in Asheville would be about how many km at the north pole?
The table says that 1 degree would be 100 odd kilometers!  So, my experimental technique might be good enough!
Wait.
One degree is about 9 cm 5 me3ters away/  So a one-degree angle would be up about 9 cm
It is about 6000 km to the magnetic north pole.

One degree would be 105 kilometers.  (The unit all cancel out or stay the same.  Start with cm and end up with cm.  start with kilometers and end up with kilometers.  Divide that by 60 to get minutes and you get 1.75 km.
Can the signal be divided up into 60ths.  I think it can.
Put the needle back in the corner under the mudroom and put the detector on the little platform.
Automate it with Arduino.  Fairly easy.  Bounce the laser off at a fairly clean 90 degrees for a clean signal.  Calibrate it manually for the deviation per degrees.   Hmmm
May 1 2023
Let’s go straight to this question: 6000 kilos away and 57 kilos for adjacent, that is the angle?
Sine θ = Opposite side/Hypotenuse = BC/AC
Cos θ = Adjacent side/Hypotenuse = AB/AC
Tan θ = Opposite side/Adjacent side = BC/AB
57/ 6000 = 0.0095
The inverse sin is 0.544 degrees.  So, this is easy for my experiment.
Is that right?
The confirmation would be 6000 k away.  One half a degree would represent what distance?
Sin of 1 degree is 0.0175.
So, half a degree is 
The sin wave is 45 degrees right at zero.  Can I assume that the relationship is linear.  Probably.
If the sin of 1 degree is 0.0175

Sin of half a degree is  0.00875
Sin 0.5 degree = 0.0085 = x/6000
X= 52 kilometers for half of a degree and about 104 for a full degree
I am confused.  But this looks promising.  No wait.  This matches the excel graph ‘graduation for magnetic north’.  
And I can bounce the laser off the mirror at an oblique angle and greatly magnify the angle!
So, what now.  I think this is a ‘move forward’.
What is the best laser.  Can the photodiodes for Arduino comfortably detect the laser at 25 feet?
An oblique angle will weaken the laser.  How much can I push this?
Janet’s laptop is set for Arduino and Python, so that is cool.
The C++ and the python are easier than the path I have already traveled.  Definitely not harder.

https://youtu.be/zvrcrxT9n8o
july 14 2023
I have the laser complete to a finished prototype.  I am taking data.  I have the laser on an arbitrary scale; a piece of graph ppaper.
One, two three are about centimeters.  And these are divided into ten.
I perturbation puff is just a turkey baster, but it works great.  I take a reading and give it a puff.  I take a reading and give it a puff etc.  
The reproducibility is quite good.  At least a tenth, like 2.2.  I think half of a sig fig would be fine.
But this is strange.  i c0me back eight hours later and the reading has changed!
This makes it look like I need more readings than just two a week.  What is going on?  I must be overlooking something.
I need a 2d array of 0s and 1s every 15 minutes.
I am 'networking' for help with this project.  TCD2557F linear array sensor.  This is a lon narrow opticlal sensor.  maybe 8 pixels by 300 pixels.
quarter of an inch by one and a half inches.  It is pretty clear that Arduino is not suited for this.
