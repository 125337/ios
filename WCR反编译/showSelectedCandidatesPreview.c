// showSelectedCandidatesPreview @ 01862c58

/* Function Stack Size: 0x10 bytes */

void WCRefineBatchRemarkViewController::showSelectedCandidatesPreview(ID param_1,SEL param_2)

{
  ulong uVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  ulong local_b0;
  ID local_80;
  ID local_70;
  ID local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedCandidates_026b6960);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (IVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_lgbT_N);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_48 = 0xc;
    IVar2 = local_28;
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedCandidates_026b6960);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_b0 = IVar4;
    if (local_48 < IVar4) {
      local_b0 = local_48;
    }
    local_58 = local_b0;
    local_40 = local_b0;
    local_50 = IVar4;
    for (local_60 = 0; local_60 < local_40; local_60 = local_60 + 1) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedCandidates_026b6960);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_68 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar2);
      puVar5 = local_38;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      IVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_displayName_026ac378);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (IVar4 == 0) {
        local_80 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_userName_0269f7b8);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        local_70 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_displayName_026ac378);
        _objc_retainAutoreleasedReturnValue();
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf__lu___);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (IVar4 == 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      (*(code *)PTR__objc_release_02578630)(IVar2);
      _objc_storeStrong(&local_68,0);
    }
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedCandidates_026b6960);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar1 = local_40;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar5 = local_38;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (uVar1 < IVar4) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedCandidates_026b6960);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    puVar3 = PTR_WCRefineHelper_026ce000;
    puVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_componentsJoinedByString__0269d140,&::cf_newline_s_);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_PT_N,puVar5,&cf_wSN);
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

