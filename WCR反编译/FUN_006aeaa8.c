// FUN_006aeaa8 @ 006aeaa8

void FUN_006aeaa8(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (DAT_028cbf40 != (code *)0x0) {
    (*DAT_028cbf40)(local_18,param_2);
  }
  FUN_006b1af8(local_18);
  FUN_006a7dbc();
  _objc_storeStrong(&local_18,0);
  return;
}

