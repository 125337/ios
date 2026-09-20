// FUN_00547d30 @ 00547d30

void FUN_00547d30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if ((DAT_028cb369 & 1) == 0) {
    FUN_00555580(local_28);
  }
  (*DAT_028cb3b8)(local_18,local_20,local_28);
  _objc_storeStrong(&local_28,0);
  return;
}

