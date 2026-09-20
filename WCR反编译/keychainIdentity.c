// keychainIdentity @ 0158e624

/* Function Stack Size: 0x10 bytes */

ID WCRefineVoiceCloneHelper::keychainIdentity(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  ID local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = *(undefined8 *)PTR__kSecClass_02578378;
  local_30 = *(undefined8 *)PTR__kSecClassGenericPassword_02578380;
  local_40 = *(undefined8 *)PTR__kSecAttrService_02578370;
  local_28 = &cf_WCRefineVoiceClone;
  local_38 = *(undefined8 *)PTR__kSecAttrAccount_02578340;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_keychainAccount_026b09f8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_30,&local_48,3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar1;
}

