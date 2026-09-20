// FUN_002f7584 @ 002f7584

void FUN_002f7584(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (DAT_028c9a78 != (code *)0x0) {
    (*DAT_028c9a78)(local_18,param_2,param_3 & 1);
  }
  FUN_002fc2cc(local_18,param_3 & 1,1);
  _objc_storeStrong(&local_18,0);
  return;
}

