// FUN_000f3c0c @ 000f3c0c

void FUN_000f3c0c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  undefined *local_50;
  ulong local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar3 = local_18;
  puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_28 = 1;
  }
  else {
    pcVar4 = &cf_WCRefineGeneralFunctionViewController;
    _NSClassFromString();
    local_30 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_8__uRubNS_u);
      local_28 = 1;
    }
    else {
      _objc_alloc_init();
      puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
      local_38 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
      pcVar1 = local_38;
      if (((ulong)pcVar4 & 1) == 0) {
        local_28 = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_40 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
        uVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        local_48 = uVar3;
        if (uVar3 == 0) {
          puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_initWithRootViewController__0269d2a0,local_40);
          local_50 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setModalPresentationStyle__0269d2a8,2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_50,1,0);
          local_28 = 1;
          _objc_storeStrong(&local_50,0);
        }
        else {
          pcVar4 = &cf_PushViewController_animated_;
          _NSSelectorFromString();
          uVar3 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar4);
          if ((uVar3 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_pushViewController_animated__0269d590,local_40,1);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_48,pcVar4,local_40,1);
          }
          local_28 = 0;
        }
        _objc_storeStrong(&local_48);
        _objc_storeStrong(&local_40,0);
      }
      _objc_storeStrong(&local_38,0);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

