// promptRemark: @ 01b73048

/* Function Stack Size: 0x18 bytes */

void WCRefineLocalEmoticonLibraryViewController::promptRemark_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  cfstringStruct *local_60;
  char *local_40;
  undefined4 local_34;
  char *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_relativePath_026ac370);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(local_18 + (long)_pendingRemarkRel);
  *(long *)(local_18 + (long)_pendingRemarkRel) = (long)pcVar1;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  pcVar3 = "WCUIAlertView";
  _objc_getClass();
  local_30 = pcVar3;
  if (pcVar3 == (char *)0x0) {
    local_34 = 1;
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Sm,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_handleRemark__026bfb20);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x20);
    pcVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98);
    pcVar3 = local_40;
    if (((ulong)pcVar4 & 1) != 0) {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_remark_026ae1d8);
      _objc_retainAutoreleasedReturnValue();
      local_60 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_60 = &::cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setTextFieldDefaultText__0269fd98,local_60)
      ;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_show_0269d280);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

