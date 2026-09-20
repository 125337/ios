// FUN_001040b4 @ 001040b4

void FUN_001040b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (DAT_028c8490 != (code *)0x0) {
    (*DAT_028c8490)(local_18,param_2);
  }
  FUN_001090c0(local_18);
  _objc_storeStrong(&local_18,0);
  return;
}

