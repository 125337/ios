// FUN_006aeb2c @ 006aeb2c

void FUN_006aeb2c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (DAT_028cbf48 != (code *)0x0) {
    (*DAT_028cbf48)(local_18,param_2,param_3 & 1);
  }
  FUN_006b1af8(local_18);
  FUN_006a7dbc();
  _objc_storeStrong(&local_18,0);
  return;
}

