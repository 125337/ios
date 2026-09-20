// FUN_003d1998 @ 003d1998

void FUN_003d1998(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long local_40;
  long local_38;
  undefined8 local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  lVar1 = param_1 + 0x28;
  local_38 = param_1;
  _objc_loadWeakRetained();
  local_40 = lVar1;
  if ((lVar1 != 0) && (lVar1 != 0)) {
    local_20 = *(undefined8 *)(param_1 + 0x20);
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_0036a544(lVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    FUN_00368c14(local_40,&cf_deleteInlineSession);
  }
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

