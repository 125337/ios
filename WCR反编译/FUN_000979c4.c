// FUN_000979c4 @ 000979c4

void FUN_000979c4(undefined8 param_1)

{
  ulong uVar1;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
    goto LAB_00097b64;
  }
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_viewModel);
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  if (uVar1 == 0) {
LAB_00097ad0:
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_messageWrap);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_messageWrap_0269d070);
    if ((uVar1 & 1) == 0) goto LAB_00097ad0;
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_messageWrap_0269d070);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar1;
  }
  local_24 = 1;
  _objc_storeStrong(&local_30,0);
LAB_00097b64:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

