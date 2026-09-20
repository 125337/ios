// updateRuleWithBlock: @ 01bb8c14

/* Function Stack Size: 0x18 bytes */

void WCRefineMessageSyncRuleViewController::updateRuleWithBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    puVar1 = PTR_WCRefineMessageSyncRule_026ce708;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineMessageSyncRule_026ce708,PTR_s_rules_026a44d8)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_40 = (undefined *)0x0;
    while( true ) {
      puVar2 = local_40;
      puVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
      puVar1 = PTR_WCRefineMessageSyncRule_026ce708;
      if (puVar3 <= puVar2) break;
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_ruleID__026a4500);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ruleID_026c04a0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isEqualToString__0269ccc8);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (((ulong)puVar3 & 1) != 0) {
        puVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_48 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (**(code **)(local_28 + 0x10))(local_28,local_48);
        puVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_setObject_atIndexedSubscript__0269e970,puVar1,local_40);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_saveRules__026b77e8,local_38);
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
        local_2c = 1;
        _objc_storeStrong(&local_48,0);
        goto LAB_01bb8ee4;
      }
      local_40 = local_40 + 1;
    }
    local_2c = 0;
LAB_01bb8ee4:
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

