// FUN_001b6c90 @ 001b6c90

void FUN_001b6c90(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_160;
  undefined *local_158;
  ulong local_130 [3];
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  int local_cc;
  ulong local_c8;
  ulong local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_1);
  if (local_c8 == 0) {
    local_c0 = 0;
    local_cc = 1;
  }
  else {
    _memset(auStack_118,0,0x40);
    local_b8 = &cf_m_nsUsrName;
    local_b0 = &cf_m_nsUserName;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2
              );
    _objc_retainAutoreleasedReturnValue();
    local_158 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_158 != (undefined *)0x0) {
      lVar5 = *local_108;
      local_160 = (undefined *)0x0;
      do {
        do {
          if (*local_108 - lVar5 != 0) {
            _objc_enumerationMutation(*local_108 - lVar5,puVar1);
          }
          local_d8 = *(undefined8 *)(local_110 + (long)local_160 * 8);
          uVar2 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_valueForKey__0269d128,local_d8);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_130[0] = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
          uVar6 = uVar2 & 0xffffffff;
          if ((uVar2 & 1) == 0) {
LAB_001b6f20:
            local_cc = 0;
          }
          else {
            uVar4 = local_130[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_130[0],PTR_s_length_0269cca0);
            uVar2 = local_130[0];
            uVar6 = 0;
            if (uVar4 == 0) goto LAB_001b6f20;
            (*(code *)PTR__objc_retain_02578638)();
            local_c0 = uVar2;
            uVar6 = 1;
            local_cc = 1;
          }
          _objc_storeStrong(uVar6,local_130,0);
          if (local_cc != 0) goto LAB_001b6fb8;
          local_160 = local_160 + 1;
        } while (local_160 < local_158);
        local_158 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                   0x10);
        local_160 = (undefined *)0x0;
      } while (local_158 != (undefined *)0x0);
    }
    local_cc = 0;
LAB_001b6fb8:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_cc == 0) {
      local_c0 = 0;
      local_cc = 1;
    }
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

