// openVideoWatermarkOpacitySettingForIndex: @ 01803830

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineAssistFunctionViewController::openVideoWatermarkOpacitySettingForIndex_
          (WCRefineAssistFunctionViewController *this,ID param_1,SEL param_2,long_long param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  float in_s0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [8];
  undefined **local_a0;
  undefined1 auStack_98 [32];
  char *local_78;
  char *local_70;
  undefined4 local_64;
  char *local_60;
  undefined *local_58;
  double local_50;
  undefined *local_48;
  undefined *local_40;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_videoWatermark_ldOpacity);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_40;
  local_48 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,puVar3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_50 = (double)in_s0;
  if ((double)in_s0 <= 0.0) {
    local_50 = 1.0;
  }
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___1f);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = "WCUIAlertView";
  local_58 = puVar2;
  _objc_getClass();
  local_60 = pcVar4;
  if (pcVar4 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el>f_yeQFh);
    local_64 = 1;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_70 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_showTextFieldWithMaxLen__0269e5e0,10);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setTextFieldDefaultText__0269fd98,local_58)
    ;
    pcVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar4;
    if ((pcVar4 != (char *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_setKeyboardType__026aec58),
       ((ulong)pcVar4 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setKeyboardType__026aec58,8);
    }
    _objc_storeStrong(&local_78,0);
    _objc_initWeak(auStack_98,local_28);
    puVar3 = local_40;
    ppuVar5 = &local_d8;
    local_d8 = PTR___NSConcreteStackBlock_02578660;
    local_d0 = 0xc2000000;
    local_cc = 0;
    local_c8 = FUN_01803e1c;
    local_c0 = &DAT_02589188;
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = local_48;
    local_b8 = puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar2;
    _objc_copyWeak(auStack_a8,auStack_98);
    _objc_retainBlock();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_a0 = ppuVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_handleVideoWatermarkOpacityConfirm_ld_);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    _NSSelectorFromString();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_handleVideoWatermarkOpacityCancel_ld_);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar2;
    _NSSelectorFromString();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar1 = local_28;
    ppuVar5 = local_a0;
    _objc_retainBlock();
    _objc_setAssociatedObject(IVar1,puVar3,ppuVar5,1);
    (*(code *)PTR__objc_release_02578630)(ppuVar5);
    _objc_setAssociatedObject(local_28,puVar6,local_70,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_28,puVar6);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx,local_28,puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_show_0269d280);
    _objc_storeStrong(&local_a0);
    _objc_destroyWeak(auStack_a8);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_b8,0);
    _objc_destroyWeak(auStack_98);
    _objc_storeStrong(&local_70,0);
    local_64 = 0;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return;
}

