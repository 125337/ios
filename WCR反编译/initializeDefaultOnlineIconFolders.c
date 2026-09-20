// initializeDefaultOnlineIconFolders @ 01c61540

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineNavigationAvatarViewController::initializeDefaultOnlineIconFolders
               (ID param_1,SEL param_2)

{
  byte bVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *local_320;
  undefined *local_318;
  undefined *local_2d8;
  undefined *local_2d0;
  undefined *local_2a0;
  ID local_298;
  undefined *local_290;
  undefined *local_288;
  ID local_280;
  int local_274;
  ID local_270;
  undefined1 auStack_268 [8];
  long local_260;
  long *local_258;
  undefined8 local_228;
  byte local_219;
  undefined *local_218;
  byte local_20a;
  byte local_209;
  ID local_208;
  undefined1 auStack_200 [8];
  long local_1f8;
  long *local_1f0;
  undefined8 local_1c0;
  ID local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  ID local_1a0;
  SEL local_198;
  ID local_190;
  undefined1 auStack_188 [128];
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  undefined1 auStack_e8 [128];
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_198 = param_2;
  local_190 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_getTQQOnlineIconBasePath_026c1e18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_1a0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_1a8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_fileExistsAtPath__026ca630,local_1a0);
  if (((ulong)puVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1a8,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_1a0,1,0);
  }
  local_68 = &cf__W_;
  local_60 = &cf_y_;
  local_58 = &::cf_Q;
  local_50 = &::cf__;
  local_48 = &cf_y;
  local_40 = &cf__x;
  local_38 = &cf_RSbpb;
  local_30 = &cf_bv5u;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_190;
  local_1b0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_getDefaultOnlineIconBase64Images_026c24f8);
  _objc_retainAutoreleasedReturnValue();
  local_1b8 = IVar3;
  _memset(auStack_200,0,0x40);
  puVar2 = local_1b0;
  (*(code *)PTR__objc_retain_02578638)();
  local_2d0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_e8,0x10);
  if (local_2d0 != (undefined *)0x0) {
    lVar6 = *local_1f0;
    local_2d8 = (undefined *)0x0;
    do {
      do {
        if (*local_1f0 - lVar6 != 0) {
          _objc_enumerationMutation(*local_1f0 - lVar6,puVar2);
        }
        local_1c0 = *(undefined8 *)(local_1f8 + (long)local_2d8 * 8);
        IVar3 = local_1a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1a0,PTR_s_stringByAppendingPathComponent__026cab30,local_1c0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_1a8;
        local_208 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1a8,PTR_s_fileExistsAtPath_isDirectory__026ca638,IVar3,&local_209);
        bVar1 = 0;
        if (((ulong)puVar4 & 1) != 0) {
          bVar1 = local_209;
        }
        local_20a = bVar1 & 1;
        if ((bVar1 & 1) == 0) {
LAB_01c61b08:
          if ((local_20a & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1a8,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_208,1,0);
          }
          IVar3 = local_1b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1b8,PTR_s_objectForKeyedSubscript__0269d098,local_1c0);
          _objc_retainAutoreleasedReturnValue();
          local_280 = IVar3;
          if ((IVar3 != 0) &&
             ((*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_length_0269cca0), IVar3 != 0)) {
            puVar4 = PTR__OBJC_CLASS___NSData_026ce1d0;
            _objc_alloc();
            (*(code *)PTR__objc_msgSend_02578628)();
            local_288 = puVar4;
            if ((puVar4 != (undefined *)0x0) &&
               ((*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0),
               puVar4 != (undefined *)0x0)) {
              puVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_288)
              ;
              _objc_retainAutoreleasedReturnValue();
              IVar3 = local_208;
              local_290 = puVar4;
              if (puVar4 != (undefined *)0x0) {
                puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf____png);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (IVar3,PTR_s_stringByAppendingPathComponent__026cab30);
                _objc_retainAutoreleasedReturnValue();
                local_298 = IVar3;
                (*(code *)PTR__objc_release_02578630)(puVar4);
                puVar4 = local_290;
                _UIImagePNGRepresentation();
                _objc_retainAutoreleasedReturnValue();
                local_2a0 = puVar4;
                if (((puVar4 != (undefined *)0x0) &&
                    ((*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0),
                    puVar4 != (undefined *)0x0)) &&
                   (puVar4 = local_2a0,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_2a0,PTR_s_writeToFile_atomically__0269f928,local_298,1),
                   ((ulong)puVar4 & 1) == 0)) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_2a0,PTR_s_writeToFile_atomically__0269f928,local_298,0);
                }
                _objc_storeStrong(&local_2a0);
                _objc_storeStrong(&local_298,0);
              }
              _objc_storeStrong(&local_290,0);
            }
            _objc_storeStrong(&local_288,0);
          }
          _objc_storeStrong(&local_280,0);
          local_274 = 0;
        }
        else {
          local_108 = &cf_png;
          local_100 = &cf_jpg;
          local_f8 = &cf_jpeg;
          local_f0 = &cf_gif;
          puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_108,4);
          _objc_retainAutoreleasedReturnValue();
          local_219 = 0;
          local_218 = puVar4;
          _memset(auStack_268,0,0x40);
          puVar4 = local_218;
          (*(code *)PTR__objc_retain_02578638)();
          local_318 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_188,
                     0x10);
          if (local_318 != (undefined *)0x0) {
            lVar7 = *local_258;
            local_320 = (undefined *)0x0;
            do {
              do {
                if (*local_258 - lVar7 != 0) {
                  _objc_enumerationMutation(*local_258 - lVar7,puVar4);
                }
                IVar3 = local_208;
                local_228 = *(undefined8 *)(local_260 + (long)local_320 * 8);
                puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf______);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (IVar3,PTR_s_stringByAppendingPathComponent__026cab30);
                _objc_retainAutoreleasedReturnValue();
                local_270 = IVar3;
                (*(code *)PTR__objc_release_02578630)(puVar5);
                puVar5 = local_1a8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1a8,PTR_s_fileExistsAtPath__026ca630,local_270);
                if (((ulong)puVar5 & 1) == 0) {
                  local_274 = 0;
                }
                else {
                  local_219 = 1;
                  local_274 = 4;
                }
                _objc_storeStrong(&local_270,0);
                if (local_274 != 0) goto LAB_01c61aa8;
                local_320 = local_320 + 1;
              } while (local_320 < local_318);
              local_318 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,
                         auStack_188,0x10);
              local_320 = (undefined *)0x0;
            } while (local_318 != (undefined *)0x0);
          }
          local_274 = 0;
LAB_01c61aa8:
          (*(code *)PTR__objc_release_02578630)(puVar4);
          if ((local_219 & 1) == 0) {
            local_274 = 0;
          }
          else {
            local_274 = 3;
          }
          _objc_storeStrong(&local_218,0);
          if (local_274 == 0) goto LAB_01c61b08;
        }
        _objc_storeStrong(&local_208,0);
        local_2d8 = local_2d8 + 1;
      } while (local_2d8 < local_2d0);
      local_2d0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_e8,0x10)
      ;
      local_2d8 = (undefined *)0x0;
    } while (local_2d0 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_1b8);
  _objc_storeStrong(&local_1b0,0);
  _objc_storeStrong(&local_1a8,0);
  _objc_storeStrong(&local_1a0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

