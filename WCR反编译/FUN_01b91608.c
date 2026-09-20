// FUN_01b91608 @ 01b91608

void FUN_01b91608(long param_1)

{
  char *pcVar1;
  long lVar2;
  char *local_80;
  char *local_78;
  char *local_70;
  undefined *local_68;
  char *local_60;
  uint local_54;
  char *local_50;
  ulong local_48;
  char *local_40;
  long local_38;
  char *local_30;
  undefined *local_28 [2];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = param_1;
  if (param_1 == 0) {
    local_30 = (char *)0x0;
  }
  else {
    pcVar1 = "MMContext";
    _objc_getClass();
    lVar2 = 0;
    local_40 = pcVar1;
    if (pcVar1 != (char *)0x0) {
      local_28[0] = PTR_s_currentContext_0269d5f8;
      local_28[1] = PTR_s_activeUserContext_0269d9a8;
      for (local_48 = 0; lVar2 = local_48 - 2, local_48 < 2; local_48 = local_48 + 1) {
        pcVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_respondsToSelector__026ca818,local_28[local_48]);
        if (((ulong)pcVar1 & 1) != 0) {
          pcVar1 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,local_28[local_48]);
          _objc_retainAutoreleasedReturnValue();
          local_50 = pcVar1;
          if (pcVar1 == (char *)0x0) {
            local_54 = 4;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
            if (((ulong)pcVar1 & 1) != 0) {
              pcVar1 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getService__0269d170,local_38);
              _objc_retainAutoreleasedReturnValue();
              local_60 = pcVar1;
              if (pcVar1 != (char *)0x0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_30 = pcVar1;
              }
              local_54 = (uint)(pcVar1 != (char *)0x0);
              _objc_storeStrong(&local_60,0);
              if (local_54 != 0) goto LAB_01b918d0;
            }
            local_68 = PTR_s_serviceCenter_0269d9b0;
            pcVar1 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_serviceCenter_0269d9b0);
            if (((ulong)pcVar1 & 1) != 0) {
              pcVar1 = local_50;
              (*(code *)PTR__objc_msgSend_02578628)(local_50,local_68);
              _objc_retainAutoreleasedReturnValue();
              local_70 = pcVar1;
              if ((pcVar1 == (char *)0x0) ||
                 ((*(code *)PTR__objc_msgSend_02578628)
                            (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
                 ((ulong)pcVar1 & 1) == 0)) {
LAB_01b918a4:
                local_54 = 0;
              }
              else {
                pcVar1 = local_70;
                (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_getService__0269d170,local_38);
                _objc_retainAutoreleasedReturnValue();
                local_78 = pcVar1;
                if (pcVar1 != (char *)0x0) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_30 = pcVar1;
                }
                local_54 = (uint)(pcVar1 != (char *)0x0);
                _objc_storeStrong(&local_78,0);
                if (local_54 == 0) goto LAB_01b918a4;
              }
              _objc_storeStrong(&local_70,0);
              if (local_54 != 0) goto LAB_01b918d0;
            }
            local_54 = 0;
          }
LAB_01b918d0:
          _objc_storeStrong(&local_50,0);
          if ((local_54 != 0) && (local_54 == 1)) goto LAB_01b919cc;
        }
      }
    }
    pcVar1 = "MMServiceCenter";
    _objc_getClass(lVar2);
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar1;
    if ((pcVar1 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar1 & 1) == 0)) {
      local_30 = (char *)0x0;
    }
    else {
      pcVar1 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_getService__0269d170,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_30 = pcVar1;
    }
    local_54 = 1;
    _objc_storeStrong(&local_80,0);
  }
LAB_01b919cc:
  if (*(long *)PTR____stack_chk_guard_02578670 == local_18) {
    _objc_autoreleaseReturnValue(0,local_30);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

