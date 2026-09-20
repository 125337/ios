// FUN_00774408 @ 00774408

void FUN_00774408(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  FUN_0077614c(local_28);
  DAT_028cc998 = 1;
  (*DAT_028cc980)(local_18,local_20,local_28);
  DAT_028cc998 = 0;
  _objc_storeStrong(&local_28,0);
  return;
}

