// setApiKey: @ 0158e970

/* Function Stack Size: 0x18 bytes */

bool WCRefineVoiceCloneHelper::setApiKey_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  long lVar3;
  ID local_78;
  int local_6c;
  long local_68;
  undefined4 local_60;
  int local_5c;
  long local_58;
  ID local_50;
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
  IVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_keychainIdentity_026b0a00);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_48;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_50 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = lVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  lVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    IVar1 = local_50;
    _SecItemDelete();
    local_5c = (int)IVar1;
    local_29 = local_5c == 0 || local_5c == -0x62d4;
    local_60 = 1;
  }
  else {
    lVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_dataUsingEncoding__026a12e8,4);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_50;
    local_28 = *(undefined8 *)PTR__kSecValueData_025783b0;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_68 = lVar3;
    local_20 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_20,&local_28,1);
    _SecItemUpdate(IVar1,puVar2);
    local_6c = (int)IVar1;
    if (local_6c == -0x62d4) {
      IVar1 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_mutableCopy_0269d8a0);
      local_78 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_setObject_forKeyedSubscript__0269d248,local_68,
                 *(undefined8 *)PTR__kSecValueData_025783b0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,
                 *(undefined8 *)PTR__kSecAttrAccessibleAfterFirstUnlockThisDeviceOnly_02578338,
                 *(undefined8 *)PTR__kSecAttrAccessible_02578330);
      IVar1 = local_78;
      _SecItemAdd();
      local_6c = (int)IVar1;
      _objc_storeStrong(&local_78,0);
    }
    local_29 = local_6c == 0;
    local_60 = 1;
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return local_29 & 1;
}

