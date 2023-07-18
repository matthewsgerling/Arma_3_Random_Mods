class CfgPatches {

	class insignia_addon
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {};
		version = "1.0.0";
		author[]= {"Phantom"};
		authorUrl = "";
	};

};

/*Hehe Haha time to make some funny images*/

class CfgVehicles
{
	class MetAVehicles
	{
		hiddenSelections[] = { "\Insignias\icon\MetA_256.paa", "insignia" }; // insignia selection has to be present
	};
};


class CfgUnitInsignia
{
	class MetA
	{
		displayName = "MetA";								// Name displayed in Arsenal
		author = "PhantomXMetA";											// Author displayed in Arsenal
		texture = "\Insignias\icon\MetA_256.paa";			// Image path
		material = "";	// .rvmat path
		textureVehicle = "";													// Does nothing, reserved for future use
	};

    class Ghost
	{
		displayName = "Ghost";								// Name displayed in Arsenal
		author = "Phantom";											// Author displayed in Arsenal
		texture = "\Insignias\icon\Ghost.paa";			// Image path
		material = "";	// .rvmat path
		textureVehicle = "";													// Does nothing, reserved for future use
	};
	class Noob_Tube
	{
		displayName = "Noob Tube";								// Name displayed in Arsenal
		author = "Phantom";											// Author displayed in Arsenal
		texture = "\Insignias\icon\Noob_Tube_256.paa";			// Image path
		material = "";	// .rvmat path
		textureVehicle = "";													// Does nothing, reserved for future use
	};
	class Kitsune
	{
		displayName = "Kitsune";								// Name displayed in Arsenal
		author = "Phantom";											// Author displayed in Arsenal
		texture = "\Insignias\icon\Kitsune_256.paa";			// Image path
		material = "";	// .rvmat path
		textureVehicle = "";													// Does nothing, reserved for future use
	};
	class Quiet
	{
		displayName = "Shhhh Quiet";								// Name displayed in Arsenal
		author = "Phantom";											// Author displayed in Arsenal
		texture = "\Insignias\icon\Quiet_256.paa";			// Image path
		material = "";	// .rvmat path
		textureVehicle = "";													// Does nothing, reserved for future use
	};
	class Wolf
	{
		displayName = "GasMask Wolf";								// Name displayed in Arsenal
		author = "Phantom";											// Author displayed in Arsenal
		texture = "\Insignias\icon\WolfGas_256.paa";			// Image path
		material = "";	// .rvmat path
		textureVehicle = "";													// Does nothing, reserved for future use
	};
};
