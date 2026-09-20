// FUN_000fa894 @ 000fa894

void FUN_000fa894(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_40 [3];
  ulong local_28;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  local_20 = param_2;
  FUN_000fad94(local_18,param_2,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = uVar2;
  if ((local_28 != 0) && (uVar2 != 0)) {
    uVar1 = local_28;
    FUN_000faf34();
    if ((uVar1 & 1) == 0) {
      _objc_setAssociatedObject(local_28,DAT_026df888,0,1);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHidden__026ca970,0);
    (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_28,PTR_s_setAlpha__026ca860);
    FUN_000fb0dc(local_18,local_28,local_20);
    if (((uVar1 & 1) == 0) && (local_20 == 1)) {
      FUN_000fb6cc(0,local_18);
    }
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return;
}

