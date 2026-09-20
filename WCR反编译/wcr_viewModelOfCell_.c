// wcr_viewModelOfCell: @ 010e99f8

/* Function Stack Size: 0x18 bytes */

ID WCRefineNameplateHelper::wcr_viewModelOfCell_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_60;
  bool local_49;
  ulong local_48;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_18 = 0;
  }
  else {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_viewModel_0269d080);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
      _class_getInstanceVariable();
      if (uVar2 == 0) {
        local_60 = 0;
      }
      else {
        local_60 = local_30;
        _object_getIvar(local_30,uVar2);
        _objc_retainAutoreleasedReturnValue();
        local_48 = local_60;
      }
      local_49 = uVar2 != 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_60;
      if (local_49) {
        (*(code *)PTR__objc_release_02578630)(local_48);
      }
    }
    else {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_viewModel_0269d080);
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar2;
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

