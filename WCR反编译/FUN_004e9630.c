// FUN_004e9630 @ 004e9630

byte FUN_004e9630(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_38;
  byte local_29;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  _objc_storeStrong(&local_38,param_1);
  uVar1 = local_38;
  FUN_004e36cc(local_38,PTR_s_onRevokeMsg__026a43d8);
  uVar3 = local_38;
  if ((uVar1 & 1) == 0) {
    local_28 = &cf_dV;
    local_20 = &cf_Revoke;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_28,2
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_004e59cc();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if ((uVar3 & 1) == 0) {
      uVar3 = local_38;
      FUN_004e6418(local_38,PTR_s_onRevokeMsg__026a43d8);
      local_29 = (byte)uVar3 & 1;
    }
    else {
      local_29 = 1;
    }
  }
  else {
    local_29 = 1;
  }
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return local_29 & 1;
}

