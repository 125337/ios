// FUN_005730d0 @ 005730d0

void FUN_005730d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (DAT_028cb578 != (code *)0x0) {
    (*DAT_028cb578)(local_18,param_2);
  }
  FUN_00573c88(local_18);
  _objc_storeStrong(&local_18,0);
  return;
}

