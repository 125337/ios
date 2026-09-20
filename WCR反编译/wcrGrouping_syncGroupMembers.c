// wcrGrouping_syncGroupMembers @ 0035c894

/* Function Stack Size: 0x10 bytes */

void WCRGroupingSessionListViewController::wcrGrouping_syncGroupMembers(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_groupId_0269ea88);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (IVar1 != 0) {
    local_28 = 0;
    local_30 = 0;
    puVar2 = PTR_WCRefineGroupManager_026ce2b8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_groupId_0269ea88);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_syncMembersForGroupWithId_added__026a26b8,IVar1,&local_28,&local_30);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_38 = puVar3;
    if ((long)puVar3 < 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                 &cf__g__TeknpSNeQ_R____Jbh__);
    }
    else {
      if (0 < (long)puVar3) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_wcrGrouping_refreshFromLiveData_026a26a0);
      }
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_eX);
      _objc_retainAutoreleasedReturnValue();
      local_40 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
                 &cf_Tek_b,puVar2,&cf_wSN);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_storeStrong(&local_40,0);
    }
  }
  return;
}

