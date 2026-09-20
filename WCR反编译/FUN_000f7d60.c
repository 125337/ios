// FUN_000f7d60 @ 000f7d60

void FUN_000f7d60(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028c8410)(local_18,local_20,local_28);
  uVar2 = local_28;
  uVar1 = local_18;
  FUN_000f9998();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (uVar2 == uVar1) {
    uVar2 = local_18;
    FUN_000fad94(local_18,0,0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    FUN_000faf34();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((uVar1 & 1) != 0) {
      FUN_000faaac(DAT_02323d88,local_18,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

