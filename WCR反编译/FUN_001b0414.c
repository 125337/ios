// FUN_001b0414 @ 001b0414

void FUN_001b0414(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  char *pcVar6;
  uint local_cc;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  byte local_79;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined4 local_68;
  undefined *local_58;
  undefined1 *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  char *local_38;
  char *local_30;
  long local_28;
  undefined **ppuVar2;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  ppuVar2 = &local_58;
  local_58 = (undefined1 *)0x0;
  _objc_storeStrong(ppuVar2,param_1);
  uVar1 = (uint)ppuVar2;
  FUN_001a8008();
  if ((uVar1 & 1) == 0) {
    local_50 = (undefined1 *)0x0;
    local_68 = 1;
  }
  else {
    puVar3 = local_58;
    FUN_001a81d4();
    _objc_retainAutoreleasedReturnValue();
    local_79 = 0;
    local_70 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
    local_cc = 1;
    if ((undefined1 *)((long)&MACH_HEADER.cputype + 3) < puVar3) {
      puVar4 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      local_78 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_cc = (uint)puVar4 ^ 1;
    }
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if ((local_cc & 1) == 0) {
      pcVar5 = "MMContext";
      _objc_getClass();
      pcVar6 = "CContactMgr";
      local_88 = pcVar5;
      _objc_getClass();
      local_90 = pcVar6;
      if (((local_88 == (char *)0x0) || (pcVar6 == (char *)0x0)) ||
         (pcVar5 = local_88,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_88,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8),
         ((ulong)pcVar5 & 1) == 0)) {
        local_50 = (undefined1 *)0x0;
        local_68 = 1;
      }
      else {
        pcVar5 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_currentContext_0269d5f8);
        _objc_retainAutoreleasedReturnValue();
        local_98 = pcVar5;
        if ((pcVar5 == (char *)0x0) ||
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
           ((ulong)pcVar5 & 1) == 0)) {
          local_50 = (undefined1 *)0x0;
          local_68 = 1;
        }
        else {
          pcVar5 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_getService__0269d170,local_90);
          _objc_retainAutoreleasedReturnValue();
          local_a0 = pcVar5;
          if ((pcVar5 == (char *)0x0) ||
             ((*(code *)PTR__objc_msgSend_02578628)
                        (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178)
             , ((ulong)pcVar5 & 1) == 0)) {
            local_50 = (undefined1 *)0x0;
            local_68 = 1;
          }
          else {
            pcVar5 = local_a0;
            FUN_001b0ae8(local_a0,local_70);
            _objc_retainAutoreleasedReturnValue();
            local_a8 = pcVar5;
            FUN_001a9e0c(pcVar5,&cf_m_nsAliasName);
            _objc_retainAutoreleasedReturnValue();
            local_b0 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_length_0269cca0);
            if (pcVar5 == (char *)0x0) {
              pcVar6 = local_a8;
              FUN_001a9e0c(local_a8,&cf_m_nsAlias);
              _objc_retainAutoreleasedReturnValue();
              pcVar5 = local_b0;
              local_b0 = pcVar6;
              (*(code *)PTR__objc_release_02578630)(pcVar5);
            }
            pcVar5 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
            if (pcVar5 == (char *)0x0) {
              pcVar6 = local_a8;
              FUN_001a9e0c(local_a8,&cf_m_nsNickName);
              _objc_retainAutoreleasedReturnValue();
              pcVar5 = local_b0;
              local_b0 = pcVar6;
              (*(code *)PTR__objc_release_02578630)(pcVar5);
            }
            if (((local_a8 == (char *)0x0) ||
                (pcVar5 = local_b0,
                (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0),
                pcVar5 == (char *)0x0)) ||
               (pcVar5 = local_b0,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_b0,PTR_s_caseInsensitiveCompare__0269db48,local_70),
               pcVar5 == (char *)0x0)) {
              puVar4 = local_70;
              FUN_001b1178(0,local_70,local_a8);
              _objc_retainAutoreleasedReturnValue();
              local_50 = puVar4;
            }
            else {
              local_48 = &cf_query;
              local_38 = local_b0;
              local_40 = &cf_contact;
              local_30 = local_a8;
              puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,
                         PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
              _objc_retainAutoreleasedReturnValue();
              local_50 = puVar3;
            }
            local_68 = 1;
            _objc_storeStrong(&local_b0);
            _objc_storeStrong(&local_a8,0);
          }
          _objc_storeStrong(&local_a0,0);
        }
        _objc_storeStrong(&local_98,0);
      }
    }
    else {
      local_50 = (undefined1 *)0x0;
      local_68 = 1;
    }
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_50);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

