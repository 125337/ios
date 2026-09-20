// showIPadLoginModePicker @ 01a47d40

/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::showIPadLoginModePicker(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  ID IVar5;
  char *local_38;
  undefined1 *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar2 = "WCUIActionSheet";
  _objc_getClass();
  if (pcVar2 != (char *)0x0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    local_28 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = local_28;
    local_30 = puVar4;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar1 = &::cf_format_s_;
    if (local_30 != (undefined1 *)0x0) {
      pcVar1 = &::cf__;
    }
    local_38 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,pcVar1,local_18,
               PTR_s_wcr_selectIPadLoginModeDefault_026bc9f8);
    pcVar1 = &cf_i;
    if (local_30 != (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      pcVar1 = &cf_i;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_addBtnTitle_target_sel__0269d278,pcVar1,local_18,
               PTR_s_wcr_selectIPadLoginModeIPad_026bca00);
    pcVar1 = &cf____sQ;
    if (local_30 != (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      pcVar1 = &cf____sQ;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_addBtnTitle_target_sel__0269d278,pcVar1,local_18,
               PTR_s_wcr_selectIPadLoginModeOff_026bca08);
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,
               PTR_s_addCancelBtnTitle_target_sel__0269d268);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    }
    pcVar2 = local_38;
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

