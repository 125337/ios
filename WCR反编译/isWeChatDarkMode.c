// isWeChatDarkMode @ 00f99474

/* WARNING: Removing unreachable block (ram,0x00f9988c) */
/* Function Stack Size: 0x10 bytes */

bool WCRefineHelper::isWeChatDarkMode(ID param_1,SEL param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined *local_160;
  undefined *local_158;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  char *local_d8;
  char *local_d0;
  undefined *local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = PTR_s_isDarkMode_0269f410;
  pcVar2 = "UiUtil";
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_getClass();
  local_d0 = pcVar2;
  if ((pcVar2 == (char *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_respondsToSelector__026ca818,local_c8),
     ((ulong)pcVar2 & 1) == 0)) {
    pcVar2 = "MMDarkModeConfigUtil";
    _objc_getClass();
    local_d8 = pcVar2;
    if ((pcVar2 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_respondsToSelector__026ca818,local_c8),
       ((ulong)pcVar2 & 1) == 0)) {
      _memset(auStack_120,0,0x40);
      puVar3 = PTR__OBJC_CLASS___UIApplication_026ce010;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_158 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10)
      ;
      if (local_158 != (undefined *)0x0) {
        lVar8 = *local_110;
        local_160 = (undefined *)0x0;
        do {
          do {
            if (*local_110 - lVar8 != 0) {
              _objc_enumerationMutation(*local_110 - lVar8,puVar4);
            }
            uVar9 = *(ulong *)(local_118 + (long)local_160 * 8);
            local_e0 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_activationState_026ca490);
            uVar5 = local_e0;
            if (uVar9 == 0) {
              puVar3 = PTR__OBJC_CLASS___UIWindowScene_026ce018;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIWindowScene_026ce018,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
              if ((uVar5 & 1) != 0) {
                uVar5 = local_e0;
                (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_traitCollection_026caba8);
                _objc_retainAutoreleasedReturnValue();
                uVar9 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(uVar5);
                if (uVar9 != 0) {
                  local_a9 = uVar9 == 2;
                  bVar1 = true;
                  goto LAB_00f997d4;
                }
              }
            }
            local_160 = local_160 + 1;
          } while (local_160 < local_158);
          local_158 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_160 = (undefined *)0x0;
        } while (local_158 != (undefined *)0x0);
      }
      bVar1 = false;
LAB_00f997d4:
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if (!bVar1) {
        puVar3 = PTR__OBJC_CLASS___UIScreen_026cdf70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_a9 = puVar7 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
    }
    else {
      pcVar2 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,local_c8);
      local_a9 = (byte)pcVar2 & 1;
    }
  }
  else {
    pcVar2 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,local_c8);
    local_a9 = (byte)pcVar2 & 1;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

