// setKeywordAlertDisabledKeywords: @ 01fe3d2c

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setKeywordAlertDisabledKeywords_(ID param_1,SEL param_2,ID param_3)

{
  undefined1 *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  SEL SVar5;
  undefined1 *local_58;
  ID local_50;
  undefined8 local_48;
  SEL local_40;
  ID local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  IVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineHelper_026ce000;
  local_50 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_keywordAlertManagedKeywordsFromL_026ca2e8,local_48);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_count_0269cfe0);
  if (&segment_command_00000020.flags < puVar3) {
    local_28 = 0;
    local_30 = 100;
    local_20 = 0;
    local_18 = 100;
    puVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_subarrayWithRange__0269d848,0,100);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_58;
    local_58 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar4 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
  IVar2 = local_50;
  puVar1 = local_58;
  if (puVar4 == (undefined1 *)0x0) {
    SVar5 = local_40;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_removeObjectForKey__0269d700);
    (*(code *)PTR__objc_release_02578630)(SVar5);
  }
  else {
    SVar5 = local_40;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setObject_forKey__026ca9e8,puVar1);
    (*(code *)PTR__objc_release_02578630)(SVar5);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  return;
}

