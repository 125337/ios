// FUN_009c701c @ 009c701c

void FUN_009c701c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *local_68;
  cfstringStruct *local_30;
  undefined8 local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  puVar2 = PTR__OBJC_CLASS___NSError_026ce470;
  local_28 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
  if (local_30 == (cfstringStruct *)0x0) {
    local_68 = &cf_Bl1Y_;
  }
  else {
    local_68 = local_30;
  }
  local_20 = local_68;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_20,&local_28,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_com_qimiao_wcrefine_ai,param_2
            );
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_30,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar2);
  return;
}

