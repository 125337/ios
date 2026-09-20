// FUN_0054b750 @ 0054b750

byte FUN_0054b750(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  char *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong local_178;
  ulong local_170;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  int local_d0;
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
  lVar4 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  uVar2 = local_b8;
  if (lVar4 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar2 & 1) != 0) {
      _memset(auStack_118,0,0x40);
      uVar2 = local_b8;
      (*(code *)PTR__objc_retain_02578638)();
      local_170 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      if (local_170 != 0) {
        lVar4 = *local_108;
        local_178 = 0;
        do {
          do {
            if (*local_108 - lVar4 != 0) {
              _objc_enumerationMutation(*local_108 - lVar4,uVar2);
            }
            uVar5 = *(ulong *)(local_110 + local_178 * 8);
            local_d8 = uVar5;
            if (DAT_028cb3f8 == (char *)0x0) {
              pcVar3 = "WCUserComment";
              _objc_getClass();
              DAT_028cb3f8 = pcVar3;
            }
            pcVar3 = DAT_028cb3f8;
            _objc_retainAutoreleaseReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,pcVar3);
            if ((uVar5 & 1) != 0) {
              uVar5 = local_d8;
              (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_username_026a2238);
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_120 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
              if (((uVar5 & 1) == 0) ||
                 (uVar5 = local_120,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_120,PTR_s_isEqualToString__0269ccc8,local_c0), (uVar5 & 1) == 0))
              {
                local_d0 = 0;
              }
              else {
                local_a9 = 1;
                local_d0 = 1;
              }
              _objc_storeStrong(&local_120,0);
              if (local_d0 != 0) goto LAB_0054bb30;
            }
            local_178 = local_178 + 1;
          } while (local_178 < local_170);
          local_170 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                     0x10);
          local_178 = 0;
        } while (local_170 != 0);
      }
      local_d0 = 0;
LAB_0054bb30:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_d0 == 0) {
        local_a9 = 0;
        local_d0 = 1;
      }
      goto LAB_0054bb80;
    }
  }
  local_a9 = 0;
  local_d0 = 1;
LAB_0054bb80:
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

