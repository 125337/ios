// FUN_0051c80c @ 0051c80c

void FUN_0051c80c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar2;
  do {
    uVar2 = local_28;
    if (local_28 == 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_rootViewController_026ca820);
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar2;
      while( true ) {
        uVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        local_18 = local_48;
        if (uVar2 == 0) break;
        uVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_48;
        local_48 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = 1;
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_40,0);
LAB_0051caac:
      _objc_storeStrong(&local_28);
      _objc_storeStrong(&local_20,0);
      _objc_autoreleaseReturnValue(local_18);
      return;
    }
    puVar1 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar3 = local_28;
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar3;
      local_38 = 1;
      goto LAB_0051caac;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_28;
    local_28 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  } while( true );
}

