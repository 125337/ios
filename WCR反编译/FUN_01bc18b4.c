// FUN_01bc18b4 @ 01bc18b4

void FUN_01bc18b4(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_48;
  undefined *local_40;
  int local_34;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = param_1 + 0x20;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = lVar1;
  if (lVar1 == 0) {
    local_34 = 1;
  }
  else {
    puVar2 = PTR_WCRefineMessageSyncRule_026ce708;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineMessageSyncRule_026ce708,PTR_s_rules_026a44d8)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_48 = (undefined *)0x0;
    while( true ) {
      puVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
      puVar2 = PTR_WCRefineMessageSyncRule_026ce708;
      if (puVar3 <= local_48) break;
      puVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_ruleID__026a4500);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_ruleID_026c04a0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isEqualToString__0269ccc8);
      (*(code *)PTR__objc_release_02578630)(lVar1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (((ulong)puVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_removeObjectAtIndex__0269d530,local_48)
        ;
        break;
      }
      local_48 = local_48 + 1;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_saveRules__026b77e8,local_40);
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30,0);
  if (local_34 == 0) {
    local_34 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

