// FUN_003c5f14 @ 003c5f14

void FUN_003c5f14(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (DAT_028ca258 != (code *)0x0) {
    (*DAT_028ca258)(local_18,param_2);
  }
  FUN_003c67a4(local_18);
  FUN_003c69dc(local_18);
  _objc_storeStrong(&local_18,0);
  return;
}

