// presentSwipeQuoteCustomTriggerThresholdAlert @ 01a415c4

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineGeneralFunctionViewController::presentSwipeQuoteCustomTriggerThresholdAlert
          (WCRefineGeneralFunctionViewController *this,ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  double in_d0;
  double local_e8;
  cfstringStruct *local_d8;
  double local_d0;
  char *local_b0;
  undefined *local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  byte local_79;
  cfstringStruct *local_78;
  double local_70;
  double local_68;
  cfstringStruct *local_58 [2];
  double local_48;
  double local_40;
  char *local_38;
  SEL local_30;
  ID local_28;
  
  pcVar1 = "WCUIAlertView";
  local_30 = param_2;
  local_28 = param_1;
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    local_38 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_defaultSwipeQuoteTriggerThreshol_026bc638);
    local_40 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentSwipeQuoteAnimationAmplit_026bc640);
    puVar2 = PTR_WCRefineConfig_026cdf58;
    local_48 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_79 = 0;
    if (in_d0 <= 0.0) {
      local_d8 = &::cf___;
    }
    else {
      local_68 = local_48;
      local_d0 = in_d0;
      if (local_48 <= in_d0) {
        local_d0 = local_48;
      }
      local_70 = local_d0;
      local_d8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2f);
      _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      local_78 = local_d8;
    }
    pcVar3 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_58[0] = local_d8;
    if ((local_79 & 1) != 0) {
      pcVar3 = local_78;
      (*(code *)PTR__objc_release_02578630)();
    }
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_90 = local_40;
    local_98 = local_48;
    if (local_48 <= local_40) {
      local_e8 = local_48;
    }
    else {
      local_e8 = local_40;
    }
    local_a0 = local_e8;
    local_88 = local_e8;
    FUN_01a4058c(local_40);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    FUN_01a4058c(local_88);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    FUN_01a4058c(local_48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf_eQS<PUSMO);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = puVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar1 = local_38;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_b0 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_28);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_28,
               PTR_s_handleSwipeQuoteCustomTriggerThr_026bc688);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_showTextFieldWithMaxLen__0269e5e0,8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_setTextFieldDefaultText__0269fd98,local_58[0]);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_show_0269d280);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(local_58,0);
  }
  return;
}

