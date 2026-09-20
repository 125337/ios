// setMomentsDetailedTimeFormat @ 01c0f914

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsViewController::setMomentsDetailedTimeFormat(ID param_1,SEL param_2)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_78;
  cfstringStruct *local_68;
  char *local_50;
  byte local_41;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  char *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  pcVar1 = "WCUIAlertView";
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    local_28 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_68 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_68;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    local_41 = 0;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_78 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_momentsDetailedTimeDefaultFormat_026c1230);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_78;
    }
    else {
      local_78 = local_30;
    }
    local_41 = pcVar2 == (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_78;
    if ((local_41 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    pcVar1 = local_28;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Sm,local_18);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_handleMomentsDetailedTimeFormatI_026c1238);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_showTextFieldWithMaxLen__0269e5e0,100);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTextFieldDefaultText__0269fd98,local_38)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_show_0269d280);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

