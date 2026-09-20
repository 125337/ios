// setAPIKey:providerID: @ 009c46c0

/* Function Stack Size: 0x20 bytes */

bool WCRefineAIStore::setAPIKey_providerID_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ID IVar2;
  long lVar3;
  undefined *puVar4;
  cfstringStruct *local_e0;
  cfstringStruct *local_b0;
  ID local_88;
  int local_7c;
  long local_78;
  undefined4 local_6c;
  byte local_65;
  int local_64;
  long local_60;
  ID local_58;
  cfstringStruct *local_50;
  long local_48;
  SEL local_40;
  ID local_38;
  byte local_29;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_4);
  IVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_keychainQueryForProviderID__026aade0,local_50);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_48;
  local_58 = IVar2;
  FUN_009af3fc();
  _objc_retainAutoreleasedReturnValue();
  local_60 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    IVar2 = local_58;
    _SecItemDelete();
    local_64 = (int)IVar2;
    local_65 = local_64 == 0 || local_64 == -0x62d4;
    if ((bool)local_65) {
      if (local_50 == (cfstringStruct *)0x0) {
        local_b0 = &::cf___;
      }
      else {
        local_b0 = local_50;
      }
      FUN_009c204c(local_b0,&::cf___);
    }
    local_29 = local_65 & 1;
    local_6c = 1;
  }
  else {
    lVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_dataUsingEncoding__026a12e8,4);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_58;
    local_28 = *(undefined8 *)PTR__kSecValueData_025783b0;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_78 = lVar3;
    local_20 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_20,&local_28,1);
    _SecItemUpdate(IVar2,puVar4);
    local_7c = (int)IVar2;
    if (local_7c == -0x62d4) {
      IVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_mutableCopy_0269d8a0);
      local_88 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_setObject_forKeyedSubscript__0269d248,local_78,
                 *(undefined8 *)PTR__kSecValueData_025783b0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_setObject_forKeyedSubscript__0269d248,
                 *(undefined8 *)PTR__kSecAttrAccessibleAfterFirstUnlockThisDeviceOnly_02578338,
                 *(undefined8 *)PTR__kSecAttrAccessible_02578330);
      IVar2 = local_88;
      _SecItemAdd();
      local_7c = (int)IVar2;
      _objc_storeStrong(&local_88,0);
    }
    bVar1 = local_7c == 0;
    if (bVar1) {
      if (local_50 == (cfstringStruct *)0x0) {
        local_e0 = &::cf___;
      }
      else {
        local_e0 = local_50;
      }
      FUN_009c204c(local_e0,local_60);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_wcrRecordAPIKey_providerID__026aae30,local_60,local_50);
    }
    local_6c = 1;
    local_29 = bVar1;
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return local_29 & 1;
}

