// setContactsFriendAddTimeFormat @ 01a6e384

/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::setContactsFriendAddTimeFormat(ID param_1,SEL param_2)

{
  bool bVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_78;
  cfstringStruct *local_68;
  char *local_50;
  byte local_41;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar2 = "WCUIAlertView";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  if (pcVar2 != (char *)0x0) {
    pcVar3 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    local_28 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_68 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_68;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    local_78 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    local_41 = 0;
    bVar1 = local_78 == (cfstringStruct *)0x0;
    if (bVar1) {
      FUN_01a6e624(0);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_78;
    }
    else {
      local_78 = local_30;
    }
    local_41 = bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_78;
    if ((local_41 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    pcVar2 = local_28;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_handleContactsFriendAddTimeForma_026bd310);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x40);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTextFieldDefaultText__0269fd98,local_38)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_show_0269d280);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

