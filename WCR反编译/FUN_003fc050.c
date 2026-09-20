// FUN_003fc050 @ 003fc050

void FUN_003fc050(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_38 [3];
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_isKindOfClass__0269cd68);
    uVar3 = local_18;
    if ((uVar1 & 1) == 0) {
      local_1c = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      uVar1 = local_18;
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_38[0] = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_interactivePopGestureRecognizer_026a2f10);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (uVar1 != 0) {
          uVar3 = local_38[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_viewControllers_0269e348);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          uVar1 = local_38[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38[0],PTR_s_interactivePopGestureRecognizer_026a2f10);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar1);
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        _objc_storeStrong(local_38,0);
      }
      local_1c = 0;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

