// FUN_01cd28d8 @ 01cd28d8

void FUN_01cd28d8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  puVar3 = PTR__OBJC_CLASS___NSSet_026ce150;
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_30 = &cf_WCRefineClearUnread;
  local_28 = &cf_ActionMenu;
  local_20 = &cf_ActionList;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setWithArray__0269d9a0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e46e8;
  DAT_028e46e8 = puVar3;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

