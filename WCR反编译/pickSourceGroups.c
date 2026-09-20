// pickSourceGroups @ 01bbb784

/* Function Stack Size: 0x10 bytes */

void WCRefineMessageSyncRuleViewController::pickSourceGroups(ID param_1,SEL param_2)

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
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [12];
  uint local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentRule_026c04a8);
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar3;
  if (IVar3 != 0) {
    _objc_initWeak(auStack_38,local_18);
    IVar2 = local_18;
    puVar1 = PTR_WCRefineChatRoomPicker_026cef60;
    puVar4 = PTR_WCRefineMessageSyncRule_026ce708;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_stringArrayInRule_forKey__026a44e8,
               local_28,_kWCRMessageSyncRuleKeySourceGroups);
    _objc_retainAutoreleasedReturnValue();
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_01bbb94c;
    local_58 = &DAT_0257a7d0;
    _objc_copyWeak(auStack_50,auStack_38);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_presentFromViewController_title__026ab898,IVar2,&cf_begn_J,puVar4,
               &local_70);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_38);
  }
  local_2c = (uint)(IVar3 == 0);
  _objc_storeStrong(&local_28,0);
  return;
}

