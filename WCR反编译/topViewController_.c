// topViewController: @ 00936fcc

/* Function Stack Size: 0x18 bytes */

ID MyAction::topViewController_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  ID local_48;
  undefined4 local_3c;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  IVar3 = local_30;
  if ((IVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___UITabBarController_026ce108;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    IVar2 = local_30;
    if ((IVar3 & 1) == 0) {
      IVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_presentedViewController_0269d448);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      IVar2 = local_20;
      local_18 = local_30;
      if (IVar3 == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_3c = 1;
      }
      else {
        IVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_presentedViewController_0269d448);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_topViewController__026aa708);
        _objc_retainAutoreleasedReturnValue();
        local_18 = IVar2;
        (*(code *)PTR__objc_release_02578630)(IVar3);
        local_3c = 1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      IVar3 = local_20;
      local_48 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_selectedViewController_0269d610);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_topViewController__026aa708);
      _objc_retainAutoreleasedReturnValue();
      local_18 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      local_3c = 1;
      _objc_storeStrong(&local_48,0);
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    IVar2 = local_20;
    local_38 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_visibleViewController_0269d460);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_topViewController__026aa708);
    _objc_retainAutoreleasedReturnValue();
    local_18 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_3c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

