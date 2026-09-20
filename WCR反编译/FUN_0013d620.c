// FUN_0013d620 @ 0013d620

void FUN_0013d620(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (DAT_028c86a0 != (code *)0x0) {
    (*DAT_028c86a0)(local_18,param_2);
  }
  FUN_00142ce8(local_18);
  _objc_storeStrong(&local_18,0);
  return;
}

