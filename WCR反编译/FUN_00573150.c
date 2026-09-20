// FUN_00573150 @ 00573150

void FUN_00573150(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (DAT_028cb580 != (code *)0x0) {
    (*DAT_028cb580)(local_18,param_2);
  }
  FUN_00573c88(local_18);
  _objc_storeStrong(&local_18,0);
  return;
}

