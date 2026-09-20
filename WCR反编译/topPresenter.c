// topPresenter @ 00fdfe84

/* Function Stack Size: 0x10 bytes */

ID WCRefineIconNameCaptureSupport::topPresenter(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  ID local_80;
  ID local_68;
  ID local_50;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_keyAppWindow_026ad3e0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_rootViewController_026ca820);
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
  if ((IVar3 & 1) != 0) {
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_topViewController_0269e588);
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar3;
    if (IVar3 == 0) {
      local_50 = local_30;
    }
    _objc_storeStrong(&local_30,local_50);
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  IVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___UITabBarController_026ce108;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((IVar3 & 1) != 0) {
    IVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_selectedViewController_0269d610);
    _objc_retainAutoreleasedReturnValue();
    local_68 = IVar3;
    if (IVar3 == 0) {
      local_68 = local_30;
    }
    _objc_storeStrong(&local_30,local_68);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_30;
    puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((IVar3 & 1) != 0) {
      IVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_topViewController_0269e588);
      _objc_retainAutoreleasedReturnValue();
      local_80 = IVar3;
      if (IVar3 == 0) {
        local_80 = local_30;
      }
      _objc_storeStrong(&local_30,local_80);
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
  }
  IVar3 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar3;
}

