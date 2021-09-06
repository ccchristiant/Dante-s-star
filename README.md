## B2 - Elementary Programming in C

## B-CPE-200

# Dante’s Star

## Journeying through Hell to Generate and Solve Mazes
```
binary name : see below
repository name : CPE_dante_$ACADEMICYEAR
repository rights : ramassage-tek
language : C

- Your repository must contain the totality of your source files, but no useless files
    (binary, temp files, obj files,...).
- All the bonus files (including a potential specific Makefile) should be in a directory
    named _bonus_.
- Error messages have to be written on the error output, and the program should
    then exit with the 84 error code (0 if there is no error).
```
```
Dante, lost in a dark forest, struggles to climb a luminous hill so that he can get out. In turns, a panther, a lion, and a wolf block the path and force him to retrace his steps. Virgil appears, who persuades him to visit the eternal kingdoms in order to escape these perils. He offers to take him to Hell and to Purgatory himself, and Beatrice will show him Heaven.

Theme of Canto I - The Divine Comedy - Dante Alighieri
```
Dante must journey through Hell, a thoroughly maze-like place. Here we’re going to generate mazes, find
the exit path and try to do this as fast as possible.

The project is divided into nine sections, which represent the nine circles of Hell that Dante must pass
through in order to reach purgatory.

The goal of this project is to generate mazes (in a reasonable amount of time), solve them (in a reasonable
amount of time), and print the solution.
```
System functions and libC are allowed, but no external libraries.
```

## First Circle: Limbo_ _ _ _ _ _ _ _ _ _ _

```
I found myself on the brink
of the abysmal valley of pain, which resounds with
noise of countless wailings; it was so dark and deep
and full of vapours that, straining my sight to reach
the bottom, I could make out nothing there.

‘Now let us descend into the blind world down there,’
began the Poet, deadly pale; ‘I will be the first and
thou the second.’

And I, who noted his color, said: ‘How shall I come if
thou art afraid who, when I am in doubt, art wont to be
my strength?’

Canto IV
```
These ambivalent and cowardly spirits, who do not suffer but yearn for happiness without being able to
obtain it, are ceaselessly tormented by the horseflies and wasps that goad them in vain. Here we can find:
Homer, Horace, Lucian, Lucretius, Ovid, Pluto, Seneca, Socrates, Saladin and all of those who have never
come to the Hub.

### + Turn-in methods_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _

You must have 2 folders : solver with a binary named “ **solver** ” in it, generator with binary named “ **generator** ”
in it.
Each folder must contain a Makefile compiling the binary and a Makefile at the root must compile all binaries.

```
The Makefile at the root must compile all of the binaries.
```

### ∇ Terminal - + x

```
∼/B-CPE-200> ls -R
. ..
solver generator Makefile


./ solver:
solver
[...]

./ generator:
generator
[...]
```
Each solver must be able to function as follows:

### ∇ Terminal - + x

```
∼/B-CPE-200> ./solver maze.txt
```
and print the solved maze on the standard output.
If there is no solution you must print “ **no solution found** ” on the same output.

The generator must function as follows:

### ∇ Terminal - + x

```
∼/B-CPE-200> ./generator x y [perfect]
```
As the perfect argument is optional, the default generation will be an imperfect maze.

```
You are allowed to add other optional arguments; you must show them during the Re-
view.
```

## Second Circle: Lust_ _ _ _ _ _ _ _ _ _ _

```
There Minos stands,
Grinning with ghastly feature: he of all
Who enter, strict examining the crimes,
Gives sentence, and dismisses them beneath,
According as he foldeth him around:
For when before him comes the ill-fated soul,
It all confesss; and that judge severe
Of sins, considering what place in Hell
Suits the transgression, with his tail so oft
Himself encircles, as degrees beneath
He dooms it to descend.

Canto V
```
The lustful are brutally thrown into an infernal tempest where they are tormented by the struggle of their
carnal desires.
Among others we find:

- **Dido** : queen of Carthage, who “killed herself for love” when she was abandoned at Aeneas after having
    betrayed her promise of fidelty to her late husband, Sichaeus.
- **Cleopatra** : queen of Egypt, Caesar and Antony’s mistress.
- **Helen** : the cause of the Trojan War.
- **Achilles** : trapped by his love for Polyxena.
- **Francesca da Rimini** : killed by her husband in the arms of her lover, who was her husband’s brother.
- **Lancelot** : the valiant knightm lovesick for his king’s wife.

