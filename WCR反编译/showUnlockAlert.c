// showUnlockAlert @ 017599cc

/* Function Stack Size: 0x10 bytes */

void ThemeExchangeViewController::showUnlockAlert(ID param_1,SEL param_2)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *local_40;
  cfstringStruct *local_38;
  undefined1 local_29;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar1 = "WCUIAlertView";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    local_28 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_29 = SUB81(puVar3,0);
    local_38 = &cf_eQ_x0_NvP_RQQbc0eQS;
    if (((ulong)puVar3 & 1) == 0) {
      local_38 = &cf_eQ_x>f_y0_NvP_RQQbc0eQS;
    }
    (*(code *)PTR__objc_retain_02578638)();
    pcVar1 = local_28;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x32);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_handleUnlockAlertCancel__026b4250);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx,local_18,
               PTR_s_handleUnlockAlertConfirm__026b4258);
    _objc_setAssociatedObject(local_18,PTR_s_showUnlockAlert_026b4240,local_40,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_show_0269d280);
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

