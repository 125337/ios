// FUN_006ae9e8 @ 006ae9e8

void FUN_006ae9e8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 local_30;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_30 = 0;
  local_24 = param_3;
  local_20 = param_2;
  _objc_storeStrong(&local_30,param_4);
  if (DAT_028cbf38 != (code *)0x0) {
    (*DAT_028cbf38)(local_18,local_20,local_24,local_30);
  }
  FUN_006b190c(local_18);
  FUN_006a8104(local_18);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_18,0);
  return;
}

