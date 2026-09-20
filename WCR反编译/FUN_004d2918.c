// FUN_004d2918 @ 004d2918

undefined4 FUN_004d2918(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  undefined4 local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_14 = 0;
    local_24 = 1;
  }
  else {
    local_30 = 0;
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_uiMessageType);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    local_30 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntValue_0269db10);
    if ((uVar2 & 1) == 0) {
      local_14 = 0;
    }
    else {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_unsignedIntValue_0269db10);
      local_14 = (undefined4)uVar2;
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_14;
}

