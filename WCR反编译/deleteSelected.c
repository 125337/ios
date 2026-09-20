// deleteSelected @ 01f7df68

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackManagerViewController::deleteSelected(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
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
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_selectedItems_026c9980);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  if (param_1 != 0) {
    _objc_initWeak(auStack_38,local_18);
    puVar2 = PTR_WCRefineHelper_026ce000;
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcr_deleteConfirmMessageForItems_026c99a0,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_01f7e150;
    local_58 = &DAT_025810b0;
    _objc_copyWeak(auStack_50,auStack_38);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf_Rd,IVar1,&cf_Rd,&local_70,
               &cf_Sm,0);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_38);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gb);
  }
  local_2c = (uint)(param_1 == 0);
  _objc_storeStrong(&local_28,0);
  return;
}

