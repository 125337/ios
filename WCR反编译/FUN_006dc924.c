// FUN_006dc924 @ 006dc924

/* WARNING: Removing unreachable block (ram,0x006dc9d0) */
/* WARNING: Removing unreachable block (ram,0x006dc9b0) */

void FUN_006dc924(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  DAT_028cc2b8 = DAT_028cc2b8 + 1;
  (*DAT_028cc298)(local_18,local_20,local_28);
  DAT_028cc2b8 = DAT_028cc2b8 + -1;
  _objc_storeStrong(&local_28,0);
  return;
}

