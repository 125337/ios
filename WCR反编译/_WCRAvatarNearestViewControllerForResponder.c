// _WCRAvatarNearestViewControllerForResponder @ 0093828c

void _WCRAvatarNearestViewControllerForResponder(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  int local_2c;
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
      local_2c = 2;
LAB_00938390:
      _objc_storeStrong(&local_28,0);
      local_2c = local_2c + -2;
      if (local_2c == 0) {
        local_18 = 0;
        local_2c = 1;
      }
      _objc_storeStrong(local_2c,&local_20,0);
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
      local_2c = 1;
      goto LAB_00938390;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_28;
    local_28 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  } while( true );
}

