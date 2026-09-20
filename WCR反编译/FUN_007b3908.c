// FUN_007b3908 @ 007b3908

byte FUN_007b3908(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_50 [3];
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_20;
  FUN_007bdd0c();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  FUN_007bd820(uVar1,local_30);
  uVar2 = local_20;
  if ((uVar1 & 1) == 0) {
    (*DAT_028ccc60)(local_20,local_28,local_30);
    local_11 = (byte)uVar2 & 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_50[0] = uVar2;
    local_11 = 0;
    _objc_storeStrong(local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

