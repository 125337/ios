// FUN_014b1b28 @ 014b1b28

void FUN_014b1b28(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
    goto LAB_014b1c8c;
  }
  local_30 = 0;
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_delegate);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_30;
  local_30 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (local_30 == 0) {
LAB_014b1c6c:
    local_18 = 0;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getViewController_0269d328);
    if ((uVar2 & 1) == 0) goto LAB_014b1c6c;
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getViewController_0269d328);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar2;
  }
  local_24 = 1;
  _objc_storeStrong(&local_30,0);
LAB_014b1c8c:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

