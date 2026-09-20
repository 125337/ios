// FUN_002b8f9c @ 002b8f9c

void FUN_002b8f9c(undefined8 param_1)

{
  uint uVar1;
  cfstringStruct **ppcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_108;
  cfstringStruct *local_60;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_2c;
  cfstringStruct *local_28;
  
  ppcVar2 = &local_28;
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(ppcVar2,param_1);
  if (local_28 == (cfstringStruct *)0x0) {
    local_2c = 1;
  }
  else {
    FUN_002b97fc();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBackgroundImage__026a0020);
    (*(code *)PTR__objc_release_02578630)();
    FUN_002b97fc();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setShadowImage__026a1a90);
    (*(code *)PTR__objc_release_02578630)(ppcVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTranslucent__026a19b8,1);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar4 = &cf_UITabBarAppearance;
    _NSClassFromString();
    uVar1 = 0xd;
    local_48 = pcVar4;
    FUN_002b0a2c();
    if (((uVar1 & 1) != 0) && (local_48 != (cfstringStruct *)0x0)) {
      local_50 = (cfstringStruct *)0x0;
      pcVar4 = &cf_standardAppearance;
      _NSSelectorFromString();
      pcVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar4);
      if (((ulong)pcVar5 & 1) != 0) {
        pcVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,pcVar4);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_50;
        local_50 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
      pcVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_copy_0269d150);
      local_108 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_60 = local_48;
        _objc_alloc_init();
        local_108 = local_60;
      }
      _objc_storeStrong(&local_50,local_108);
      if (pcVar4 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      if (local_50 != (cfstringStruct *)0x0) {
        pcVar4 = &cf_configureWithTransparentBackground;
        _NSSelectorFromString();
        pcVar5 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar4);
        if (((ulong)pcVar5 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_50,pcVar4);
        }
        pcVar4 = &cf_setBackgroundEffect_;
        _NSSelectorFromString();
        pcVar5 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar4);
        if (((ulong)pcVar5 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_50,pcVar4,0);
        }
        pcVar4 = &cf_setBackgroundColor_;
        _NSSelectorFromString();
        pcVar6 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar4);
        pcVar5 = local_50;
        if (((ulong)pcVar6 & 1) != 0) {
          puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,pcVar4);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        pcVar4 = &cf_setShadowColor_;
        _NSSelectorFromString();
        pcVar6 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar4);
        pcVar5 = local_50;
        if (((ulong)pcVar6 & 1) != 0) {
          puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,pcVar4);
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
        pcVar4 = &cf_setShadowImage_;
        _NSSelectorFromString();
        pcVar6 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar4);
        pcVar5 = local_50;
        if (((ulong)pcVar6 & 1) != 0) {
          FUN_002b97fc();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,pcVar4);
          (*(code *)PTR__objc_release_02578630)(pcVar6);
        }
        pcVar4 = &cf_setStandardAppearance_;
        _NSSelectorFromString();
        pcVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar4);
        if (((ulong)pcVar5 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,pcVar4,local_50);
        }
        pcVar4 = &cf_setScrollEdgeAppearance_;
        _NSSelectorFromString();
        uVar1 = 0xf;
        FUN_002b0a2c();
        if (((uVar1 & 1) != 0) &&
           (pcVar5 = local_28,
           (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar4)
           , ((ulong)pcVar5 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,pcVar4,local_50);
        }
      }
      _objc_storeStrong(&local_50,0);
    }
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

