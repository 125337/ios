// FUN_006ae960 @ 006ae960

void FUN_006ae960(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (DAT_028cbf30 != (code *)0x0) {
    (*DAT_028cbf30)(local_18,param_2);
  }
  FUN_006b190c(local_18);
  FUN_006a8104(local_18);
  _objc_storeStrong(&local_18,0);
  return;
}

