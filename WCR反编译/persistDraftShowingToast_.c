// persistDraftShowingToast: @ 01c48318

/* Function Stack Size: 0x14 bytes */

void WCRefineNameplateSpecialUserDetailViewController::persistDraftShowingToast_
               (ID param_1,SEL param_2,bool param_3)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *local_a0;
  undefined *local_48;
  undefined *local_40;
  undefined1 local_31;
  ID local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_username_026a2238);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_31 = 0;
  bVar2 = true;
  uVar1 = IVar3 != 0;
  if ((bool)uVar1) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_draft_026b65e8);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = IVar3 == 0;
    local_31 = uVar1;
    local_30 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    uVar1 = local_31;
  }
  local_31 = uVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (!bVar2) {
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_draft_026b65e8);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_setNameplateSpecialUserConfig_fo_026c1bf0,IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_nameplateSpecialUserEnabled_026ae830);
    if (((ulong)puVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setNameplateSpecialUserEnabled__026ae838,1);
    }
    puVar4 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    puVar6 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_nameplateSpecialUserList_026ae848);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = puVar6;
    if (puVar6 == (undefined *)0x0) {
      local_a0 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_orderedSetWithArray__026a4b80,local_a0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar4 = local_48;
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setNameplateSpecialUserList__026ae850);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDraftDirty__026c1be8,0);
    _CFNotificationCenterGetDarwinNotifyCenter();
    _CFNotificationCenterPostNotification();
    if ((local_21 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__OX_N__Lr);
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  return;
}

