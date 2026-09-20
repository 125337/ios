// promptRemarkAtRealIndex: @ 01bb20a0

/* Function Stack Size: 0x18 bytes */

void WCRefineMessageRepositoryViewController::promptRemarkAtRealIndex_
               (ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_90;
  char *local_60;
  undefined4 local_54;
  char *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  byte local_31;
  ID local_30;
  long_long local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_31 = 0;
  bVar1 = true;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  if (-1 < (long)param_3) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_messagesArray_026c03b8);
    _objc_retainAutoreleasedReturnValue();
    local_31 = 1;
    local_30 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = (long)param_1 <= (long)param_3;
  }
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  if (!bVar1) {
    pcVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_messagesArray_026c03b8);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_remark);
    _objc_retainAutoreleasedReturnValue();
    local_90 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_90 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_90;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar4 = "WCUIAlertView";
    _objc_getClass();
    local_50 = pcVar4;
    if (pcVar4 == (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el9_QeQFh);
      local_54 = 1;
    }
    else {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_60 = pcVar4;
      if (pcVar4 == (char *)0x0) {
        local_54 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x50);
        pcVar4 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_respondsToSelector__026ca818,
                   PTR_s_setTextFieldDefaultText__0269fd98);
        if (((ulong)pcVar4 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_setTextFieldDefaultText__0269fd98,local_48);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
                   PTR_s_confirmEditRemark__026c0428);
        pcVar4 = local_60;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_28);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(pcVar4,"messageIndex");
        (*(code *)PTR__objc_release_02578630)(puVar5);
        _objc_setAssociatedObject(local_18,&DAT_028e45b0,local_60,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_show_0269d280);
        local_54 = 0;
      }
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  return;
}

