// FUN_0075a98c @ 0075a98c

void FUN_0075a98c(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined *local_b8;
  cfstringStruct *local_a8;
  undefined *local_80;
  cfstringStruct *local_70;
  undefined8 local_50;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  lVar4 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  if (lVar4 == 0) {
    local_b8 = (undefined *)0x0;
  }
  else {
    local_38 = &cf_session;
    local_50 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_copy_0269d150);
    bVar3 = true;
    local_30 = &cf_sender;
    local_70 = *(cfstringStruct **)(param_1 + 0x28);
    local_28 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_copy_0269d150);
    bVar2 = true;
    local_a8 = local_70;
    if (local_70 == (cfstringStruct *)0x0) {
      local_a8 = &cf___;
    }
    local_20 = local_a8;
    local_b8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_28,&local_38,2);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    local_80 = local_b8;
  }
  _objc_storeStrong(&DAT_028cc658,local_b8);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  if (bVar3) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

