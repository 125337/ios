// editFormat @ 01bbfed0

/* Function Stack Size: 0x10 bytes */

void WCRefineMessageSyncRuleViewController::editFormat(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined1 auStack_60 [24];
  undefined *local_48;
  undefined1 auStack_40 [8];
  ID local_38;
  undefined4 local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentRule_026c04a8);
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar1;
  if (IVar1 == 0) {
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_objectForKeyedSubscript__0269d098,_kWCRMessageSyncRuleKeyFormat);
    _objc_retainAutoreleasedReturnValue();
    local_38 = IVar1;
    _objc_initWeak(auStack_40,local_18);
    puVar3 = PTR_WCRefineHelper_026ce000;
    puVar2 = PTR_WCRefineMessageSyncRule_026ce708;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_formatPlaceholderHelpText_026c0590);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_38;
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_01bc014c;
    local_68 = &DAT_02589100;
    _objc_copyWeak(auStack_60,auStack_40);
    (*(code *)PTR__objc_msgSend_02578628)
              (0,puVar3,PTR_s_presentPageSheetMultilineInputWi_026ab118,&cf_w<h_,&cf_S2dVw<h_,puVar2
               ,IVar1,&local_80);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_48 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
    }
    _objc_storeStrong(&local_48);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_40);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

