// showAlertDaysInput: @ 0168f750

/* Function Stack Size: 0x18 bytes */

void AccountDetailViewController::showAlertDaysInput_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  char *local_40;
  char *local_38;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((local_30 == (undefined *)0x0) ||
     (puVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     puVar1 == (undefined *)0x0)) {
    _objc_storeStrong(&local_30,&cf_30_18_7_3);
  }
  pcVar3 = "WCUIAlertView";
  _objc_getClass();
  local_38 = pcVar3;
  if (pcVar3 != (char *)0x0) {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = pcVar3;
    if (pcVar3 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x32);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setTextFieldDefaultText__0269fd98,local_30);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
                 PTR_s_alertCancel_026b2910);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
                 PTR_s_alertConfirmDays__026b2918);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_40);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_show_0269d280);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

