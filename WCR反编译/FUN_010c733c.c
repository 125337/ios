// FUN_010c733c @ 010c733c

void FUN_010c733c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long local_48;
  long local_40;
  long local_38;
  undefined8 local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  local_38 = param_1;
  _objc_storeStrong(&local_40);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_3);
  lVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((lVar1 != 0) && (local_48 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    local_30 = *(undefined8 *)(param_1 + 0x28);
    local_28 = local_40;
    local_20 = local_48;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,3
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

