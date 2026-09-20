// FUN_010bd1a0 @ 010bd1a0

void FUN_010bd1a0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  undefined *local_2e8;
  undefined *local_2e0;
  undefined *local_290;
  undefined *local_288;
  cfstringStruct *local_230;
  cfstringStruct *local_228;
  cfstringStruct *local_220;
  undefined *local_218;
  undefined *local_210;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  undefined8 local_1c8;
  cfstringStruct *local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  cfstringStruct *local_178;
  undefined *local_170;
  uint local_164;
  long local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  undefined1 auStack_138 [128];
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_158 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_158,param_1);
  local_160 = 0;
  _objc_storeStrong(&local_160,param_2);
  pcVar3 = local_158;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((((ulong)pcVar3 & 1) == 0) ||
     (pcVar3 = local_158, (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0),
     pcVar3 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = &cf___;
    local_164 = 1;
    goto LAB_010bd8e0;
  }
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_170 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_fileExistsAtPath__026ca630,local_158);
  pcVar3 = local_158;
  if (((ulong)puVar2 & 1) == 0) {
    lVar6 = local_160;
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0);
    if (lVar6 != 0) {
      _memset(auStack_1b8,0,0x40);
      local_b8 = local_160;
      lVar6 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_160,PTR_s_stringByDeletingLastPathComponen_0269fb90);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_b0 = lVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(lVar6);
      local_288 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,0x10)
      ;
      if (local_288 != (undefined *)0x0) {
        lVar6 = *local_1a8;
        local_290 = (undefined *)0x0;
        do {
          do {
            if (*local_1a8 - lVar6 != 0) {
              _objc_enumerationMutation(*local_1a8 - lVar6,puVar2);
            }
            pcVar7 = *(cfstringStruct **)(local_1b0 + (long)local_290 * 8);
            pcVar3 = local_158;
            local_178 = pcVar7;
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_lastPathComponent_026ca780);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar7,PTR_s_stringByAppendingPathComponent__026cab30);
            _objc_retainAutoreleasedReturnValue();
            local_1c0 = pcVar7;
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            puVar4 = local_170;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_170,PTR_s_fileExistsAtPath__026ca630,local_1c0);
            pcVar3 = local_1c0;
            bVar1 = ((ulong)puVar4 & 1) != 0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_150 = pcVar3;
            }
            local_164 = (uint)bVar1;
            _objc_storeStrong(&local_1c0,0);
            if (local_164 != 0) goto LAB_010bd578;
            local_290 = local_290 + 1;
          } while (local_290 < local_288);
          local_288 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,auStack_a8,
                     0x10);
          local_290 = (undefined *)0x0;
        } while (local_288 != (undefined *)0x0);
      }
      local_164 = 0;
LAB_010bd578:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_164 != 0) goto LAB_010bd8d0;
    }
    _memset(auStack_208,0,0x40);
    local_148 = &cf_Documents;
    local_140 = &cf_Library;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_148,
               2);
    _objc_retainAutoreleasedReturnValue();
    local_2e0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_2e0 != (undefined *)0x0) {
      lVar6 = *local_1f8;
      local_2e8 = (undefined *)0x0;
      do {
        do {
          if (*local_1f8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1f8 - lVar6,puVar2);
          }
          local_1c8 = *(undefined8 *)(local_200 + (long)local_2e8 * 8);
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_158;
          puVar5 = PTR_s_rangeOfString__0269d838;
          local_210 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_rangeOfString__0269d838,puVar4);
          local_220 = pcVar3;
          local_218 = puVar5;
          if (pcVar3 == (cfstringStruct *)0x7fffffffffffffff) {
            local_164 = 5;
          }
          else {
            pcVar7 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_158,PTR_s_substringFromIndex__0269d120,
                       (undefined1 *)((long)&pcVar3->field0_0x0 + 1));
            _objc_retainAutoreleasedReturnValue();
            local_228 = pcVar7;
            _NSHomeDirectory();
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = pcVar7;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_230 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar7);
            puVar4 = local_170;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_170,PTR_s_fileExistsAtPath__026ca630,local_230);
            pcVar3 = local_230;
            bVar1 = ((ulong)puVar4 & 1) != 0;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_150 = pcVar3;
            }
            local_164 = (uint)bVar1;
            _objc_storeStrong(&local_230);
            _objc_storeStrong(&local_228,0);
          }
          _objc_storeStrong(&local_210,0);
          if ((local_164 != 0) && (local_164 != 5)) goto LAB_010bd884;
          local_2e8 = local_2e8 + 1;
        } while (local_2e8 < local_2e0);
        local_2e0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_138,
                   0x10);
        local_2e8 = (undefined *)0x0;
      } while (local_2e0 != (undefined *)0x0);
    }
    local_164 = 0;
LAB_010bd884:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_164 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_150 = &cf___;
      local_164 = 1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = pcVar3;
    local_164 = 1;
  }
LAB_010bd8d0:
  _objc_storeStrong(&local_170,0);
LAB_010bd8e0:
  _objc_storeStrong(&local_160);
  _objc_storeStrong(&local_158,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_150);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

