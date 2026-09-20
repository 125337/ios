// FUN_005a5ba4 @ 005a5ba4

void FUN_005a5ba4(long param_1)

{
  bool bVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  char *local_88;
  char *local_80;
  uint local_74;
  char *local_70 [3];
  char *local_58;
  cfstringStruct *local_50;
  ulong local_48;
  char *local_40;
  long local_38;
  char *local_30;
  cfstringStruct *local_28 [2];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = param_1;
  if (param_1 == 0) {
    local_30 = (char *)0x0;
  }
  else {
    pcVar2 = "MMContext";
    _objc_getClass();
    local_28[0] = (cfstringStruct *)PTR_s_currentContext_0269d5f8;
    pcVar3 = &cf_activeUserContext;
    local_40 = pcVar2;
    _NSSelectorFromString();
    local_28[1] = pcVar3;
    for (local_48 = 0; local_48 < 2; local_48 = local_48 + 1) {
      local_50 = local_28[local_48];
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,local_50);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,local_50);
        _objc_retainAutoreleasedReturnValue();
        local_58 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
        if (((ulong)pcVar2 & 1) == 0) {
LAB_005a5d50:
          local_74 = 0;
        }
        else {
          pcVar2 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_getService__0269d170,local_38);
          _objc_retainAutoreleasedReturnValue();
          local_70[0] = pcVar2;
          if (pcVar2 != (char *)0x0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_30 = pcVar2;
          }
          local_74 = (uint)(pcVar2 != (char *)0x0);
          _objc_storeStrong(local_70,0);
          if (local_74 == 0) goto LAB_005a5d50;
        }
        _objc_storeStrong(&local_58,0);
        if (local_74 != 0) goto LAB_005a5ea4;
      }
    }
    pcVar2 = "MMServiceCenter";
    _objc_getClass(local_48 - 2);
    local_80 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0);
    if (((ulong)pcVar2 & 1) != 0) {
      pcVar2 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_88 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
      bVar1 = ((ulong)pcVar2 & 1) != 0;
      if (bVar1) {
        pcVar2 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_getService__0269d170,local_38);
        _objc_retainAutoreleasedReturnValue();
        local_30 = pcVar2;
      }
      local_74 = (uint)bVar1;
      _objc_storeStrong(&local_88,0);
      if (local_74 != 0) goto LAB_005a5ea4;
    }
    local_30 = (char *)0x0;
  }
LAB_005a5ea4:
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0,local_30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

