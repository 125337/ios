// FUN_003e5380 @ 003e5380

void FUN_003e5380(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_b8;
  undefined4 local_ac;
  ulong local_a8 [3];
  undefined *local_90;
  undefined *local_88;
  ulong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_78 = *(undefined8 *)PTR__kSecClass_02578378;
  local_50 = *(undefined8 *)PTR__kSecClassGenericPassword_02578380;
  local_70 = *(undefined8 *)PTR__kSecAttrService_02578370;
  local_48 = &cf_com_qimiao_wcr_hn;
  local_68 = *(undefined8 *)PTR__kSecAttrAccount_02578340;
  local_40 = &cf_RG_FAKE_IDFV;
  local_60 = *(undefined8 *)PTR__kSecReturnData_025783a8;
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  local_58 = *(undefined8 *)PTR__kSecMatchLimit_02578390;
  local_30 = *(undefined8 *)PTR__kSecMatchLimitOne_02578398;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_50,&local_78,5);
  _objc_retainAutoreleasedReturnValue();
  local_90 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_a8[0] = 0;
  puVar1 = local_90;
  _SecItemCopyMatching(local_90,local_a8);
  uVar3 = local_a8[0];
  if (((int)puVar1 == 0) && (local_a8[0] != 0)) {
    local_80 = local_a8[0];
    _objc_autoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
    local_b8 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0),
       uVar3 == 0)) {
      local_88 = (undefined *)0x0;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_initWithData_encoding__026a3378,local_b8,4)
      ;
      puVar2 = puVar1;
      FUN_003e5724();
      _objc_retainAutoreleasedReturnValue();
      local_88 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    local_ac = 1;
    _objc_storeStrong(&local_b8,0);
  }
  else {
    local_88 = (undefined *)0x0;
    local_ac = 1;
  }
  _objc_storeStrong(&local_90,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_88);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

