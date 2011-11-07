#include "game.h"
#include "setvector.h"

void game::init_moncats()
{
 setvector(
   moncats[mcat_forest],
	mon_squirrel, mon_rabbit, mon_deer, mon_wolf, mon_bear, mon_spider_wolf,
	mon_spider_jumping,mon_dog, NULL);

 setvector(
   moncats[mcat_ant],
	mon_ant_larva, mon_ant, mon_ant_soldier, mon_ant_queen, NULL);
 setvector(
   moncats[mcat_bee],
	mon_bee, NULL);
 setvector(
   moncats[mcat_worm],
	mon_graboid, mon_worm, mon_halfworm, NULL);
 setvector(
   moncats[mcat_zombie],
	mon_zombie, mon_zombie_shrieker, mon_zombie_spitter, mon_zombie_fast,
	mon_zombie_electric, mon_zombie_brute, mon_zombie_hulk,
	mon_zombie_necro, mon_boomer, mon_skeleton, NULL);
 setvector(
   moncats[mcat_triffid],
	mon_triffid, mon_triffid_young, mon_triffid_queen, mon_creeper_hub,
	mon_creeper_vine, mon_biollante, mon_triffid_heart, NULL);
 setvector(
   moncats[mcat_fungi],
	mon_fungaloid, mon_fungaloid_dormant, mon_ant_fungus, mon_zombie_fungus,
	mon_boomer_fungus, mon_spore, mon_fungaloid_queen, mon_fungal_wall,
	NULL);
 setvector(
   moncats[mcat_goo],
	mon_blob, NULL);
 setvector(
   moncats[mcat_chud],
	mon_chud, mon_one_eye, mon_crawler, NULL);
 setvector(
   moncats[mcat_sewer],
	mon_sewer_fish, mon_sewer_snake, mon_sewer_rat, NULL);
 setvector(
   moncats[mcat_swamp],
	mon_mosquito, mon_dragonfly, mon_centipede, mon_frog, mon_slug,
	mon_dermatik_larva, mon_dermatik, NULL);
 setvector(
   moncats[mcat_lab],
	mon_zombie_scientist, mon_blob_small, mon_manhack, mon_skitterbot,
	NULL);
 setvector(
   moncats[mcat_nether],
	mon_flying_polyp, mon_hunting_horror, mon_mi_go, mon_yugg, mon_gelatin,
	mon_flaming_eye, mon_kreck, mon_blank, NULL);
 setvector(
   moncats[mcat_spiral],
	mon_human_snail, mon_twisted_body, mon_vortex, NULL);
}

