// FUN_006b190c @ 006b190c

void FUN_006b190c(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  uint local_38;
  ulong local_28;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_006a8bf8();
  if ((uVar1 & 1) == 0) {
    local_1c = 1;
  }
  else {
    _objc_storeWeak(&DAT_028cbe30,local_18);
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar1;
    while (uVar1 = local_28, local_28 != 0) {
      puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      local_38 = 0;
      if ((uVar1 & 1) != 0) {
        uVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_38 = (uint)uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      if ((local_38 & 1) != 0) {
        _objc_storeWeak(&DAT_028cbe38,local_28);
        break;
      }
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nextResponder_0269d0d8);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_28;
      local_28 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

