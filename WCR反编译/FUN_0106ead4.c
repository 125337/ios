// FUN_0106ead4 @ 0106ead4

void FUN_0106ead4(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  int local_70;
  int local_6c;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_40;
  long local_38;
  long local_30;
  undefined8 local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  uVar1 = *(ulong *)(param_1 + 0x20);
  local_38 = param_1;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_finished_026a15b0);
  if ((uVar1 & 1) == 0) {
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
      if ((*(byte *)(param_1 + 0x29) & 1) == 0) {
        local_60 = &cf_T;
        if ((*(byte *)(param_1 + 0x2a) & 1) == 0) {
          local_60 = &cf___fNg1Y_ubeZSOpenc;
        }
      }
      else {
        local_60 = &cf_I;
      }
      local_58 = local_60;
    }
    else {
      local_58 = &cf_bg1Y__7bzubeZSOpenc;
    }
    (*(code *)PTR__objc_retain_02578638)();
    puVar3 = PTR__OBJC_CLASS___NSError_026ce470;
    local_40 = local_58;
    if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
      if ((*(byte *)(param_1 + 0x29) & 1) == 0) {
        local_70 = -9;
        if ((*(byte *)(param_1 + 0x2a) & 1) == 0) {
          local_70 = -6;
        }
      }
      else {
        local_70 = -10;
      }
      local_6c = local_70;
    }
    else {
      local_6c = -5;
    }
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    local_28 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
    local_20 = local_58;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_20,&local_28,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineLinkParser,
               (long)local_6c);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_finishWithResult_error__026adfc0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_40,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
  }
  return;
}

