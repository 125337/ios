// FUN_01bcdb8c @ 01bcdb8c

void FUN_01bcdb8c(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  cfstringStruct *pcVar14;
  cfstringStruct *pcVar15;
  long lVar16;
  undefined8 uVar17;
  undefined *local_228;
  undefined *local_220;
  cfstringStruct *local_170;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  undefined8 local_128;
  undefined *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  undefined1 auStack_108 [128];
  cfstringStruct *local_88;
  undefined *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_118 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_118,param_1);
  local_58 = &cf_hd;
  puVar3 = PTR_s_pathForHdData_026a4a38;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_50 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58);
  _objc_retainAutoreleasedReturnValue();
  local_68 = &cf_data;
  puVar5 = PTR_s_pathForData_026a4a20;
  local_48 = puVar4;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_60 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,2);
  _objc_retainAutoreleasedReturnValue();
  local_78 = &cf_exist;
  puVar7 = PTR_s_pathForExistData_026a4a30;
  local_40 = puVar6;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_70 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_78,2);
  _objc_retainAutoreleasedReturnValue();
  local_88 = &cf_preview;
  puVar9 = PTR_s_pathForPreview_026a4a18;
  local_38 = puVar8;
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_80 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_88,2);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar10;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4);
  _objc_retainAutoreleasedReturnValue();
  local_120 = puVar11;
  (*(code *)PTR__objc_release_02578630)(puVar10);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _memset(auStack_168,0,0x40);
  puVar3 = local_120;
  (*(code *)PTR__objc_retain_02578638)();
  local_220 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_108,0x10);
  if (local_220 != (undefined *)0x0) {
    lVar16 = *local_158;
    local_228 = (undefined *)0x0;
    do {
      do {
        if (*local_158 - lVar16 != 0) {
          _objc_enumerationMutation(*local_158 - lVar16,puVar3);
        }
        pcVar14 = local_118;
        uVar17 = *(undefined8 *)(local_160 + (long)local_228 * 8);
        local_128 = uVar17;
        (*(code *)PTR__objc_msgSend_02578628)(uVar17,PTR_s_objectAtIndexedSubscript__0269cc78,0);
        _objc_retainAutoreleasedReturnValue();
        uVar12 = local_128;
        (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_objectAtIndexedSubscript__0269cc78,1);
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uVar12;
        _NSSelectorFromString();
        FUN_01be3c24(pcVar14,uVar17,uVar13);
        _objc_retainAutoreleasedReturnValue();
        local_170 = pcVar14;
        (*(code *)PTR__objc_release_02578630)(uVar12);
        (*(code *)PTR__objc_release_02578630)(uVar17);
        pcVar15 = local_170;
        FUN_01bc92e8();
        pcVar14 = local_170;
        bVar1 = ((ulong)pcVar15 & 1) != 0;
        if (bVar1) {
          (*(code *)PTR__objc_retain_02578638)();
          local_110 = pcVar14;
        }
        _objc_storeStrong(&local_170,0);
        bVar2 = true;
        if (bVar1) goto LAB_01bce05c;
        local_228 = local_228 + 1;
      } while (local_228 < local_220);
      local_220 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_108,0x10
                );
      local_228 = (undefined *)0x0;
    } while (local_220 != (undefined *)0x0);
  }
  bVar2 = false;
LAB_01bce05c:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (!bVar2) {
    (*(code *)PTR__objc_retain_02578638)();
    local_110 = &cf___;
  }
  _objc_storeStrong(&local_120);
  _objc_storeStrong(&local_118,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_110);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

