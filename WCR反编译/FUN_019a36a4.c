// FUN_019a36a4 @ 019a36a4

void FUN_019a36a4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined *local_300;
  undefined *local_2e8;
  uint local_2b0;
  uint local_2ac;
  undefined *local_288;
  undefined *local_280;
  undefined *local_258;
  undefined4 local_250;
  undefined4 local_24c;
  code *local_248;
  undefined *local_240;
  undefined8 local_238;
  undefined1 *local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined1 *local_218;
  undefined *local_210;
  undefined4 local_208;
  undefined4 local_204;
  code *local_200;
  undefined *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined1 *local_1e0;
  undefined8 local_1d8;
  undefined1 *local_1d0;
  byte local_1c1;
  undefined *local_1c0;
  undefined *local_1b8;
  byte local_1a9;
  undefined *local_1a8;
  byte local_199;
  undefined8 local_198;
  ulong local_190;
  int local_184;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  ulong local_140;
  ulong local_138;
  undefined1 *local_130;
  undefined *local_128;
  undefined *local_120;
  long local_118;
  long local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_118 = param_1;
  local_110 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_120 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_enumeratorAtPath__026ad0c8,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_128 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_138 = 0;
  local_130 = puVar2;
  _memset(auStack_180,0,0x40);
  puVar1 = local_128;
  (*(code *)PTR__objc_retain_02578638)();
  local_280 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10);
  if (local_280 != (undefined *)0x0) {
    lVar12 = *local_170;
    local_288 = (undefined *)0x0;
    do {
      do {
        if (*local_170 - lVar12 != 0) {
          _objc_enumerationMutation(*local_170 - lVar12,puVar1);
        }
        local_140 = *(ulong *)(local_178 + (long)local_288 * 8);
        lVar13 = *(long *)(param_1 + 0x40);
        lVar3 = *(long *)(param_1 + 0x28);
        (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_searchGeneration_026b9d38);
        if (lVar13 != lVar3) {
          local_184 = 1;
          goto LAB_019a3fb0;
        }
        uVar4 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        uVar11 = *(undefined8 *)(param_1 + 0x20);
        local_190 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar11,PTR_s_stringByAppendingPathComponent__026cab30,local_140);
        _objc_retainAutoreleasedReturnValue();
        local_199 = 0;
        local_198 = uVar11;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_120,PTR_s_fileExistsAtPath_isDirectory__026ca638,uVar11,&local_199);
        local_1a9 = 0;
        if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
          uVar4 = local_190;
          (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_hasPrefix__0269d320,&cf__);
          local_2ac = 1;
          if ((uVar4 & 1) == 0) goto LAB_019a3914;
        }
        else {
LAB_019a3914:
          if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
            puVar2 = PTR_WCRFileManagerState_026cf1c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
            _objc_retainAutoreleasedReturnValue();
            local_1a9 = 1;
            local_1a8 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_2ac = 1;
            if (((ulong)puVar2 & 1) != 0) goto LAB_019a39e4;
          }
          uVar4 = *(ulong *)(param_1 + 0x28);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isRoot_026a9380);
          local_2b0 = 0;
          if (((uVar4 & 1) != 0) && (local_2b0 = 0, (local_199 & 1) != 0)) {
            uVar4 = local_190;
            FUN_01988d7c();
            local_2b0 = (uint)uVar4;
          }
          local_2ac = local_2b0;
        }
