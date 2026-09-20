// presentSwipeQuoteCustomLengthAlert @ 01a4080c

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineGeneralFunctionViewController::presentSwipeQuoteCustomLengthAlert
          (WCRefineGeneralFunctionViewController *this,ID param_1,SEL param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined8 in_d0;
  cfstringStruct *local_80;
  char *local_70;
  undefined *local_68;
  bool local_59;
  cfstringStruct *local_58;
  byte local_49;
  undefined *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar2 = "WCUIAlertView";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  if (pcVar2 != (char *)0x0) {
    local_28 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_defaultSwipeQuoteLengthValue_026bc628);
    local_30 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_recommendedShortSwipeQuoteLength_026bc630);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    local_38 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_80 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    local_49 = 0;
    local_59 = false;
    bVar1 = puVar4 != (undefined1 *)((long)&MACH_HEADER.magic + 2);
    if (bVar1) {
      local_80 = &::cf___;
    }
    else {
      puVar5 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_49 = 1;
      local_48 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_stringWithFormat__0269cca8,&cf___2f);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_80;
    }
    local_59 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_80;
    if ((local_59 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)();
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    FUN_01a4058c(local_30);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    FUN_01a4058c(local_38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf_eQnRyUSMO);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = local_28;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_70 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_handleSwipeQuoteCustomLengthInpu_026bc660);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_showTextFieldWithMaxLen__0269e5e0,8);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setTextFieldDefaultText__0269fd98,local_40)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_show_0269d280);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_40,0);
  }
  return;
}

