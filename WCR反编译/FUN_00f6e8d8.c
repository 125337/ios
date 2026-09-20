// FUN_00f6e8d8 @ 00f6e8d8

byte FUN_00f6e8d8(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_170;
  ulong local_168;
  ulong local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  uint local_c4;
  long local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  lVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  uVar3 = local_b8;
  if (lVar5 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) != 0) {
      _memset(auStack_110,0,0x40);
      uVar3 = local_b8;
      (*(code *)PTR__objc_retain_02578638)();
      local_168 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      if (local_168 != 0) {
        lVar5 = *local_100;
        local_170 = 0;
        do {
          do {
            if (*local_100 - lVar5 != 0) {
              _objc_enumerationMutation(*local_100 - lVar5,uVar3);
            }
            uVar6 = *(ulong *)(local_108 + local_170 * 8);
            local_118 = 0;
            local_d0 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar6,PTR_s_respondsToSelector__026ca818,PTR_s_title_0269d250);
            if ((uVar6 & 1) != 0) {
              uVar4 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_title_0269d250);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = local_118;
              local_118 = uVar4;
              (*(code *)PTR__objc_release_02578630)(uVar6);
            }
            uVar6 = local_118;
            _WCRPluginIconTitleMatches(local_118,local_c0);
            bVar1 = (uVar6 & 1) != 0;
            if (bVar1) {
              local_a9 = 1;
            }
            local_c4 = (uint)bVar1;
            _objc_storeStrong(&local_118,0);
            if (local_c4 != 0) goto LAB_00f6ec08;
            local_170 = local_170 + 1;
          } while (local_170 < local_168);
          local_168 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,
                     0x10);
          local_170 = 0;
        } while (local_168 != 0);
      }
      local_c4 = 0;
LAB_00f6ec08:
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (local_c4 == 0) {
        local_a9 = 0;
        local_c4 = 1;
      }
      goto LAB_00f6ec44;
    }
  }
  local_a9 = 0;
  local_c4 = 1;
LAB_00f6ec44:
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

