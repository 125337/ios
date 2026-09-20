// deleteSelectedRecords @ 01b1d5ac

/* Function Stack Size: 0x10 bytes */

void WCRefineKeywordAlertHistoryCardViewController::deleteSelectedRecords(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedIndexes_026b2a08);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (IVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedIndexes_026b2a08);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar1 = PTR_WCRefineHelper_026ce000;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_28 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_nxRd_Nv);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_18;
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = FUN_01b1d7b0;
    local_38 = &DAT_0257a770;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_showAlertWithTitle_message_destr_0269f868,&cf_Rd_NU_,puVar4,&cf_Rd,
               &local_50,&cf_Sm,0,IVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

