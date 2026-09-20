// FUN_017e6344 @ 017e6344

void FUN_017e6344(long param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *local_38;
  uint local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_pendingPersonaPrompt_026b5520);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar2);
  if (lVar3 == 0) {
    local_2c = 1;
  }
  else {
    pcVar4 = "WCUIAlertView";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = pcVar4;
    if (pcVar4 != (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPersonaNameAlert__026b5528,pcVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x14);
      pcVar1 = local_38;
      puVar5 = PTR_WCRefineAIStore_026ce048;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setTextFieldDefaultText__0269fd98);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf__,local_28,
                 PTR_s_cancelPersonaSave_026b5530);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_addBtnTitle_target_sel__0269d278,&cf_OX_,local_28,
                 PTR_s_confirmPersonaSave_026b5538);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_show_0269d280);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingPersonaPrompt__026b5518,0);
    }
    local_2c = (uint)(pcVar4 == (char *)0x0);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

