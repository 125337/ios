// handleUnlockAlertConfirm: @ 01759c04

/* Function Stack Size: 0x18 bytes */

void ThemeExchangeViewController::handleUnlockAlertConfirm_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_98;
  cfstringStruct *local_70;
  byte local_62;
  byte local_61;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = local_18;
  _objc_getAssociatedObject(local_18,PTR_s_showUnlockAlert_026b4240);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = &::cf___;
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getTextField_0269fb48);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar1;
    if (pcVar1 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_98 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_98 = &::cf___;
      }
      _objc_storeStrong(&local_40,local_98);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    _objc_storeStrong(&local_48,0);
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_xuegao666);
    if (((ulong)pcVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__x);
    }
    else {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_61 = (byte)puVar3;
      local_62 = (local_61 ^ 1) & 1;
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_70 = &cf_eQS_>f_y;
      if ((local_62 & 1) == 0) {
        local_70 = &cf_eQS_;
      }
      (*(code *)PTR__objc_retain_02578638)();
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_70);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
      _objc_storeStrong(&local_70,0);
    }
    _objc_setAssociatedObject(local_18,PTR_s_showUnlockAlert_026b4240,0,1);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

