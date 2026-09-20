// showPreviewAlertWithTitle:candidates: @ 01858a44

/* Function Stack Size: 0x20 bytes */

void WCRefineBatchDeleteFriendViewController::showPreviewAlertWithTitle_candidates_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong local_108;
  ulong local_98;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  undefined *local_50;
  undefined4 local_44;
  ulong local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
  if (uVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_lgbT_N);
    local_44 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    IVar4 = local_28;
    local_50 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_sourceTitle_026b6958);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf_egn_);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    puVar3 = local_50;
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf_qQ);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addObject__0269d180,&::cf___);
    local_60 = 0xc;
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
    local_108 = uVar2;
    if (local_60 < uVar2) {
      local_108 = local_60;
    }
    local_70 = local_108;
    local_58 = local_108;
    local_68 = uVar2;
    for (local_78 = 0; local_78 < local_58; local_78 = local_78 + 1) {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_78);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_50;
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_80 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_displayName_026ac378);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (uVar6 == 0) {
        local_98 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_userName_0269f7b8);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        local_88 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_displayName_026ac378);
        _objc_retainAutoreleasedReturnValue();
      }
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf__lu___);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      if (uVar6 == 0) {
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      else {
        (*(code *)PTR__objc_release_02578630)(local_88);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      _objc_storeStrong(&local_80,0);
    }
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
    puVar3 = local_50;
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (local_58 < uVar2) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    uVar1 = local_38;
    puVar5 = PTR_WCRefineHelper_026ce000;
    puVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_componentsJoinedByString__0269d140,&::cf_newline_s_);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,uVar1,puVar3,&cf_wSN);
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

