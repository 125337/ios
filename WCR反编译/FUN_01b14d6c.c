// FUN_01b14d6c @ 01b14d6c

void FUN_01b14d6c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_collectionView_026a0fd8);
  _objc_retainAutoreleasedReturnValue();
  local_20 = *(undefined8 *)(param_1 + 0x28);
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_deleteItemsAtIndexPaths__026bec20);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

