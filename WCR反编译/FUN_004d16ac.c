// FUN_004d16ac @ 004d16ac

void FUN_004d16ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (((DAT_028cacea & 1) != 0) || ((DAT_028cace9 & 1) != 0)) {
    FUN_004d2d9c();
  }
  (*DAT_028cacc8)(local_18,local_20,local_28);
  _objc_storeStrong(&local_28,0);
  return;
}

