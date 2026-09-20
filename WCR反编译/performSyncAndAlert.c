// performSyncAndAlert @ 01aabda0

/* Function Stack Size: 0x10 bytes */

void WCRGroupCreateViewController::performSyncAndAlert(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_98;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_30 = 0;
  puVar1 = PTR_WCRefineGroupManager_026ce2b8;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_editingGroupId_026bdb58);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_syncMembersForGroupWithId_added__026a26b8,IVar2,&local_28,&local_30);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_38 = puVar3;
  if ((long)puVar3 < 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadCreateTablePreservingInput_026bdca0);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_TeknNS_ue___Jbh__);
  }
  else {
    puVar1 = PTR_WCRefineGroupManager_026ce2b8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_editingGroupId_026bdb58);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_groupForId__026a27e0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    puVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_members_0269ea98);
    _objc_retainAutoreleasedReturnValue();
    local_98 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_98 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_orderedSetWithArray__026a4b80,local_98);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSelectedUsernames__026af068);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadCreateTablePreservingInput_026bdca0);
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_eX);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_Tek_b
               ,puVar1,&cf_wSN);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  return;
}

