diag_log ["Minefield activated", _this, trigMines];

{
	if (_x isKindOf "caManBase") then
	{
		if (local _x) then
		{
			player sideChat "AP mine!";
		};
	};
	// kill anything that enters mine field
	_x setDamage 1;
} forEach _this;
