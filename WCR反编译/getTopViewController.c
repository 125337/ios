// getTopViewController @ 00907444

/* Function Stack Size: 0x10 bytes */

ID LogFloatingBall::getTopViewController(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  ID local_40;
  undefined4 local_34;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_getRootViewController_026aa000);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  while( true ) {
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    IVar3 = local_30;
    if (IVar1 == 0) break;
    IVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_30;
    local_30 = IVar1;
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  IVar1 = local_30;
  if ((IVar3 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___UITabBarController_026ce108;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_18 = local_30;
    if ((IVar1 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_34 = 1;
    }
    else {
      IVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_selectedViewController_0269d610);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      local_40 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      local_18 = local_40;
      if ((IVar3 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
      }
      else {
        IVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_topViewController_0269e588);
        _objc_retainAutoreleasedReturnValue();
        local_18 = IVar3;
      }
      local_34 = 1;
      _objc_storeStrong(&local_40,0);
    }
  }
  else {
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_topViewController_0269e588);
    _objc_retainAutoreleasedReturnValue();
    local_34 = 1;
    local_18 = IVar3;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

