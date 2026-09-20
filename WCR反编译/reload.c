// reload @ 01987f18

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineFileManagerViewController::reload
          (WCRefineFileManagerViewController *this,ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined1 *puVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  double in_d0;
  undefined1 *local_450;
  byte local_40c;
  undefined1 *local_3b0;
  undefined1 *local_3a8;
  undefined1 *local_390;
  uint local_36c;
  undefined1 *local_350;
  undefined1 *local_348;
  undefined1 *local_330;
  undefined1 *local_2f0;
  undefined *local_2e0;
  undefined1 *local_2d0;
  undefined1 *local_2c8;
  undefined1 auStack_2c0 [8];
  long local_2b8;
  long *local_2b0;
  undefined8 local_280;
  long local_278;
  undefined1 *local_270;
  undefined1 *local_268;
  byte local_259;
  undefined1 *local_258;
  byte local_249;
  undefined1 *local_248;
  undefined4 local_240;
  byte local_239;
  undefined *local_238;
  ID local_230;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  ulong local_1e8;
  undefined *local_1e0;
  byte local_1d1;
  undefined8 local_1d0;
  undefined1 *local_1c8;
  undefined8 local_1c0;
  undefined1 *local_1b8;
  ID local_1b0;
  SEL local_1a8;
  ID local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  ulong local_160;
  ID local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined1 *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1a8 = param_2;
  local_1a0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_resolvedDirectory_026ba370);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_1b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_1c0 = 0;
  local_1d0 = 0;
  local_1b8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_1b0,&local_1d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_1c0,local_1d0);
  puVar3 = PTR_WCRFileManagerState_026cf1c8;
  local_1c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_1d1 = (byte)puVar2;
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_1e0 = puVar2;
  _memset(auStack_228,0,0x40);
  local_330 = local_1c8;
  if (local_1c8 == (undefined1 *)0x0) {
    local_330 = *(undefined1 **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_348 = local_330;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_330,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_a8,0x10);
  if (local_348 != (undefined1 *)0x0) {
    lVar13 = *local_218;
    local_350 = (undefined1 *)0x0;
    do {
      do {
        if (*local_218 - lVar13 != 0) {
          _objc_enumerationMutation(*local_218 - lVar13,local_330);
        }
        uVar14 = *(ulong *)(local_220 + (long)local_350 * 8);
        local_1e8 = uVar14;
        if ((((local_1d1 & 1) != 0) ||
            ((*(code *)PTR__objc_msgSend_02578628)(uVar14,PTR_s_hasPrefix__0269d320,&::cf__),
            (uVar14 & 1) == 0)) &&
           ((IVar4 = local_1a0,
            (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_isRoot_026a9380), (IVar4 & 1) == 0
            || (uVar14 = local_1e8, FUN_01988d7c(), (uVar14 & 1) == 0)))) {
          IVar4 = local_1b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1b0,PTR_s_stringByAppendingPathComponent__026cab30,local_1e8);
          _objc_retainAutoreleasedReturnValue();
          local_239 = 0;
          local_36c = 0;
          local_230 = IVar4;
          if ((local_1d1 & 1) == 0) {
            puVar2 = PTR_WCRFileManagerState_026cf1c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
            _objc_retainAutoreleasedReturnValue();
            local_239 = 1;
            local_238 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_36c = (uint)puVar2;
          }
          if ((local_239 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_238);
          }
          if ((local_36c & 1) == 0) {
            puVar5 = local_1b8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1b8,PTR_s_attributesOfItemAtPath_error__0269db08,local_230,0);
            _objc_retainAutoreleasedReturnValue();
            local_249 = 0;
            local_248 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1b8,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_230,&local_249);
            local_258 = (undefined1 *)0x0;
            local_259 = 1;
            if ((local_249 & 1) == 0) {
              puVar5 = local_248;
              (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_fileSize_026a1640);
              local_258 = puVar5;
            }
            else {
              puVar2 = PTR_WCRFileDirSizeManager_026cf1d8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRFileDirSizeManager_026cf1d8,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              puVar5 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_268 = puVar5;
              (*(code *)PTR__objc_release_02578630)(puVar2);
              if (local_268 == (undefined1 *)0x0) {
                local_259 = 0;
              }
              else {
                puVar5 = local_268;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_268,PTR_s_unsignedLongLongValue_0269d6b8);
                local_258 = puVar5;
              }
              _objc_storeStrong(&local_268,0);
            }
            puVar5 = local_248;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_248,PTR_s_objectForKeyedSubscript__0269d098,
                       *(undefined8 *)PTR__NSFileModificationDate_02578020);
            _objc_retainAutoreleasedReturnValue();
            local_270 = puVar5;
            if (((local_249 & 1) != 0) &&
               ((*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_timeIntervalSince1970_0269cfc8),
               in_d0 < 86400.0)) {
              local_278 = 0;
              _memset(auStack_2c0,0,0x40);
              puVar5 = local_1b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_230,0);
              _objc_retainAutoreleasedReturnValue();
              local_390 = puVar5;
              if (puVar5 == (undefined1 *)0x0) {
                local_390 = *(undefined1 **)PTR____NSArray0___02578280;
              }
              (*(code *)PTR__objc_retain_02578638)();
              (*(code *)PTR__objc_release_02578630)(puVar5);
              local_3a8 = local_390;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_390,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,
                         auStack_128,0x10);
              if (local_3a8 != (undefined1 *)0x0) {
                lVar15 = *local_2b0;
                local_3b0 = (undefined1 *)0x0;
                do {
                  do {
                    if (*local_2b0 - lVar15 != 0) {
                      _objc_enumerationMutation(*local_2b0 - lVar15,local_390);
                    }
                    puVar5 = local_1b8;
                    local_280 = *(undefined8 *)(local_2b8 + (long)local_3b0 * 8);
                    IVar4 = local_230;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_230,PTR_s_stringByAppendingPathComponent__026cab30,local_280);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar5,PTR_s_attributesOfItemAtPath_error__0269db08,IVar4,0);
                    _objc_retainAutoreleasedReturnValue();
                    local_2c8 = puVar5;
                    (*(code *)PTR__objc_release_02578630)(IVar4);
                    puVar5 = local_2c8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_2c8,PTR_s_objectForKeyedSubscript__0269d098,
                               *(undefined8 *)PTR__NSFileModificationDate_02578020);
                    _objc_retainAutoreleasedReturnValue();
                    local_2d0 = puVar5;
                    if ((puVar5 != (undefined1 *)0x0) &&
                       ((local_278 == 0 ||
                        ((*(code *)PTR__objc_msgSend_02578628)
                                   (puVar5,PTR_s_compare__0269cd10,local_278),
                        puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 1))))) {
                      _objc_storeStrong(0,&local_278,local_2d0);
                    }
                    _objc_storeStrong(&local_2d0);
                    _objc_storeStrong(&local_2c8,0);
                    local_3b0 = local_3b0 + 1;
                  } while (local_3b0 < local_3a8);
                  local_3a8 = local_390;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_390,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,
                             auStack_128,0x10);
                  local_3b0 = (undefined1 *)0x0;
                } while (local_3a8 != (undefined1 *)0x0);
              }
              (*(code *)PTR__objc_release_02578630)(local_390);
              if (local_278 != 0) {
                _objc_storeStrong(&local_270,local_278);
              }
              _objc_storeStrong(&local_278,0);
            }
            IVar4 = local_1b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1b0,PTR_s_stringByStandardizingPath_026cab38);
            _objc_retainAutoreleasedReturnValue();
            IVar6 = IVar4;
            FUN_01988e34();
            _objc_retainAutoreleasedReturnValue();
            IVar7 = IVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            IVar8 = IVar4;
            (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isEqualToString__0269ccc8);
            (*(code *)PTR__objc_release_02578630)(IVar7);
            (*(code *)PTR__objc_release_02578630)(IVar6);
            (*(code *)PTR__objc_release_02578630)(IVar4);
            IVar4 = local_1a0;
            (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_protectionMode_026ba310);
            bVar1 = false;
            if (((IVar4 & 1) != 0) || (local_40c = 0, (IVar8 & 1) != 0)) {
              local_2e0 = PTR_WCRFileManagerState_026cf1c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              bVar1 = true;
              puVar2 = local_2e0;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_40c = (byte)puVar2;
            }
            if (bVar1) {
              (*(code *)PTR__objc_release_02578630)(local_2e0);
            }
            puVar2 = local_1e0;
            local_198 = &cf_name;
            local_160 = local_1e8;
            local_190 = &cf_path;
            local_158 = local_230;
            local_188 = &cf_isDir;
            puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                       local_249 & 1);
            _objc_retainAutoreleasedReturnValue();
            local_180 = &cf_size;
            puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_150 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,
                       PTR_s_numberWithUnsignedLongLong__0269d7f8,local_258);
            _objc_retainAutoreleasedReturnValue();
            local_178 = &cf_sizeKnown;
            puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_148 = puVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                       local_259 & 1);
            _objc_retainAutoreleasedReturnValue();
            local_170 = &cf_date;
            local_450 = local_270;
            bVar1 = local_270 == (undefined1 *)0x0;
            local_140 = puVar10;
            if (bVar1) {
              local_450 = PTR__OBJC_CLASS___NSDate_026cdf88;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_distantPast_026a8e18);
              _objc_retainAutoreleasedReturnValue();
              local_2f0 = local_450;
            }
            local_138 = local_450;
            local_168 = &cf_protected;
            puVar11 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                       local_40c & 1);
            _objc_retainAutoreleasedReturnValue();
            puVar12 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_130 = puVar11;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_160,&local_198,7);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar12);
            (*(code *)PTR__objc_release_02578630)(puVar11);
            if (bVar1) {
              (*(code *)PTR__objc_release_02578630)(local_2f0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar10);
            (*(code *)PTR__objc_release_02578630)(puVar9);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            _objc_storeStrong(&local_270);
            _objc_storeStrong(&local_248,0);
            local_240 = 0;
          }
          else {
            local_240 = 3;
          }
          _objc_storeStrong(&local_230,0);
        }
        local_350 = local_350 + 1;
      } while (local_350 < local_348);
      local_348 = local_330;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_330,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_a8,
                 0x10);
      local_350 = (undefined1 *)0x0;
    } while (local_348 != (undefined1 *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(local_330);
  (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_sortList__026ba448,local_1e0);
  (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_setEntries__026a2ba8,local_1e0);
  (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_applyFilter_026ae510);
  (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_updateTitleCount_026ba450);
  _objc_storeStrong(&local_1e0);
  _objc_storeStrong(&local_1c8,0);
  _objc_storeStrong(&local_1c0,0);
  _objc_storeStrong(&local_1b8,0);
  _objc_storeStrong(&local_1b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

