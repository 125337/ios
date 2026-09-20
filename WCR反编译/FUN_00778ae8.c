// FUN_00778ae8 @ 00778ae8

void FUN_00778ae8(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (DAT_028cc9a0 != (code *)0x0) {
    (*DAT_028cc9a0)(local_18,param_2);
  }
  FUN_00778f34(local_18);
  _objc_storeStrong(&local_18,0);
  return;
}

