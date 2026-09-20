// FUN_0070290c @ 0070290c

void FUN_0070290c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_20;
  long local_18;
  
  puVar1 = PTR__OBJC_CLASS___PHAssetChangeRequest_026ce4a8;
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_20 = *(undefined8 *)(param_1 + 0x20);
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_deleteAssets__026a73d8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

