// confirmApplyBatchRemark @ 0186604c

/* Function Stack Size: 0x10 bytes */

void WCRefineBatchRemarkViewController::confirmApplyBatchRemark(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  ID local_58;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [12];
  uint local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isApplying_026b6b18);
  if ((param_1 & 1) == 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedCandidates_026b6960);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if (IVar2 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQbegn);
    }
    else {
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hasAnyRule_026b6b60);
      if ((IVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQn__);
      }
      else {
        IVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_buildPendingChanges_026b6b68);
        _objc_retainAutoreleasedReturnValue();
        local_28 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_count_0269cfe0);
        if (IVar1 != 0) {
          _objc_initWeak(auStack_38,local_18);
          puVar4 = PTR_WCRefineHelper_026ce000;
          IVar3 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_previewMessageForChanges__026b6b70,local_28);
          _objc_retainAutoreleasedReturnValue();
          local_78 = PTR___NSConcreteStackBlock_02578660;
          local_70 = 0xc2000000;
          local_6c = 0;
          local_68 = FUN_01866380;
          local_60 = &DAT_0257cd48;
          _objc_copyWeak(auStack_50,auStack_38);
          IVar2 = local_28;
          (*(code *)PTR__objc_retain_02578638)();
          local_58 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,&cf_nxybO9e,IVar3,&cf_Sm
                     ,0,&::cf___,&local_78);
          _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
          (*(code *)PTR__objc_release_02578630)(IVar3);
          _objc_storeStrong(&local_58,0);
          _objc_destroyWeak(auStack_50);
          _objc_destroyWeak(auStack_38);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_lg);
        }
        local_2c = (uint)(IVar1 == 0);
        _objc_storeStrong(&local_28,0);
      }
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ck_WybO9ezI_);
  }
  return;
}

