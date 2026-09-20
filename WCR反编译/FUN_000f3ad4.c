// FUN_000f3ad4 @ 000f3ad4

void FUN_000f3ad4(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  pcVar1 = &cf_BaseMsgContentViewController;
  _NSClassFromString();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar1);
  if ((uVar2 & 1) == 0) {
    local_18 = 0;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getChatContact_0269d630);
    if ((uVar2 & 1) == 0) {
      local_18 = 0;
    }
    else {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getChatContact_0269d630);
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar2;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

