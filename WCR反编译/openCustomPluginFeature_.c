// openCustomPluginFeature: @ 01d2b940

/* Function Stack Size: 0x18 bytes */

void WCRefineRootViewController::openCustomPluginFeature_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  undefined *local_68 [4];
  ulong local_48;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar2 = local_28;
  _objc_getAssociatedObject(local_28,DAT_028c6990);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_30 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gMn_cNc6RhV);
    local_34 = 1;
  }
  else {
    uVar2 = local_30;
    _NSClassFromString();
    puVar3 = PTR_WCRefineHelper_026ce000;
    local_40 = uVar2;
    if (uVar2 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_c6RhVNX__W_);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_showModernToast__0269ce78);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_34 = 1;
    }
    else {
      local_48 = 0;
      _objc_alloc_init();
      uVar1 = local_48;
      local_48 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      uVar2 = local_48;
      puVar3 = PTR__OBJC_CLASS___UIViewController_026cdf80;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      puVar3 = PTR_WCRefineHelper_026ce000;
      if ((uVar2 & 1) == 0) {
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_showModernToast__0269ce78);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_34 = 1;
      }
      else {
        IVar5 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (IVar5 == 0) {
          puVar3 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_68[0] = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_presentViewController_animated_c_0269d2b0,puVar3,1);
          _objc_storeStrong(local_68,0);
        }
        else {
          IVar5 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar5);
        }
        local_34 = 0;
      }
      _objc_storeStrong(&local_48,0);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

