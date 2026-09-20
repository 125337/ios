// FUN_0102c6d0 @ 0102c6d0

void FUN_0102c6d0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 local_28;
  cfstringStruct *local_20;
  long local_18;
  
  puVar2 = PTR__OBJC_CLASS___NSError_026ce470;
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  lVar3 = *(long *)(param_1 + 0x20);
  local_28 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
  local_20 = &cf_s_S_sQ;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_20,&local_28,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineLinkParser,
             0xfffffffffffffffd);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))(lVar3,0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

