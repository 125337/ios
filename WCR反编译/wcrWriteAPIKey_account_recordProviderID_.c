// wcrWriteAPIKey:account:recordProviderID: @ 009c5228

/* Function Stack Size: 0x28 bytes */

bool WCRefineAIStore::wcrWriteAPIKey_account_recordProviderID_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  ID IVar2;
  long lVar3;
  undefined *puVar4;
  cfstringStruct *local_100;
  cfstringStruct *local_d0;
  ID local_a0;
  int local_94;
  long local_90;
  undefined4 local_84;
  byte local_7d;
  int local_7c;
  long local_78;
  ID local_70;
  long local_68;
  cfstringStruct *local_60;
  long local_58;
  SEL local_50;
  ID local_48;
  byte local_39;
  undefined8 local_38;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = 0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_3);
  local_60 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_60,param_4);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_5);
  IVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_keychainQueryForProviderID__026aade0,local_60);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_58;
  local_70 = IVar2;
  FUN_009af3fc();
  _objc_retainAutoreleasedReturnValue();
  local_78 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    IVar2 = local_70;
    _SecItemDelete();
    local_7c = (int)IVar2;
    local_7d = local_7c == 0 || local_7c == -0x62d4;
    if ((bool)local_7d) {
      if (local_60 == (cfstringStruct *)0x0) {
        local_d0 = &::cf___;
      }
      else {
        local_d0 = local_60;
      }
      FUN_009c204c(local_d0,&::cf___);
    }
    local_39 = local_7d & 1;
    local_84 = 1;
  }
  else {
    lVar3 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_dataUsingEncoding__026a12e8,4);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_70;
    local_38 = *(undefined8 *)PTR__kSecValueData_025783b0;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_90 = lVar3;
    local_30 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
    _SecItemUpdate(IVar2,puVar4);
    local_94 = (int)IVar2;
    if (local_94 == -0x62d4) {
      IVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_mutableCopy_0269d8a0);
      local_a0 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_setObject_forKeyedSubscript__0269d248,local_90,
                 *(undefined8 *)PTR__kSecValueData_025783b0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_setObject_forKeyedSubscript__0269d248,
                 *(undefined8 *)PTR__kSecAttrAccessibleAfterFirstUnlockThisDeviceOnly_02578338,
                 *(undefined8 *)PTR__kSecAttrAccessible_02578330);
      IVar2 = local_a0;
      _SecItemAdd();
      local_94 = (int)IVar2;
      _objc_storeStrong(&local_a0,0);
    }
    bVar1 = local_94 == 0;
    if (bVar1) {
      if (local_60 == (cfstringStruct *)0x0) {
        local_100 = &::cf___;
      }
      else {
        local_100 = local_60;
      }
      FUN_009c204c(local_100,local_78);
      lVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
      if (lVar3 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_wcrRecordAPIKey_providerID__026aae30,local_78,local_68);
      }
    }
    local_84 = 1;
    local_39 = bVar1;
    _objc_storeStrong(&local_90,0);
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_39 & 1;
}

