// FUN_006aebc4 @ 006aebc4

void FUN_006aebc4(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (DAT_028cbf50 != (code *)0x0) {
    (*DAT_028cbf50)(local_18,param_2);
  }
  FUN_006b1af8(local_18);
  FUN_006a7dbc();
  _objc_storeStrong(&local_18,0);
  return;
}

