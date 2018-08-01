
#pragma once

enum MAIN_MENU
{
	MM_NONE,
	MM_STAGE,
	MM_STORE,
	MM_INVENTORY,
	MM_EXIT
};

// Stage Type
enum STAGE_TYPE
{
	ST_NONE,
	ST_EASY,
	ST_NORMAL,
	ST_HARD,
	ST_BACK
};

// Object Type
enum OBJECT_TYPE
{
	OT_PLAYER,
	OT_MONSTER,
	OT_ITEM_WEAPON,
	OT_ITEM_ARMOR
};

enum STORE_TYPE
{
	STR_NONE,
	STR_WEAPON,
	STR_ARMOR,
	STR_BACK
};

enum ITEM_TYPE
{
	IT_WEAPON,
	IT_ARMOR,
	IT_MAX
};

enum JOB
{
	JOB_NONE,
	JOB_KNIGHT,
	JOB_ARCHER,
	JOB_MAGICIAN,
	JOB_END
};