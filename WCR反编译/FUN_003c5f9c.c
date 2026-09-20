// FUN_003c5f9c @ 003c5f9c

void FUN_003c5f9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (DAT_028ca260 != (code *)0x0) {
    (*DAT_028ca260)(local_18,param_2);
  }
  FUN_003c67a4(local_18);
  _objc_storeStrong(&local_18,0);
  return;
}

