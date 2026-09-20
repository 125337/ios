// FUN_0111a880 @ 0111a880

void FUN_0111a880(long param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  cfstringStruct *local_b8;
  cfstringStruct *local_a8;
  cfstringStruct *local_88;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  uint local_54;
  cfstringStruct *local_50;
  ulong local_48;
  cfstringStruct *local_40;
  long local_38;
  cfstringStruct *local_30;
  undefined *local_28 [2];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = param_1;
  if (param_1 == 0) {
    local_30 = (cfstringStruct *)0x0;
  }
  else {
    pcVar2 = &cf_MMContext;
    _NSClassFromString();
    lVar3 = 0;
    local_40 = pcVar2;
    if (pcVar2 != (cfstringStruct *)0x0) {
      local_28[0] = PTR_s_currentContext_0269d5f8;
      local_28[1] = PTR_s_activeUserContext_0269d9a8;
      for (local_48 = 0; lVar3 = local_48 - 2, local_48 < 2; local_48 = local_48 + 1) {
        pcVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_respondsToSelector__026ca818,local_28[local_48]);
        if (((ulong)pcVar2 & 1) != 0) {
          pcVar2 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,local_28[local_48]);
          _objc_retainAutoreleasedReturnValue();
          local_50 = pcVar2;
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_54 = 4;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
            if (((ulong)pcVar2 & 1) != 0) {
              pcVar2 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getService__0269d170,local_38);
              _objc_retainAutoreleasedReturnValue();
              local_60 = pcVar2;
              if (pcVar2 != (cfstringStruct *)0x0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_30 = pcVar2;
              }
              local_54 = (uint)(pcVar2 != (cfstringStruct *)0x0);
              _objc_storeStrong(&local_60,0);
              if (local_54 != 0) goto LAB_0111aa20;
            }
            local_54 = 0;
          }
LAB_0111aa20:
          _objc_storeStrong(&local_50,0);
          if ((local_54 != 0) && (local_54 == 1)) goto LAB_0111ac2c;
        }
      }
    }
    pcVar2 = &cf_MMServiceCenter;
    _NSClassFromString(lVar3);
    bVar1 = false;
    local_68 = pcVar2;
    if ((pcVar2 == (cfstringStruct *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
       ((ulong)pcVar2 & 1) == 0)) {
      local_a8 = (cfstringStruct *)0x0;
    }
    else {
      local_a8 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_78 = local_a8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_a8;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    bVar1 = false;
    if ((local_70 == (cfstringStruct *)0x0) ||
       (pcVar2 = local_70,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar2 & 1) == 0)) {
      local_b8 = (cfstringStruct *)0x0;
    }
    else {
      local_b8 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_getService__0269d170,local_38);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_88 = local_b8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_b8;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    local_54 = 1;
    _objc_storeStrong(&local_70,0);
  }
LAB_0111ac2c:
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0,local_30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

