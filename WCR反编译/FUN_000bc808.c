// FUN_000bc808 @ 000bc808

void FUN_000bc808(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  char *local_80;
  char *local_78;
  cfstringStruct *local_70;
  char *local_68;
  cfstringStruct *local_60;
  char *local_58;
  ulong local_50 [3];
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedViewController_0269d610);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_000bdebc();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (((local_38 == 0) && (local_28 != 0)) &&
     (uVar2 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_28,PTR_s_respondsToSelector__026ca818,
                PTR_s_getTabBarBaseViewController__0269e578), uVar1 = local_28,
     puVar5 = PTR_s_getTabBarBaseViewController__0269e578, (uVar2 & 1) != 0)) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedIndex_0269e580);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,puVar5,uVar2);
    _objc_retainAutoreleasedReturnValue();
    local_50[0] = uVar1;
    FUN_000bdebc();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_38;
    local_38 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_storeStrong(local_50,0);
  }
  if (local_38 == 0) {
    uVar2 = local_30;
    FUN_000bdebc();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_38;
    local_38 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  if (local_38 == 0) {
    pcVar3 = "CAppViewControllerManager";
    _objc_getClass();
    pcVar4 = &cf_getCurrentNavigationController;
    local_58 = pcVar3;
    _NSSelectorFromString();
    local_60 = pcVar4;
    if ((local_58 != (char *)0x0) &&
       (pcVar3 = local_58,
       (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_respondsToSelector__026ca818,pcVar4),
       ((ulong)pcVar3 & 1) != 0)) {
      pcVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,local_60);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      local_68 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
      if (((ulong)pcVar3 & 1) != 0) {
        _objc_storeStrong(&local_38,local_68);
      }
      _objc_storeStrong(&local_68,0);
    }
    if (local_38 == 0) {
      pcVar4 = &cf_getAppViewControllerManager;
      _NSSelectorFromString();
      local_70 = pcVar4;
      if ((local_58 != (char *)0x0) &&
         (pcVar3 = local_58,
         (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_respondsToSelector__026ca818,pcVar4),
         ((ulong)pcVar3 & 1) != 0)) {
        pcVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,local_70);
        _objc_retainAutoreleasedReturnValue();
        local_78 = pcVar3;
        if ((pcVar3 != (char *)0x0) &&
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_respondsToSelector__026ca818,local_60), ((ulong)pcVar3 & 1) != 0
           )) {
          pcVar3 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,local_60);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
          local_80 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
          if (((ulong)pcVar3 & 1) != 0) {
            _objc_storeStrong(&local_38,local_80);
          }
          _objc_storeStrong(&local_80,0);
        }
        _objc_storeStrong(&local_78,0);
      }
    }
  }
  uVar1 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar1);
  return;
}

