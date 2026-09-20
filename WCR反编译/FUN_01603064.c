// FUN_01603064 @ 01603064

void FUN_01603064(ulong param_1)

{
  char *pcVar1;
  ulong uVar2;
  ulong local_58;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  FUN_016036c4();
  _objc_retainAutoreleasedReturnValue();
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_visibleViewController_0269d460);
  _objc_retainAutoreleasedReturnValue();
  local_58 = param_1;
  if (param_1 == 0) {
    FUN_01604cbc();
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_58;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_58;
  if (param_1 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(param_1);
  pcVar1 = "BaseMsgContentViewController";
  _objc_getClass();
  if (((pcVar1 == (char *)0x0) || (local_28 == 0)) ||
     (uVar2 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isKindOfClass__0269cd68,pcVar1),
     local_18 = local_28, (uVar2 & 1) == 0)) {
    local_18 = 0;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

