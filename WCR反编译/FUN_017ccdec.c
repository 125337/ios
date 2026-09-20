// FUN_017ccdec @ 017ccdec

void FUN_017ccdec(long param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  undefined *puVar7;
  char *local_38;
  uint local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  lVar3 = param_1 + 0x30;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_pendingDeleteName_026b5050);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar3);
  if (lVar4 == 0) {
    local_2c = 1;
  }
  else {
    pcVar5 = "WCUIAlertView";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar6 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_wcrIsGroupAnalysisLibrary_026b4df8);
    pcVar2 = &cf_Rd___;
    if ((uVar6 & 1) == 0) {
      pcVar2 = &cf_RdN;
    }
    puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_Rd0_);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_initWithTitle_message__0269d260,pcVar2);
    local_38 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    bVar1 = local_38 != (char *)0x0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_28,
                 PTR_s_wcrCancelDelete_026b5058);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Rd,local_28,
                 PTR_s_wcrConfirmDelete_026b5060);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_show_0269d280);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingDeleteName__026b5048,0);
    }
    local_2c = (uint)!bVar1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

