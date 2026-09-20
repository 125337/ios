// FUN_0171bcf0 @ 0171bcf0

void FUN_0171bcf0(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong local_48 [3];
  ulong local_30;
  uint local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
    goto LAB_0171bf2c;
  }
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_viewModel);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar2;
  if ((uVar2 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_messageWrap_0269d070),
     (uVar2 & 1) == 0)) {
LAB_0171bea4:
    local_24 = 0;
  }
  else {
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_messageWrap_0269d070);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = &cf_CMessageWrap;
    local_48[0] = uVar3;
    _NSClassFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar4);
    uVar2 = local_48[0];
    bVar1 = (uVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
    }
    local_24 = (uint)bVar1;
    _objc_storeStrong(local_48,0);
    if (local_24 == 0) goto LAB_0171bea4;
  }
  _objc_storeStrong(&local_30,0);
  if (local_24 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
LAB_0171bf2c:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

