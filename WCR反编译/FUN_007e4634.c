// FUN_007e4634 @ 007e4634

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_007e4634(undefined8 param_1)

{
  ushort uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  uint local_2d8;
  uint local_248;
  ulong local_1c8;
  ulong local_1c0;
  ulong local_168;
  undefined1 *local_160;
  ulong local_158;
  undefined *local_150;
  byte local_147;
  byte local_146;
  undefined1 local_145;
  undefined1 local_144;
  undefined1 local_143;
  ushort local_142;
  ulong local_140;
  undefined1 *local_138;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  ulong local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  if ((local_b8 == 0) ||
     (uVar2 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    puVar3 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = 1;
    local_b0 = puVar3;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    local_d0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_newlineCharacterSet_0269ef38);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_b8;
    local_d8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_componentsSeparatedByCharactersI_0269d1a8,puVar4);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = uVar2;
    _memset(auStack_128,0,0x40);
    uVar2 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1c0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_1c0 != 0) {
      lVar7 = *local_118;
      local_1c8 = 0;
      do {
        do {
          if (*local_118 - lVar7 != 0) {
            _objc_enumerationMutation(*local_118 - lVar7,uVar2);
          }
          uVar8 = *(ulong *)(local_120 + local_1c8 * 8);
          puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          local_e8 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_130 = uVar8;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          uVar8 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
          puVar3 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
          if (uVar8 == 0) {
            local_c8 = 3;
          }
          else {
            uVar8 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithCapacity__0269fc10,uVar8);
            _objc_retainAutoreleasedReturnValue();
            local_138 = puVar3;
            for (local_140 = 0; uVar8 = local_140, uVar5 = local_130,
                (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0),
                uVar8 < uVar5; local_140 = local_140 + 1) {
              uVar8 = local_130;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_130,PTR_s_characterAtIndex__0269fa18,local_140);
              local_142 = (ushort)uVar8;
              local_143 = 0x2f < local_142 && local_142 < 0x3a;
              local_144 = 0x40 < local_142 && local_142 < 0x5b;
              local_145 = 0x60 < local_142 && local_142 < 0x7b;
              if ((((bool)local_143) || ((bool)local_144)) || ((bool)local_145)) {
                (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_appendFormat__0269d148,&cf__C)
                ;
              }
            }
            puVar6 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_hasPrefix__0269d320,&cf_TB);
            local_248 = 1;
            if (((ulong)puVar6 & 1) == 0) {
              puVar6 = local_138;
              (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_hasPrefix__0269d320,&cf_BB);
              local_248 = (uint)puVar6;
            }
            local_146 = (byte)local_248 & 1;
            if ((((local_248 & 1) == 0) ||
                (puVar6 = local_138,
                (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0),
                puVar6 < (undefined1 *)((long)&MACH_HEADER.cpusubtype + 2))) ||
               (puVar6 = local_138,
               (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0),
               &MACH_HEADER.ncmds < puVar6)) {
              local_c8 = 3;
            }
            else {
              puVar4 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d0,PTR_s_containsObject__0269cbb8,local_138);
              puVar3 = local_d0;
              if (((ulong)puVar4 & 1) == 0) {
                puVar6 = local_138;
                (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_copy_0269d150);
                (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180,puVar6);
                (*(code *)PTR__objc_release_02578630)(puVar6);
              }
              local_c8 = 0;
            }
            _objc_storeStrong(&local_138,0);
          }
          _objc_storeStrong(&local_130,0);
          local_1c8 = local_1c8 + 1;
        } while (local_1c8 < local_1c0);
        local_1c0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_1c8 = 0;
      } while (local_1c0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_b8;
    puVar3 = PTR_s_rangeOfCharacterFromSet__0269db68;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_rangeOfCharacterFromSet__0269db68,local_d8)
    ;
    local_147 = uVar2 != 0x7fffffffffffffff;
    puVar4 = local_d0;
    local_158 = uVar2;
    local_150 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
    puVar3 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    if ((puVar4 == (undefined *)0x0) && ((local_147 & 1) == 0)) {
      uVar2 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithCapacity__0269fc10,uVar2);
      _objc_retainAutoreleasedReturnValue();
      local_160 = puVar3;
      for (local_168 = 0; uVar2 = local_b8,
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0), local_168 < uVar2;
          local_168 = local_168 + 1) {
        uVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_characterAtIndex__0269fa18,local_168);
        uVar1 = (ushort)uVar2;
        if (((0x2f < uVar1 && uVar1 < 0x3a) || (0x40 < uVar1 && uVar1 < 0x5b)) ||
           (0x60 < uVar1 && uVar1 < 0x7b)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_appendFormat__0269d148,&cf__C);
        }
      }
      puVar6 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_hasPrefix__0269d320,&cf_TB);
      local_2d8 = 1;
      if (((ulong)puVar6 & 1) == 0) {
        puVar6 = local_160;
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_hasPrefix__0269d320,&cf_BB);
        local_2d8 = (uint)puVar6;
      }
      if ((((local_2d8 & 1) != 0) &&
          (puVar6 = local_160,
          (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0),
          (undefined1 *)((long)&MACH_HEADER.cpusubtype + 1) < puVar6)) &&
         (puVar6 = local_160, (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0)
         , puVar3 = local_d0, puVar6 < (undefined1 *)((long)&MACH_HEADER.ncmds + 1))) {
        puVar6 = local_160;
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_copy_0269d150);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180,puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      _objc_storeStrong(&local_160,0);
    }
    puVar3 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_copy_0269d150);
    local_c8 = 1;
    local_b0 = puVar3;
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

