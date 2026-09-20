// FUN_010efe34 @ 010efe34

void FUN_010efe34(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (DAT_028e3468 != (code *)0x0) {
    (*DAT_028e3468)(local_18,param_2);
  }
  if ((DAT_028e3441 & 1) == 0) {
    FUN_010ef568(local_18);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

