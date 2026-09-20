// FUN_001bccbc @ 001bccbc

void FUN_001bccbc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028c8b90)(local_18,local_20,local_28,param_4);
  uVar1 = local_18;
  FUN_001f1dd4();
  if ((uVar1 & 1) != 0) {
    FUN_001f18bc(local_18);
    FUN_001f1a80(local_18);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

