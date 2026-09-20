// keychainQueryForProviderID: @ 009c1a10

/* Function Stack Size: 0x18 bytes */

ID WCRefineAIStore::keychainQueryForProviderID_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *local_70;
  cfstringStruct *local_60;
  SEL local_58;
  ID local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = (cfstringStruct *)0x0;
  local_58 = param_2;
  local_50 = param_1;
  _objc_storeStrong(&local_60,param_3);
  local_48 = *(undefined8 *)PTR__kSecClass_02578378;
  local_30 = *(undefined8 *)PTR__kSecClassGenericPassword_02578380;
  local_40 = *(undefined8 *)PTR__kSecAttrService_02578370;
  local_28 = &cf_com_qimiao_wcrefine_ai_api_key;
  local_38 = *(undefined8 *)PTR__kSecAttrAccount_02578340;
  if (local_60 == (cfstringStruct *)0x0) {
    local_70 = &::cf___;
  }
  else {
    local_70 = local_60;
  }
  local_20 = local_70;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_30,&local_48,3);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar1;
}

