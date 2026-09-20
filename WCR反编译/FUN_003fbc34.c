// FUN_003fbc34 @ 003fbc34

ulong FUN_003fbc34(ulong param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong local_38;
  byte local_29;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_18;
  pcVar1 = DAT_028ca618;
  local_29 = param_4;
  (*(code *)PTR__objc_retain_02578638)();
  (*pcVar1)(uVar2,local_20,local_28,local_29 & 1);
  local_38 = uVar2;
  FUN_003fbf38();
  if ((uVar2 & 1) != 0) {
    FUN_003fc050(local_38);
  }
  uVar2 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return uVar2;
}