LAB_019a39e4:
        if ((local_1a9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1a8);
        }
        if ((local_2ac & 1) == 0) {
          uVar4 = local_190;
          (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_lowercaseString_0269d9c0);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar4);
          if ((uVar5 & 1) != 0) {
            puVar2 = local_120;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_120,PTR_s_attributesOfItemAtPath_error__0269db08,local_198,0);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = local_130;
            local_108 = &cf_name;
            local_d8 = local_190;
            local_100 = &cf_path;
            local_d0 = local_198;
            local_f8 = &cf_isDir;
            puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_1b8 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                       local_199 & 1);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_f0 = &cf_size;
            local_c8 = puVar6;
            if ((local_199 & 1) == 0) {
              local_2e8 = local_1b8;
              (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_fileSize_026a1640);
            }
            else {
              local_2e8 = (undefined *)0x0;
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_numberWithUnsignedLongLong__0269d7f8,local_2e8);
            _objc_retainAutoreleasedReturnValue();
            local_e8 = &cf_date;
            puVar7 = local_1b8;
            local_c0 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1b8,PTR_s_objectForKeyedSubscript__0269d098,
                       *(undefined8 *)PTR__NSFileModificationDate_02578020);
            _objc_retainAutoreleasedReturnValue();
            local_1c1 = 0;
            local_300 = puVar7;
            if (puVar7 == (undefined *)0x0) {
              local_300 = PTR__OBJC_CLASS___NSDate_026cdf88;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_distantPast_026a8e18);
              _objc_retainAutoreleasedReturnValue();
              local_1c0 = local_300;
            }
            local_b8 = local_300;
            local_e0 = &cf_rel;
            local_b0 = local_140;
            puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_1c1 = puVar7 == (undefined *)0x0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d8,&local_108,6);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar8);
            if ((local_1c1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1c0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar7);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            local_138 = local_138 + 1;
            puVar9 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_count_0269cfe0);
            if ((undefined1 *)((long)&MACH_HEADER.ncmds + 3) < puVar9) {
              puVar9 = local_130;
              (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_copy_0269d150);
              local_1d0 = puVar9;
              (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_removeAllObjects_0269d508);
              puVar2 = PTR___dispatch_main_q_02578680;
              _objc_retainAutoreleaseReturnValue();
              _objc_retainAutoreleasedReturnValue();
              local_210 = PTR___NSConcreteStackBlock_02578660;
              local_208 = 0xc2000000;
              local_204 = 0;
              local_200 = FUN_019a4194;
              local_1f8 = &DAT_02582d38;
              local_1d8 = *(undefined8 *)(param_1 + 0x40);
              uVar11 = *(undefined8 *)(param_1 + 0x28);
              (*(code *)PTR__objc_retain_02578638)();
              uVar10 = *(undefined8 *)(param_1 + 0x38);
              local_1f0 = uVar11;
              (*(code *)PTR__objc_retain_02578638)();
              puVar9 = local_1d0;
              local_1e8 = uVar10;
              (*(code *)PTR__objc_retain_02578638)();
              local_1e0 = puVar9;
              _dispatch_async(puVar2,&local_210);
              (*(code *)PTR__objc_release_02578630)(puVar2);
              _objc_storeStrong(&local_1e0);
              _objc_storeStrong(&local_1e8,0);
              _objc_storeStrong(&local_1f0,0);
              _objc_storeStrong(&local_1d0,0);
            }
            _objc_storeStrong(&local_1b8,0);
          }
          lVar3 = local_138 - 2000;
          if (local_138 < 2000) {
            local_184 = 0;
          }
          else {
            lVar3 = 2;
            local_184 = 2;
          }
        }
        else {
          if ((local_199 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_skipDescendants_026b0be8);
          }
          lVar3 = 3;
          local_184 = 3;
        }
        _objc_storeStrong(lVar3,&local_198);
        _objc_storeStrong(&local_190,0);
        if ((local_184 != 0) && (local_184 != 3)) goto LAB_019a3fb0;
        local_288 = local_288 + 1;
      } while (local_288 < local_280);
      local_280 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,0x10)
      ;
      local_288 = (undefined *)0x0;
    } while (local_280 != (undefined *)0x0);
  }
  local_184 = 0;
LAB_019a3fb0:
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((local_184 == 0) || (local_184 == 2)) {
    puVar9 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_copy_0269d150);
    puVar1 = PTR___dispatch_main_q_02578680;
    local_218 = puVar9;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_258 = PTR___NSConcreteStackBlock_02578660;
    local_250 = 0xc2000000;
    local_24c = 0;
    local_248 = FUN_019a4234;
    local_240 = &DAT_02582d38;
    local_220 = *(undefined8 *)(param_1 + 0x40);
    uVar11 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    puVar9 = local_218;
    local_238 = uVar11;
    (*(code *)PTR__objc_retain_02578638)();
    local_230 = puVar9;
    uVar11 = *(undefined8 *)(param_1 + 0x38);
    (*(code *)PTR__objc_retain_02578638)();
    local_228 = uVar11;
    _dispatch_async(puVar1,&local_258);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_228);
    _objc_storeStrong(&local_230,0);
    _objc_storeStrong(&local_238,0);
    _objc_storeStrong(&local_218,0);
    local_184 = 0;
  }
  _objc_storeStrong(&local_130);
  _objc_storeStrong(&local_128,0);
  _objc_storeStrong(&local_120,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

