// confirmBatchDeleteFirstStep @ 0185913c

/* Function Stack Size: 0x10 bytes */

void WCRefineBatchDeleteFriendViewController::confirmBatchDeleteFirstStep(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isDeleting_026b69a0);
  if ((param_1 & 1) == 0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedCandidates_026b6960);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (IVar3 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQbT_N);
    }
    else {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_retainChatHistory_026b6980);
      local_38 = &cf_OYuJ_YU_;
      if ((IVar2 & 1) == 0) {
        local_38 = &cf_NOYuJ_YU_;
      }
      (*(code *)PTR__objc_retain_02578638)();
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sourceTitle_026b6958);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedCandidates_026b6960);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf_egn_);
      _objc_retainAutoreleasedReturnValue();
      local_40 = puVar4;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      _objc_initWeak(auStack_48,local_28);
      puVar1 = local_40;
      puVar4 = PTR_WCRefineHelper_026ce000;
      local_70 = PTR___NSConcreteStackBlock_02578660;
      local_68 = 0xc2000000;
      local_64 = 0;
      local_60 = FUN_01859490;
      local_58 = &DAT_025810b0;
      _objc_copyWeak(auStack_50,auStack_48);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf__f_TRd,puVar1,&cf___,
                 &local_70,&cf_Sm,0);
      _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_38,0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ck_WybRdzI_);
  }
  return;
}

