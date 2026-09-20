// FUN_003e5cec @ 003e5cec

void FUN_003e5cec(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  uint local_88;
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_70 = 0;
  _objc_storeStrong(&local_70,param_1);
  lVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_dataUsingEncoding__026a12e8,4);
  _objc_retainAutoreleasedReturnValue();
  local_78 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_88 = 1;
  }
  else {
    local_48 = *(undefined8 *)PTR__kSecClass_02578378;
    local_30 = *(undefined8 *)PTR__kSecClassGenericPassword_02578380;
    local_40 = *(undefined8 *)PTR__kSecAttrService_02578370;
    local_28 = &cf_com_qimiao_wcr_hn;
    local_38 = *(undefined8 *)PTR__kSecAttrAccount_02578340;
    local_20 = &cf_RG_FAKE_IDFV;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_48,3);
    _objc_retainAutoreleasedReturnValue();
    local_68 = *(undefined8 *)PTR__kSecValueData_025783b0;
    local_58 = local_78;
    local_60 = *(undefined8 *)PTR__kSecAttrAccessible_02578330;
    local_50 = *(undefined8 *)PTR__kSecAttrAccessibleAfterFirstUnlockThisDeviceOnly_02578338;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_90 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_58,&local_68,2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_90;
    local_98 = puVar4;
    _SecItemUpdate(local_90,puVar4);
    bVar1 = (int)puVar3 != 0;
    if (bVar1) {
      puVar3 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_mutableCopy_0269d8a0);
      local_a0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_addEntriesFromDictionary__026a2e30,local_98);
      _SecItemAdd(local_a0,0);
      _objc_storeStrong(&local_a0,0);
    }
    local_88 = (uint)!bVar1;
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_90,0);
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

