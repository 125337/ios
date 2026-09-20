// saveConvertResults:toDirectory: @ 019f4844

/* Function Stack Size: 0x20 bytes */

unsigned_long_long
WCRefineFontConvertViewController::saveConvertResults_toDirectory_
          (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  unsigned_long_long uVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  cfstringStruct *pcVar8;
  undefined8 uVar9;
  long lVar10;
  cfstringStruct *local_1a0;
  ulong local_170;
  ulong local_168;
  long local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  undefined8 local_128;
  cfstringStruct *local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  cfstringStruct *local_d8;
  unsigned_long_long local_d0;
  undefined8 local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  local_d0 = 0;
  _memset(auStack_118,0,0x40);
  uVar2 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_168 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_168 != 0) {
    lVar10 = *local_108;
    local_170 = 0;
    do {
      do {
        uVar3 = local_168;
        if (*local_108 - lVar10 != 0) {
          uVar3 = uVar2;
          _objc_enumerationMutation(*local_108 - lVar10);
        }
        local_d8 = *(cfstringStruct **)(local_110 + local_170 * 8);
        _objc_autoreleasePoolPush();
        pcVar4 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_fileName_026abf98);
        _objc_retainAutoreleasedReturnValue();
        local_1a0 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_1a0 = &cf_converted_ttc;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_120 = local_1a0;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        uVar5 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_stringByAppendingPathComponent__026cab30,local_120);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        local_128 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar6);
        if (((ulong)puVar7 & 1) != 0) {
          pcVar4 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120,PTR_s_stringByDeletingPathExtension_0269fd18);
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = local_120;
          local_130 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_pathExtension_0269e090);
          _objc_retainAutoreleasedReturnValue();
          local_140 = 2;
          local_138 = pcVar8;
          do {
            pcVar8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                       &cf_____ld___);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_120;
            local_120 = pcVar8;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            uVar9 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c8,PTR_s_stringByAppendingPathComponent__026cab30,local_120);
            _objc_retainAutoreleasedReturnValue();
            uVar5 = local_128;
            local_128 = uVar9;
            (*(code *)PTR__objc_release_02578630)(uVar5);
            local_140 = local_140 + 1;
            puVar6 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar6);
          } while (((ulong)puVar7 & 1) != 0 && local_140 < 1000);
          _objc_storeStrong(&local_138);
          _objc_storeStrong(&local_130,0);
        }
        pcVar4 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_data_0269d850);
        _objc_retainAutoreleasedReturnValue();
        pcVar8 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        if (((ulong)pcVar8 & 1) != 0) {
          local_d0 = local_d0 + 1;
        }
        _objc_storeStrong(&local_128);
        _objc_storeStrong(&local_120,0);
        _objc_autoreleasePoolPop(uVar3);
        local_170 = local_170 + 1;
      } while (local_170 < local_168);
      local_168 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_170 = 0;
    } while (local_168 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar1 = local_d0;
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return uVar1;
}

