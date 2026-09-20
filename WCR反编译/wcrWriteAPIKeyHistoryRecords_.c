// wcrWriteAPIKeyHistoryRecords: @ 009c21ac

/* Function Stack Size: 0x18 bytes */

bool WCRefineAIStore::wcrWriteAPIKeyHistoryRecords_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  long local_88;
  ID local_70;
  int local_64;
  ID local_60;
  undefined4 local_54;
  undefined *local_50;
  long local_48;
  SEL local_40;
  ID local_38;
  byte local_29;
  undefined8 local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  if (local_48 == 0) {
    local_88 = *(long *)PTR____NSArray0___02578280;
  }
  else {
    local_88 = local_48;
  }
  puVar1 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
             PTR_s_dataWithJSONObject_options_error_026a64a8,local_88,0,0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    local_29 = 0;
    local_54 = 1;
  }
  else {
    IVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_keychainQueryForProviderID__026aade0,&cf___api_key_history_v1__);
    _objc_retainAutoreleasedReturnValue();
    local_28 = *(undefined8 *)PTR__kSecValueData_025783b0;
    local_20 = local_50;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_60 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_20,&local_28,1);
    _SecItemUpdate(IVar2,puVar1);
    local_64 = (int)IVar2;
    if (local_64 == -0x62d4) {
      IVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_mutableCopy_0269d8a0);
      local_70 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_setObject_forKeyedSubscript__0269d248,local_50,
                 *(undefined8 *)PTR__kSecValueData_025783b0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_setObject_forKeyedSubscript__0269d248,
                 *(undefined8 *)PTR__kSecAttrAccessibleAfterFirstUnlockThisDeviceOnly_02578338,
                 *(undefined8 *)PTR__kSecAttrAccessible_02578330);
      IVar2 = local_70;
      _SecItemAdd();
      local_64 = (int)IVar2;
      _objc_storeStrong(&local_70,0);
    }
    local_29 = local_64 == 0;
    local_54 = 1;
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return local_29 & 1;
}

