// FUN_003b0d1c @ 003b0d1c

bool FUN_003b0d1c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  lVar2 = local_28;
  local_20 = &cf_m_uUnReadCount;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1);
  _objc_retainAutoreleasedReturnValue();
  FUN_003b11cc(lVar2,puVar1,*(undefined8 *)PTR____NSArray0___02578280,0,0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_28,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return lVar2 != 0;
}

