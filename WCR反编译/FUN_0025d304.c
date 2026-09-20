// FUN_0025d304 @ 0025d304

void FUN_0025d304(long param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_20;
  long local_18;
  
  puVar3 = PTR_WCRefineEmoticonGroupStore_026ce420;
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_20 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_moveMd5List_toGroupId__026a0f40,puVar2,*(undefined8 *)(param_1 + 0x28));
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar1 = &cf__feR_;
  if (((ulong)puVar3 & 1) == 0) {
    pcVar1 = &cf_R_1Y_;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

