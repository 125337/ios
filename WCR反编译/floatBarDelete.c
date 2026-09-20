// floatBarDelete @ 01f97808

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackPickerViewController::floatBarDelete(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [12];
  uint local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_selectedItems_026c9980);
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_count_0269cfe0);
  if (IVar1 != 0) {
    _objc_initWeak(auStack_38,local_18);
    puVar3 = PTR_WCRefineHelper_026ce000;
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcr_deleteConfirmMessageForItems_026c99a0,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_01f97a0c;
    local_58 = &DAT_025810b0;
    _objc_copyWeak(auStack_50,auStack_38);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf_Rd,IVar2,&cf_Rd,&local_70,
               &cf_Sm,0);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_38);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQb);
  }
  local_2c = (uint)(IVar1 == 0);
  _objc_storeStrong(&local_28,0);
  return;
}

