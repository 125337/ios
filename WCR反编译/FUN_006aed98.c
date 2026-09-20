// FUN_006aed98 @ 006aed98

void FUN_006aed98(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  if (DAT_028cbf68 != (code *)0x0) {
    (*DAT_028cbf68)(local_18,local_20,local_28);
  }
  FUN_006b1c0c(local_18);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

