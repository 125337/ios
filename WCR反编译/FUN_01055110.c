// FUN_01055110 @ 01055110

void FUN_01055110(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_70;
  undefined *local_50;
  undefined *local_40;
  undefined8 local_28;
  cfstringStruct *local_20;
  long local_18;
  
  puVar2 = PTR__OBJC_CLASS___NSError_026ce470;
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  lVar3 = *(long *)(param_1 + 0x28);
  local_70 = *(undefined **)(param_1 + 0x20);
  bVar1 = local_70 == (undefined *)0x0;
  if (bVar1) {
    local_28 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
    local_20 = &cf_B;
    local_40 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_20,&local_28,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineLinkParser,
               0xfffffffffffffff9);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar2;
    local_50 = puVar2;
  }
  (**(code **)(lVar3 + 0x10))(lVar3,0,local_70);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

