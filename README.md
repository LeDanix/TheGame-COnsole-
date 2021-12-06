# Game
A game based on the tipical RPG by turns like Final Fantasy or Pokemon. We will have different characters to select and different weapons and spell to fight.

**The game is under development**

## Codigo
* Borrar consola
https://www.delftstack.com/es/howto/cpp/how-to-clear-console-cpp/


## Characters
### Warrior. Guerreros del Reino de Astor.
	- Life[350-440]
	- Weapons attack[8-12]
	- Spells attack[0-2]
	- Ingeniering attack[0-0]
	- Faith[15-70]
	- Solid shield[15-30]
	- Magic shield[0-13]
	- Velocity[35-56]
	- Precision[80-100]
		
### Wizard. Magos de la llanura de Houlen.
	- Life[230-300]
	- Weapons attack[0-5]
	- Spells attack[12-16]
	- Ingeniering attack[0-0]
	- Faith[5-30]
	- Solid shield[0-10]
	- Magic shield[18-35]
	- Velocity[46-79]
	- Precision[85-100]
		
### NetRunner. Ingenieros modificados de la "Gran Ciudad".
	- Life[200-330]
	- Weapons attack[4-10]
	- Spells attack[5-12]
	- Ingeniering attack[4-8]
	- Faith[5-50]
	- Solid shield[15-20]
	- Magic shield[18-27]
	- Velocity[72-100]
	- Precision[90-100]
		
		
### Meca. Maquinas del laboratorio de Mr.Fordon.
	- Life[480-600]
	- Weapons attack[4-8]
	- Spells attack[0-2]
	- Ingeniering attack[3-6]
	- Faith[0-0] (The robot has no faith)
	- Solid shield[20-35]
	- Magic shield[15-20]
	- Velocity[0-15]
	- Precision[70-80]
		
		
### NatureBoy. Elfos del bosque gigante de Horsvizch.
	- Life[300-350]
	- Weapons attack[4-8]
	- Spells attack[8-12]
	- Ingeniering attack[0-0]
	- Faith[80-100]
	- Solid shield[5-15]
	- Magic shield[30-46]
	- Velocity[35-50]
	- Precision[80-85]
 
## Mechanics
### Stadistics
* Life. Total life -->Limits[1-600]
* Weapons attack. Weapons attacks multiplier -->Limits[0-12]
* Spells attack. Spells attacks multiplier -->Limits[0-16]
* Ingeniering attack. Engeniering attack multiplier -->Limits[0-8]
* Faith. Level of faith let the user revive with half of life -->Limits[0-100]
* Solid shield. Solid shield multiplier -->Limits[0-35]
* Magic shield. Magic shield multiplier -->Limits[0-46]
* Velocity. User velocity -->Limits[0-120]
* Precision. Precision let user hit or miss the attack -->Limits[70-100]
	
### Map
**The Map will be a 32x32 boxes where diferents elements are located.**
* Trees
* Walls
* NPCs (One of each type)
* A dog
			
### Fight
	The fight is divided into diferent turns. 
	There are no limit of turns to finish a fight.
	Each turn, both figthers has to select their attack.
	When the damage of the attack will be calculated, the life of the enemy decreasse in the same amount of the damage of our attack and viceversa.
	When the life of any of the characters get '0', this character lose.
	

```
if random[0-100] < precision
	damage = MagicPower*SpellsAttack*% + Power*WeaponsAttack*%
	
else
	damage = 0
```

### Type table
	|Atac\Def |Warrior|Wizard|NetRunner|Meca|NatureBoy|
	|Warrior  |	 x1  |	x2	 |	 x0.5  |x0.5|  x1	  |
	|Wizard	  |  x0.5|	x1	 |	 x1	   |x1	|  x2	  |
	|NetRunner|  x1  |  x0.5 |	 x2	   |x2	|  x0.5   |
	|Meca	  |  x2  |  x1   |   x0.5  |x1  |  x1	  |
	|NatureBoy|  x1  |  x0.5 |	 x2	   |x1  |  x1     |
	
## Spells
There are 3 types of Spells.

	- Attack
	The damage always will be *Magic Damage*.
	Type: 0x00

	- Stats modifier
	The stats modified could be more than one. --> Array
	Type: 0x01

    - Both
	Mix both Attack and Stats Modifiers characteristics
	Type: 0x02

### Turbal Reality
	-Effect: **Makes magic damage and eliminate opponent type**
	-Type: **Attack**
	-*Magic Power* = 3

### Orbital attack
	-Effect: **User summon a orbital and make damage each turn**
	-Type: **Attack**
	-*Magic Power* = 1 each turn

### Trick Or Treat
	-Effect: **Makes magic damage**
	-Type: **Attack**
	-*Magic Power* = 8

### Over Powered
	-Effect: **User increasse his *Weapons attack* **
	-Type: **Stats modifier**
	-*Weapons attack* + 3

### Block The Glock
	-Effect: **Increase the *Solid Shield* **
	-Type: **Stats modifier**
	-*Solid Shield* + 10

### Roll the dice
	-Effect: **Reroll the stats**
	-Type: **Stats modifier**

### Clean Clean K-Ching
	-Effect: **Increase *Magic attack***
	-Type: **Stats modifier**
	-*Magic attack* + 4

### Break Barriers
	-Effect: **Decrease *Solid shield* and *Magic shield***
	-Type: **Stats modifier**
	-*Solid shield* - 7
	-*Magic shield* - 9

### Actually funny
	-Effect: **Make lot of damage but faith decrease**
	-Type: **Attack and Stats modifier**
	-*Magic Power* = 13
	-*Faith* - 15

## Weapons

### Legendary Sword
	-Effect: **Hit and cut**
	-Type: **Attack**
	-*Power* = 7

### Calp bow
	-Effect: **Be a "Cupido"**
	-Type: **Attack**
	-*Power* = 5

### Dog Hoof
	-Effect: **Scratch the enemies and reduce his precision**
	-Type: **Stats modifier**
	-*Power* = 4
	-*Precision* - 15

### Karate
	-Effect: **Do karate**
	-Type: **Attack**
	-*Power* = 10