### + What is a maze?_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _

Here is the maze format description:

- Mazes are rectangular.
- They are coded in ASCII.
- The ‘X’s represent the walls and the’*’s represent the free spaces.
- It is possible to move to the four surrounding squares (up, down, right, left).
- “Start” is in the upper left-hand corner (0;0)
- “Finish” is in the bottom right-hand corner.
- A solution is a series of free, adjacent squares, from “Start” to “Finish” included.
- “Start” and “Finish” can be occupied. In this case, there is no solution.
- The last line of the maze doesn’t terminate with a return line.
- Resolution: in order to write the solution in the maze, we use ‘o’ for the solution path.


```
The Maze must be mazy enough.
```
### + Example_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _

Here is a 24x6 maze...

*****XX****X******** XXXX
XX ****** XX*** XXXXX *** XXX
XX*** XXXX** XXXXX **** XXXX
XX*** XXXXXXXXXXXXXX ****X
***** XXXXXX ****XX*** XXXX
XX ************* XXXX *****

... and a way to solve it.
    oooooXXooooXooooooooXXXX
    XX** ooooXXoooXXXXX*o*XXX
    XX*** XXXX** XXXXX *** oXXXX
    XX*** XXXXXXXXXXXXXXo ***X
    ***** XXXXXX ****XX**oXXXX
    XX ************* XXXXooooo


## Third Circle: Gluttony_ _ _ _ _ _ _ _ _ _ _

```
In the third circle I arrive, of showers
Ceaseless, accursed, heavy and cold, unchanged
For ever, both in kind and in degree.
Large hail, discolor’d water, sleety flaw
Through the dun midnight air stream’d down amain:
Stank all the land whereon that tempest fell.

Canto VI
```
The circle reserved for gluttons has eternal rain composed of dark and heavy water, snow and hail that
makes the Earth reek.
The banqueteurs are torn apart by a three-headed Cerberus.

### + A perfect maze.. ._ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _

First, generate a perfect maze.
A perfect maze is a maze that has no loops and no clusters; therefore, following a wall makes us cross the
entire maze.

The generation method is up to you, but it must work in an acceptable amount of time.
**Input** : maze size (width/height).
**Output** : a maze with the required size on the standard output.

```
The maze must have a solution.
```
```
The maze should be really perfect.
```
```
The maze should be really really perfect.
```

## Fourth Circle: Greed and Extravagance_ _ _ _ _ _ _ _ _ _ _

```
Thus we, descending to the fourth step ledge,
Gain’d on the dismal shore, that all the woe
Hems in of all the universe. Ah me!
Almighty justice! in what store thou heap’st
New pains, new troubles, as I here beheld.
Whereforth doth fault of ours bring us to this?

Canto VII
```
Each one caught up in their excesses, Greed and Extravagance bump into and suffocate each other.
Their excess condemns them to never being able to advance: their trepidation energy does not produce
anything; their attitude is in vain.

### + Let’s make a imperfect maze.. ._ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _

An imperfect maze must contain clusters.
The requirements are the same as for perfect mazes.
The generation method is up to you, but it must work in an acceptable amount of time.
**Input:** maze size
**Output:** a maze with the required size on the standard output.

```
The maze must have at least one solution.
```

## Fifth Circle: Wrath_ _ _ _ _ _ _ _ _ _ _

```
How many now hold themselves mighty kings,
Who here like swine shall wallow in the mire,
Leaving behind them horrible dispraise.

Canto VIII
```
### + Escaping the maze.. ._ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _

Now it’s time to solve those mazes you’ve generated... and some more that our very very efficient AI
generated for you.
Your resolution program should take the name of a file containing the maze and write the solution on the
standard output.
You can choose the algorithm you want but be careful, you will be ask to solve perfect and imperfect mazes.


## Sixth Circle: Heresy_ _ _ _ _ _ _ _ _ _ _

```
We, unopposed,
There enter’d; and, my mind eager to learn
What state a fortress like to that might hold,
I, soon as enter’d, throw mine eye around,
And see, on every part, wide-stretching space,
Replete with butter pain and torment ill.
As where Rhone stagnates on the plains of Arles,
Or as at Pola, near Quarnaro’s gulf,
That closes Italy and laves her bounds,
The place is all thick spread with sepulchres;
So was it here, save what in horror here
Excell’d: for ’midst the graves were scattered flames,
Wherewith intensely all throughout they burn’d,
That iron for no craft there hotter needs.
I thus: “Master! say who are these, interr’d
Within these vaults, of whom distinct we hear
The dolorous sighs.” He answer thus return’d:
“The arch-heretics are here, accompanied
By every sect their followers; and much more
Than though believest, the tombs are freighted: like
With like is buried; and the monuments
Are different in degrees of heat.” This said,
He to the right hand turning, on we pass’d
Betwixt the afflicted and the ramparts high.

Canto IX
```
Here we can find Epicurious, his disciples and Pope Anastasius.

