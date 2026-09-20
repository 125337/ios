// deleteRuleAtIndex: @ 01a1650c

/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAutoReplyListViewController::deleteRuleAtIndex_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_58;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (undefined *)param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_rules_026a44d8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_58 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_38 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_58;
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar1 = local_28;
  puVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
  if (puVar1 < puVar2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeObjectAtIndex__0269d530,local_28);
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

