// FUN_01090c8c @ 01090c8c

void FUN_01090c8c(undefined8 param_1,long param_2)

{
  int iVar1;
  qword *pqVar2;
  undefined *puVar3;
  qword *pqVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *local_230;
  undefined *local_228;
  undefined *local_1f0;
  qword *local_1c8;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  undefined8 local_150;
  undefined *local_148;
  undefined *local_140;
  bool local_131;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  byte local_f9;
  undefined *local_f8;
  long local_f0;
  qword *local_e8;
  qword *local_e0;
  undefined4 local_d4;
  long local_d0;
  qword *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (qword *)0x0;
  _objc_storeStrong(&local_c8,param_1);
  pqVar2 = local_c8;
  local_d0 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (((undefined *)((long)&MACH_HEADER.reserved + 3) < pqVar2) &&
     (pqVar2 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0),
     pqVar2 < &UNK_00200001)) {
    pqVar4 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
    pqVar2 = local_c8;
    if ((undefined *)((long)&MACH_HEADER.filetype + 3) < pqVar4) {
      _objc_retainAutorelease(pqVar4 + -2);
      (*(code *)PTR__objc_msgSend_02578628)(pqVar2,PTR_s_bytes_026a9630);
      iVar1 = _memcmp(pqVar2,"SQLite format 3",0xf);
      if (iVar1 == 0) {
        puVar3 = *(undefined **)PTR____NSArray0___02578280;
        (*(code *)PTR__objc_retain_02578638)();
        local_d4 = 1;
        local_c0 = puVar3;
        goto LAB_01091614;
      }
    }
    pqVar2 = local_c8;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(pqVar2,PTR_s_bytes_026a9630);
    pqVar4 = local_c8;
    local_e0 = pqVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
    if ((undefined *)((long)&segment_command_00000020.vmaddr + 7) < pqVar4) {
      local_1c8 = &segment_command_00000020.vmsize;
    }
    else {
      local_1c8 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
    }
    local_e8 = local_1c8;
    local_f0 = 0;
    for (local_f8 = (undefined *)0x0; local_f8 < local_1c8; local_f8 = local_f8 + 1) {
      local_f9 = *(byte *)((long)local_e0 + (long)local_f8);
      if (((((0x40 < local_f9) && (local_f9 < 0x5b)) || ((0x60 < local_f9 && (local_f9 < 0x7b)))) ||
          (((0x2f < local_f9 && (local_f9 < 0x3a)) || (local_f9 == 0x2b)))) ||
         (((local_f9 == 0x2f || (local_f9 == 0x3d)) ||
          ((local_f9 == 0x2c ||
           (((local_f9 == 0x3b || (local_f9 == 0x7c)) ||
            ((local_f9 == 10 || (((local_f9 == 0xd || (local_f9 == 0x20)) || (local_f9 == 9)))))))))
          ))) {
        local_f0 = local_f0 + 1;
      }
    }
    if ((ulong)((long)local_1c8 * 3) < (ulong)(local_f0 * 4) ||
        (long)local_1c8 * 3 + local_f0 * -4 == 0) {
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_108 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
      if (puVar3 == (undefined *)0x0) {
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        puVar3 = local_108;
        local_108 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      puVar5 = local_108;
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
      puVar3 = local_108;
      if (puVar5 == (undefined *)0x0) {
        puVar3 = *(undefined **)PTR____NSArray0___02578280;
        (*(code *)PTR__objc_retain_02578638)();
        local_d4 = 1;
        local_c0 = puVar3;
      }
      else {
        puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
        _objc_retainAutoreleasedReturnValue();
        local_110 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar3 = local_110;
        FUN_0109a198();
        _objc_retainAutoreleasedReturnValue();
        local_118 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_count_0269cfe0);
        if (puVar3 == (undefined *)0x0) {
          puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          local_120 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
          local_131 = false;
          if (puVar3 == (undefined *)0x0) {
            local_1f0 = (undefined *)0x0;
          }
          else {
            local_1f0 = PTR__OBJC_CLASS___NSString_026cdfe8;
            _objc_alloc();
            (*(code *)PTR__objc_msgSend_02578628)();
            local_130 = local_1f0;
          }
          local_131 = puVar3 != (undefined *)0x0;
          (*(code *)PTR__objc_retain_02578638)();
          local_128 = local_1f0;
          if ((local_131 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_130);
          }
          puVar3 = local_128;
          (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
          if (puVar3 != (undefined *)0x0) {
            puVar5 = local_128;
            FUN_0109a198();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = local_118;
            local_118 = puVar5;
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          _objc_storeStrong(&local_128);
          _objc_storeStrong(&local_120,0);
        }
        puVar3 = local_118;
        (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_count_0269cfe0);
        if ((long)puVar3 < local_d0) {
          puVar3 = *(undefined **)PTR____NSArray0___02578280;
          (*(code *)PTR__objc_retain_02578638)();
          local_d4 = 1;
          local_c0 = puVar3;
        }
        else {
          puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
          local_140 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
          _objc_retainAutoreleasedReturnValue();
          local_148 = puVar5;
          _memset(auStack_190,0,0x40);
          puVar3 = local_118;
          (*(code *)PTR__objc_retain_02578638)();
          local_228 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,
                     0x10);
          if (local_228 != (undefined *)0x0) {
            lVar8 = *local_180;
            local_230 = (undefined *)0x0;
            do {
              do {
                if (*local_180 - lVar8 != 0) {
                  _objc_enumerationMutation(*local_180 - lVar8,puVar3);
                }
                local_150 = *(undefined8 *)(local_188 + (long)local_230 * 8);
                puVar5 = local_148;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_148,PTR_s_containsObject__0269cbb8,local_150);
                if (((ulong)puVar5 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_148,PTR_s_addObject__0269d180,local_150);
                  puVar5 = local_140;
                  local_b8 = &cf_md5;
                  local_b0 = local_150;
                  puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSDictionary_026ce090,
                             PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b0,&local_b8,1);
                  _objc_retainAutoreleasedReturnValue();
                  puVar7 = puVar6;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
                  (*(code *)PTR__objc_release_02578630)(puVar7);
                  (*(code *)PTR__objc_release_02578630)(puVar6);
                }
                local_230 = local_230 + 1;
              } while (local_230 < local_228);
              local_228 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,
                         auStack_a8,0x10);
              local_230 = (undefined *)0x0;
            } while (local_228 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = local_140;
          (*(code *)PTR__objc_retain_02578638)();
          local_c0 = puVar3;
          local_d4 = 1;
          _objc_storeStrong(&local_148);
          _objc_storeStrong(&local_140,0);
        }
        _objc_storeStrong(&local_118);
        _objc_storeStrong(&local_110,0);
      }
      _objc_storeStrong(&local_108,0);
    }
    else {
      puVar3 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_d4 = 1;
      local_c0 = puVar3;
    }
  }
  else {
    puVar3 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_d4 = 1;
    local_c0 = puVar3;
  }
LAB_01091614:
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

