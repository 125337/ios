// FUN_006aee40 @ 006aee40

void FUN_006aee40(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (DAT_028cbf70 != (code *)0x0) {
    (*DAT_028cbf70)(local_18,param_2);
  }
  FUN_006b1c0c(local_18);
  _objc_storeStrong(&local_18,0);
  return;
}

