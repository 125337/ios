// editRuleName @ 01bbb298

/* Function Stack Size: 0x10 bytes */

void WCRefineMessageSyncRuleViewController::editRuleName(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
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
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentRule_026c04a8);
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar2;
  if (IVar2 != 0) {
    _objc_initWeak(auStack_38,local_18);
    IVar1 = local_18;
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,_kWCRMessageSyncRuleKeyName);
    _objc_retainAutoreleasedReturnValue();
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_01bbb464;
    local_58 = &DAT_0257c558;
    _objc_copyWeak(auStack_50,auStack_38);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_showTextInputWithTitle_message_i_026c0570,&cf_RTy,&cf_N_uNRhU__ySYuzz,
               IVar3,0x1e,0,&local_70);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_38);
  }
  local_2c = (uint)(IVar2 == 0);
  _objc_storeStrong(&local_28,0);
  return;
}