### + Performance_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _

Generating and solving mazes is good, but how efficient are the algorithms you use?
Will you be able to deal with very large mazes?
Will you be able to do it quickly enough?

```
You will have to choose between RAM and CPU... think about it.
```
Measuring the speed of your program raises some points:

- the system-dependency: your machine is not always strictly in the same state when the program is
    launched (resource consumption, sticky bit,... ),


- the maze-dependency: you will get different results for different types of mazes
- randomness: if it turns out that your algorithm uses randomness, the results will vary constently, even
    for the same maze.

```
You must take this into consideration when thinking about your analysis.
Your ability to objectively estimate your progress depends on it.
```

## Seventh Circle: Violence_ _ _ _ _ _ _ _ _ _ _

```
First ring: violence against their neighbors
Second ring: violence against themselves
Third ring: violence against God and nature

Thereat the trunk breathed hard, and the wind soon
Changed into sounds articulate like these:
"Briefly ye shall be answer’d. When departs
The fierce soul from the body, by itself
Thence torn asunder, to the seventh gulf
By Minos doom’d, into the wood it falls,
No place assign’d, but wheresoever chance
Hurls it; there sprouting, as a grain of spelt,
It rises to a saplingm growing thence
A savage plant. The harpies, on its leaves
Then feeding, cause both pain, and for the pain
A vent to grief. We, as the rest, shall come
For our own spoils, yet not so that with them
We may again be clad; for what a man
Takes from himself it is not just he have.
Here we perforce shall drag them; and throughout
The dismal glade our bodies shall be hung,
Each on the wild thorn on his wretched shade.

Canto XIII
```
### + Further into optimization_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _

Here you are, faced with yourselves for this ultimate test.
You are already equipped with the basics, but you have now to go faster!

There are a lot of possible optimizations, whether it be heuristic searches, data strcuture work, local opti-
mizations, maze preprocessing,...

```
The maze complexity will be measured.
```
Be creative!


## Eighth Circle: Fraud_ _ _ _ _ _ _ _ _ _ _

```
Bolgia 1: Panderers and seducers
Bolgia 2: Flatterers
Bolgia 3: Simoniacs
Bolgia 4: Sorcerers
Bolgia 5: Barrators
Bolgia 6: Hypocrites
Bolgia 7: Thieves
Bolgia 8: Counsellors of Fraud
Bolgia 9: Sowers of Discord
Bolgia 10: Falsifiers

On our right hand new misery I saw,
New pains, new executioner of wrath,
That swarming peopled that first chasm. Below
Were naked sinners. Hitherward they came,
Meeting our faces, from the middle point;
With us beyond, but with a larger stride.

Canto XVIII
```
### + Heuristic_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _

When we simply scan our state space, you might get the idea to scan it in a slightly more enlightened man-
ner.
You probably alrealdy integrated a heuristic! Didn’t you?

Be sure you are using the best possible heuristic.

```
Don’t forget to measure the newly obtained performance.
Is it more efficient? For all of the mazes?
```

## Ninth Circle: Treachery_ _ _ _ _ _ _ _ _ _ _

```
Round 1: Traitors to their Kindred
Round 2: Traitors to their Country
Round 3: Traitors to their Guests
Round 4: Traitors to their Lords

As down we stood
In the dark pit beneath the giants’ feet,
But lower far than they, and I did gaze
Still on the lofty battlement, a voice
Bespake me thus: “Look how thou walkest. Take
Good heed, thy soles do tread not on the heads
Of thy poor brethren.” Thereupon I turn’d,
And saw before and underneath my feet
A lake, whose frozen surface liker seem’d
To glass than water.

Canto XXXII
```
In this last circle flows the rivers of Hell: the Cocytus, a river of ice.
Here the traitors shiver in an eternal cold.
Dante declaims them thusly:

```
“Plebs cursed among all, rejected in this place of which it is terrifying to speak.
You would have been better off as sheep or goats.”
```

