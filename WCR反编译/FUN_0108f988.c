// FUN_0108f988 @ 0108f988

void FUN_0108f988(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  ulong uVar8;
  cfstringStruct *pcVar9;
  long lVar10;
  undefined *local_228;
  undefined *local_220;
  cfstringStruct *local_1b0;
  uint local_184;
  cfstringStruct *local_170;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  undefined8 local_128;
  undefined *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  byte local_101;
  undefined *local_100;
  undefined1 local_f8 [24];
  undefined *local_e0;
  cfstringStruct *local_d8;
  uint local_cc;
  ulong local_c8;
  cfstringStruct *local_c0;
  undefined1 auStack_b8 [128];
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_1);
  uVar2 = local_c8;
  FUN_0107bd28();
  if ((uVar2 & 1) == 0) {
    local_c0 = (cfstringStruct *)0x0;
    local_cc = 1;
    goto LAB_01090164;
  }
  pcVar3 = "EmoticonUtil";
  _objc_getClass();
  local_e0 = PTR_s_dataOfEmoticonForMd5_needUpdateT_026abff8;
  local_d8 = (cfstringStruct *)pcVar3;
  if (((cfstringStruct *)pcVar3 != (cfstringStruct *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,
                 PTR_s_dataOfEmoticonForMd5_needUpdateT_026abff8), ((ulong)pcVar3 & 1) != 0)) {
    pcVar4 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,local_e0,local_c8,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSData_026ce1d0;
    local_f8._16_8_ = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    if ((((ulong)pcVar4 & 1) == 0) ||
       (pcVar4 = (cfstringStruct *)local_f8._16_8_,
       (*(code *)PTR__objc_msgSend_02578628)(local_f8._16_8_,PTR_s_length_0269cca0),
       uVar1 = local_f8._16_8_, pcVar4 == (cfstringStruct *)0x0)) {
      local_cc = 0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = (cfstringStruct *)uVar1;
      local_cc = 1;
    }
    pcVar3 = local_f8 + 0x10;
    _objc_storeStrong(pcVar3,0);
    if (local_cc != 0) goto LAB_01090164;
  }
  local_f8._8_8_ = PTR_s_pathOfEmoticonForMd5_needUpdateT_026abff0;
  if ((local_d8 != (cfstringStruct *)0x0) &&
     (pcVar3 = (char *)local_d8,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_d8,PTR_s_respondsToSelector__026ca818,
                PTR_s_pathOfEmoticonForMd5_needUpdateT_026abff0), ((ulong)pcVar3 & 1) != 0)) {
    pcVar4 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,local_f8._8_8_,local_c8,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_f8._0_8_ = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    local_101 = 0;
    local_184 = 0;
    if (((ulong)pcVar4 & 1) != 0) {
      pcVar4 = (cfstringStruct *)local_f8._0_8_;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8._0_8_,PTR_s_length_0269cca0);
      local_184 = 0;
      if (pcVar4 != (cfstringStruct *)0x0) {
        puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        local_101 = 1;
        local_100 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_184 = (uint)puVar5;
      }
    }
    if ((local_101 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_100);
    }
    if ((local_184 & 1) == 0) {
LAB_0108fd2c:
      local_cc = 0;
    }
    else {
      pcVar6 = (cfstringStruct *)PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,
                 local_f8._0_8_);
      _objc_retainAutoreleasedReturnValue();
      local_110 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_length_0269cca0);
      pcVar4 = local_110;
      if (pcVar6 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_c0 = pcVar4;
      }
      local_cc = (uint)(pcVar6 != (cfstringStruct *)0x0);
      _objc_storeStrong(&local_110,0);
      if (local_cc == 0) goto LAB_0108fd2c;
    }
    pcVar3 = local_f8;
    _objc_storeStrong(pcVar3,0);
    if (local_cc != 0) goto LAB_01090164;
  }
  _NSHomeDirectory();
  _objc_retainAutoreleasedReturnValue();
  local_1b0 = (cfstringStruct *)pcVar3;
  if ((cfstringStruct *)pcVar3 == (cfstringStruct *)0x0) {
    local_1b0 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_118 = local_1b0;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar4 = local_118;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_118,PTR_s_stringByAppendingPathComponent__026cab30,&cf_Library_Caches_emoticonPIC
            );
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c8,PTR_s_stringByAppendingPathExtension__026a4580,&cf_pic);
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_stringByAppendingPathComponent__026cab30);
  _objc_retainAutoreleasedReturnValue();
  pcVar7 = local_118;
  local_38 = pcVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_118,PTR_s_stringByAppendingPathComponent__026cab30,&cf_Library_Caches_wxamPIC);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c8,PTR_s_stringByAppendingPathExtension__026a4580,&cf_wxam);
  _objc_retainAutoreleasedReturnValue();
  pcVar9 = pcVar7;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_stringByAppendingPathComponent__026cab30);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = pcVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  local_120 = puVar5;
  (*(code *)PTR__objc_release_02578630)(pcVar9);
  (*(code *)PTR__objc_release_02578630)(uVar8);
  (*(code *)PTR__objc_release_02578630)(pcVar7);
  (*(code *)PTR__objc_release_02578630)(pcVar6);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  _memset(auStack_168,0,0x40);
  puVar5 = local_120;
  (*(code *)PTR__objc_retain_02578638)();
  local_220 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_b8,0x10);
  if (local_220 != (undefined *)0x0) {
    lVar10 = *local_158;
    local_228 = (undefined *)0x0;
    do {
      do {
        if (*local_158 - lVar10 != 0) {
          _objc_enumerationMutation(*local_158 - lVar10,puVar5);
        }
        local_128 = *(undefined8 *)(local_160 + (long)local_228 * 8);
        pcVar6 = (cfstringStruct *)PTR__OBJC_CLASS___NSData_026ce1d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,
                   local_128);
        _objc_retainAutoreleasedReturnValue();
        local_170 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_length_0269cca0);
        pcVar4 = local_170;
        if (pcVar6 != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_c0 = pcVar4;
        }
        local_cc = (uint)(pcVar6 != (cfstringStruct *)0x0);
        _objc_storeStrong(&local_170,0);
        if (local_cc != 0) goto LAB_01090114;
        local_228 = local_228 + 1;
      } while (local_228 < local_220);
      local_220 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_b8,0x10)
      ;
      local_228 = (undefined *)0x0;
    } while (local_220 != (undefined *)0x0);
  }
  local_cc = 0;
LAB_01090114:
  (*(code *)PTR__objc_release_02578630)(puVar5);
  if (local_cc == 0) {
    local_c0 = (cfstringStruct *)0x0;
    local_cc = 1;
  }
  _objc_storeStrong(&local_120);
  _objc_storeStrong(&local_118,0);
LAB_01090164:
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

