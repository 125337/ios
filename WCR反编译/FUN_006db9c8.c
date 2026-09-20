// FUN_006db9c8 @ 006db9c8

void FUN_006db9c8(long param_1)

{
  char *pcVar1;
  undefined *puVar2;
  char *pcVar3;
  ulong uVar4;
  char *local_90;
  char *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  undefined4 local_5c;
  char *local_58;
  char *local_50 [3];
  char *local_38;
  long local_30;
  long local_28;
  
  pcVar1 = "MMServiceCenter";
  local_30 = param_1;
  local_28 = param_1;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "CContactMgr";
  local_38 = pcVar1;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_getService__0269d170,pcVar3);
  _objc_retainAutoreleasedReturnValue();
  local_50[0] = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_getContactByName__0269d178,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_38;
  local_58 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el_b0RO);
    local_5c = 1;
  }
  else {
    pcVar1 = "MMMsgLogicManager";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_getService__0269d170,pcVar1);
    _objc_retainAutoreleasedReturnValue();
    local_70 = (char *)0x0;
    uVar4 = *(ulong *)(param_1 + 0x28);
    puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    local_68 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar4 & 1) != 0) {
      pcVar3 = *(char **)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_70;
      local_70 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    if (local_70 == (char *)0x0) {
      pcVar1 = "CAppViewControllerManager";
      _objc_getClass();
      local_78 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,
                 PTR_s_getAppViewControllerManager_026a3848);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar1 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_getAppViewControllerManager_026a3848);
        _objc_retainAutoreleasedReturnValue();
        local_80 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getTabBarController_026a6bc0);
        if (((ulong)pcVar1 & 1) != 0) {
          pcVar1 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_getTabBarController_026a6bc0);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___UITabBarController_026ce108;
          local_88 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UITabBarController_026ce108,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
          if (((ulong)pcVar1 & 1) != 0) {
            pcVar1 = local_88;
            (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_selectedViewController_0269d610);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
            local_90 = pcVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
            if (((ulong)pcVar1 & 1) == 0) {
              pcVar3 = local_90;
              (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_navigationController_0269d458);
              _objc_retainAutoreleasedReturnValue();
              pcVar1 = local_70;
              local_70 = pcVar3;
              (*(code *)PTR__objc_release_02578630)(pcVar1);
            }
            else {
              _objc_storeStrong(&local_70,local_90);
            }
            _objc_storeStrong(&local_90,0);
          }
          _objc_storeStrong(&local_88,0);
        }
        _objc_storeStrong(&local_80,0);
      }
    }
    puVar2 = PTR_s_PushOtherBaseMsgControllerByCont_0269d640;
    if (((local_68 == (char *)0x0) || (local_70 == (char *)0x0)) ||
       (pcVar1 = local_68,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_68,PTR_s_respondsToSelector__026ca818,
                  PTR_s_PushOtherBaseMsgControllerByCont_0269d640), ((ulong)pcVar1 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSb);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_68,puVar2,local_58,local_70,1);
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
    local_5c = 0;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(local_50,0);
  _objc_storeStrong(&local_38,0);
  return;
}

