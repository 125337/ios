// wcr_presentUsedCodeRemoveConfirm @ 017355f0

/* Function Stack Size: 0x10 bytes */

void ThemeBoxAirDropThemePickViewController::wcr_presentUsedCodeRemoveConfirm
               (ID param_1,SEL param_2)

{
  bool bVar1;
  char *pcVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  char *local_50;
  uint local_44;
  undefined *local_40;
  ID local_38;
  ID local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar2 = "WCUIAlertView";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  IVar3 = local_18;
  local_28 = pcVar2;
  _objc_getAssociatedObject(local_18,&DAT_028e3f89);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_18;
  local_30 = IVar3;
  _objc_getAssociatedObject(local_18,&DAT_028e3f8a);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_38 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_length_0269cca0);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf__N_);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = local_28 != (char *)0x0;
  local_40 = puVar5;
  if (bVar1) {
    pcVar2 = local_28;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_fNRd,local_18,
               PTR_s_wcr_cancelUsedCodeRemove__026b3d50);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Rd,local_18,
               PTR_s_wcr_confirmUsedCodeRemove__026b3d58);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y_Rd,local_18,
               PTR_s_wcr_alwaysRemoveUsedCode__026b3d60);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_show_0269d280);
    _objc_storeStrong(&local_50,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_QQbcx__O_u_gNN_Rd);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_clearUsedCodeRemovePrompt_026b3d48);
  }
  local_44 = (uint)!bVar1;
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

