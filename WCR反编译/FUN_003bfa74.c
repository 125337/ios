// FUN_003bfa74 @ 003bfa74

void FUN_003bfa74(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (DAT_028ca180 != (code *)0x0) {
    (*DAT_028ca180)(local_18,param_2);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

