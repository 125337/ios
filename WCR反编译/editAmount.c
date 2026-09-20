// editAmount @ 018063c0

/* Function Stack Size: 0x10 bytes */

void WCRefineAutoAcceptTransferTierEditorViewController::editAmount(ID param_1,SEL param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
             PTR_s_handleAmountInput__026b5bd8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_showTextFieldWithMaxLen__0269e5e0,0xc);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98);
  pcVar1 = local_28;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (((ulong)pcVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_amount_026a7dd0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf___2f);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setTextFieldDefaultText__0269fd98);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_show_0269d280);
  _objc_storeStrong(&local_28,0);
  return;
}

