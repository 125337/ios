// FUN_00022d10 @ 00022d10

void FUN_00022d10(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_0001a4fc(local_20,&cf_m_viewController);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  if (uVar1 == 0) {
    uVar2 = local_20;
    FUN_0001a198(local_20,PTR_s_getViewController_0269d328);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_28;
    local_28 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar1 = local_28;
  pcVar3 = "BaseMsgContentViewController";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,pcVar3);
  uVar2 = local_28;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_20;
    FUN_00017874();
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar2;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

