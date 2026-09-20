// FUN_003c590c @ 003c590c

void FUN_003c590c(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (DAT_028ca238 != (code *)0x0) {
    (*DAT_028ca238)(local_18,param_2);
  }
  FUN_003c67a4(local_18);
  _objc_storeStrong(&local_18,0);
  return;
}

