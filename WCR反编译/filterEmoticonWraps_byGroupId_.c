// filterEmoticonWraps:byGroupId: @ 00f30060

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

ID WCRefineEmoticonGroupStore::filterEmoticonWraps_byGroupId_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  cfstringStruct *local_1f0;
  undefined *local_1d0;
  undefined *local_1c8;
  bool local_171;
  cfstringStruct *local_170;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  byte local_f9;
  undefined *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  ulong local_e0;
  undefined4 local_d4;
  ulong local_d0;
  undefined *local_c8;
  SEL local_c0;
  cfstringStruct *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (undefined *)0x0;
  local_c0 = param_2;
  local_b8 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  puVar2 = local_c8;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_d4 = 1;
    local_b0 = puVar2;
  }
  else {
    uVar3 = local_d0;
    FUN_00f29cf4();
    _objc_retainAutoreleasedReturnValue();
    local_e0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
    if ((uVar3 == 0) ||
       (uVar3 = local_e0,
       (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isEqualToString__0269ccc8,&cf___all__),
       (uVar3 & 1) != 0)) {
      puVar2 = local_c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar2;
      local_d4 = 1;
    }
    else {
      pcVar4 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_membership_026abf38);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_b8;
      local_e8 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_validGroupIdSet_026abf40);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      puVar1 = local_c8;
      local_f0 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithCapacity__0269d9b8,puVar1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_e0;
      local_f8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_isEqualToString__0269ccc8,&cf___ungrouped__);
      local_f9 = (byte)uVar3;
      _memset(auStack_148,0,0x40);
      puVar2 = local_c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_1c8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10)
      ;
      if (local_1c8 != (undefined *)0x0) {
        lVar6 = *local_138;
        local_1d0 = (undefined *)0x0;
        do {
          do {
            if (*local_138 - lVar6 != 0) {
              _objc_enumerationMutation(*local_138 - lVar6,puVar2);
            }
            local_108 = *(undefined8 *)(local_140 + (long)local_1d0 * 8);
            pcVar4 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_md5FromEmoticonWrap__026abf08,local_108);
            _objc_retainAutoreleasedReturnValue();
            local_150 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar4,PTR_s_isEqualToString__0269ccc8,&cf_custom_emoticon_pid);
            if (((ulong)pcVar4 & 1) == 0) {
              pcVar4 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
              if (pcVar4 == (cfstringStruct *)0x0) {
                local_1f0 = &::cf___;
              }
              else {
                local_160 = local_e8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e8,PTR_s_objectForKeyedSubscript__0269d098,local_150);
                _objc_retainAutoreleasedReturnValue();
                local_1f0 = local_160;
                FUN_00f29cf4();
                _objc_retainAutoreleasedReturnValue();
                local_170 = local_1f0;
              }
              local_171 = pcVar4 != (cfstringStruct *)0x0;
              (*(code *)PTR__objc_retain_02578638)();
              local_158 = local_1f0;
              if (local_171) {
                (*(code *)PTR__objc_release_02578630)(local_170);
                (*(code *)PTR__objc_release_02578630)(local_160);
              }
              pcVar4 = local_158;
              (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
              if ((pcVar4 != (cfstringStruct *)0x0) &&
                 (pcVar4 = local_f0,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_f0,PTR_s_containsObject__0269cbb8,local_158),
                 ((ulong)pcVar4 & 1) == 0)) {
                _objc_storeStrong(&local_158,&::cf___);
              }
              if ((local_f9 & 1) == 0) {
                pcVar4 = local_158;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_158,PTR_s_isEqualToString__0269ccc8,local_e0);
                if (((ulong)pcVar4 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_f8,PTR_s_addObject__0269d180,local_108);
                }
              }
              else {
                pcVar4 = local_158;
                (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0);
                if (pcVar4 == (cfstringStruct *)0x0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_f8,PTR_s_addObject__0269d180,local_108);
                }
              }
              _objc_storeStrong(&local_158,0);
              local_d4 = 0;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_addObject__0269d180,local_108);
              local_d4 = 3;
            }
            _objc_storeStrong(&local_150,0);
            local_1d0 = local_1d0 + 1;
          } while (local_1d0 < local_1c8);
          local_1c8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                     0x10);
          local_1d0 = (undefined *)0x0;
        } while (local_1c8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_copy_0269d150);
      local_d4 = 1;
      local_b0 = puVar2;
      _objc_storeStrong(&local_f8);
      _objc_storeStrong(&local_f0,0);
      _objc_storeStrong(&local_e8,0);
    }
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

