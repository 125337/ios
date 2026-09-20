// FUN_0036a29c @ 0036a29c

void FUN_0036a29c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long local_68;
  long local_50;
  int local_44;
  long local_40;
  long local_38;
  undefined8 local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  lVar1 = param_1 + 0x30;
  local_38 = param_1;
  _objc_loadWeakRetained();
  local_40 = lVar1;
  if (lVar1 == 0) {
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),0);
    }
    local_44 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_wcrGrouping_currentItemMatchingI_026a27f0,*(undefined8 *)(param_1 + 0x20)
              );
    _objc_retainAutoreleasedReturnValue();
    local_68 = lVar1;
    if (lVar1 == 0) {
      local_68 = *(long *)(param_1 + 0x20);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_68;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_wcrGrouping_closeSwipeStateRemov_026a2778,0);
    lVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mainFrame_026a2610);
    _objc_retainAutoreleasedReturnValue();
    local_20 = local_50;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_0036a544(lVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_wcrGrouping_removeItem__026a27b8,local_50);
    lVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mainFrame_026a2610);
    _objc_retainAutoreleasedReturnValue();
    FUN_00368c14();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    if (*(long *)(param_1 + 0x28) != 0) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),1);
    }
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40,0);
  if (local_44 == 0) {
    local_44 = 0;
  }
  _objc_storeStrong(&local_30,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

