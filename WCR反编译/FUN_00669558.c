// FUN_00669558 @ 00669558

void FUN_00669558(undefined8 param_1,byte param_2,byte param_3,byte param_4)

{
  long lVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  cfstringStruct *local_210;
  cfstringStruct *local_208;
  cfstringStruct *local_1c0;
  cfstringStruct *local_198;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  cfstringStruct local_100;
  cfstringStruct *local_e0;
  undefined4 local_d8;
  cfstringStruct *local_c8;
  byte local_bb;
  byte local_ba;
  byte local_b9;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  pcVar2 = local_b8;
  local_bb = param_4;
  local_ba = param_3;
  local_b9 = param_2;
  FUN_006653e8();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = pcVar2;
  FUN_006620c0();
  local_b0 = local_c8;
  if (((ulong)pcVar2 & 1) != 0) {
    if (((local_b9 & 1) == 0) && ((local_ba & 1) == 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_d8 = 1;
      goto LAB_00669d68;
    }
    _objc_storeStrong(&local_c8,&cf___);
  }
  pcVar2 = local_c8;
  FUN_006627f0();
  if (((ulong)pcVar2 & 1) == 0) {
    local_198 = local_c8;
  }
  else {
    local_198 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_e0 = local_198;
  FUN_00666f68();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_198;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_100.field1_0x8._7_1_ = 0;
  local_1c0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_1c0 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_100.field2_0x10 = (undefined *)local_1c0;
  }
  local_100.field1_0x8._7_1_ = pcVar2 == (cfstringStruct *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_mutableCopy_0269d8a0);
  local_100.field3_0x18 = (long)local_1c0;
  if ((local_100.field1_0x8._7_1_ & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_100.field2_0x10);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  if ((local_bb & 1) == 0) {
    pcVar2 = (cfstringStruct *)local_100.field3_0x18;
    (*(code *)PTR__objc_msgSend_02578628)(local_100.field3_0x18,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_arrayWithCapacity__0269d9b8,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    local_100.field0_0x0 = (qword)puVar3;
    _memset(auStack_148,0,0x40);
    lVar1 = local_100.field3_0x18;
    (*(code *)PTR__objc_retain_02578638)();
    local_208 = (cfstringStruct *)lVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
    if (local_208 != (cfstringStruct *)0x0) {
      lVar4 = *local_138;
      local_210 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_138 - lVar4 != 0) {
            _objc_enumerationMutation(*local_138 - lVar4,lVar1);
          }
          uVar5 = *(ulong *)(local_140 + (long)local_210 * 8);
          local_108 = uVar5;
          FUN_006677a8();
          if ((uVar5 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_100.field0_0x0,PTR_s_addObject__0269d180,local_108);
          }
          local_210 = (cfstringStruct *)((long)&local_210->field0_0x0 + 1);
        } while (local_210 < local_208);
        local_208 = (cfstringStruct *)lVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (lVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10
                  );
        local_210 = (cfstringStruct *)0x0;
      } while (local_208 != (cfstringStruct *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(lVar1);
    local_198 = &local_100;
    _objc_storeStrong(&local_100.field3_0x18,local_100.field0_0x0);
    _objc_storeStrong(local_198,0);
  }
  FUN_006693d4();
  _objc_retainAutoreleasedReturnValue();
  local_150 = local_198;
  FUN_00668b18();
  _objc_retainAutoreleasedReturnValue();
  local_158 = local_198;
  if (((local_ba & 1) != 0) &&
     (pcVar2 = (cfstringStruct *)local_100.field3_0x18,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_100.field3_0x18,PTR_s_containsObject__0269cbb8,local_150),
     ((ulong)pcVar2 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_100.field3_0x18,PTR_s_addObject__0269d180,local_150)
    ;
  }
  if (((local_b9 & 1) != 0) &&
     (pcVar2 = (cfstringStruct *)local_100.field3_0x18,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_100.field3_0x18,PTR_s_containsObject__0269cbb8,local_158),
     ((ulong)pcVar2 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_100.field3_0x18,PTR_s_addObject__0269d180,local_158)
    ;
  }
  pcVar2 = (cfstringStruct *)local_100.field3_0x18;
  (*(code *)PTR__objc_msgSend_02578628)(local_100.field3_0x18,PTR_s_count_0269cfe0);
  local_b0 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf___;
  }
  else {
    pcVar2 = (cfstringStruct *)local_100.field3_0x18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_100.field3_0x18,PTR_s_componentsJoinedByString__0269d140,&cf__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_stringWithFormat__0269cca8,&cf_____);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  local_d8 = 1;
  _objc_storeStrong(&local_158);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_100.field3_0x18,0);
  _objc_storeStrong(&local_e0,0);
LAB_00669d68:
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

