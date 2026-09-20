// FUN_0105da08 @ 0105da08

void FUN_0105da08(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *local_70;
  undefined *local_58;
  undefined *local_48;
  undefined8 local_28;
  cfstringStruct *local_20;
  long local_18;
  
  puVar2 = PTR__OBJC_CLASS___NSError_026ce470;
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_70 = *(undefined **)(param_1 + 0x20);
  bVar1 = local_70 == (undefined *)0x0;
  if (bVar1) {
    local_28 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
    local_20 = &cf_T;
    local_48 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_20,&local_28,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineLinkParser,
               0xfffffffffffffff7);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar2;
    local_58 = puVar2;
  }
  (*(code *)PTR__objc_retain_02578638)();
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_58);
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_70);
  return;
}

