// FUN_00f62ba8 @ 00f62ba8

void FUN_00f62ba8(undefined8 param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_2c = 1;
  }
  else {
    FUN_00f62910();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = &cf_getContactsFromServer_;
    local_38 = uVar1;
    _NSSelectorFromString();
    if (local_38 != 0) {
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar2);
      uVar1 = local_38;
      if ((uVar3 & 1) != 0) {
        local_20 = local_28;
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_20,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,pcVar2);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
    }
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

