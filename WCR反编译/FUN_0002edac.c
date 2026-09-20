// FUN_0002edac @ 0002edac

void FUN_0002edac(undefined8 param_1)

{
  ulong uVar1;
  char *pcVar2;
  ulong local_88;
  ulong local_58;
  ulong local_38;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_0001a198(local_18,PTR_s_referingMessageWrap_0269d110);
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar1;
  if (uVar1 == 0) {
    local_38 = local_18;
    FUN_0001a4fc(local_18,&cf__referingMessageWrap);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_58;
  if (uVar1 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_20;
  pcVar2 = "CMessageWrap";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,pcVar2);
  if ((uVar1 & 1) == 0) {
    local_88 = 0;
  }
  else {
    local_88 = local_20;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_88);
  return;
}

