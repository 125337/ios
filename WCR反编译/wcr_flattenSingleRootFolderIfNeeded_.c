// wcr_flattenSingleRootFolderIfNeeded: @ 015beedc

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineVoicePackStore::wcr_flattenSingleRootFolderIfNeeded_
          (WCRefineVoicePackStore *this,ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  long lVar7;
  ulong uVar8;
  double in_d0;
  undefined *local_2d8;
  undefined *local_2d0;
  undefined *local_2b8;
  undefined *local_260;
  undefined *local_258;
  undefined *local_230;
  ID local_220;
  ID local_218;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  ulong local_1d0;
  ID local_1c8;
  byte local_1b9;
  ID local_1b8;
  undefined1 *local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  ulong local_168;
  undefined1 *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined4 local_144;
  ID local_140;
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  local_138 = param_2;
  local_130 = param_1;
  _objc_storeStrong(&local_140,param_3);
  IVar1 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    local_144 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_150 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_140,0);
    _objc_retainAutoreleasedReturnValue();
    local_230 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_230 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_158 = local_230;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar2;
    _memset(auStack_1a8,0,0x40);
    puVar2 = local_158;
    (*(code *)PTR__objc_retain_02578638)();
    local_258 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10);
    if (local_258 != (undefined *)0x0) {
      lVar7 = *local_198;
      local_260 = (undefined *)0x0;
      do {
        do {
          if (*local_198 - lVar7 != 0) {
            _objc_enumerationMutation(*local_198 - lVar7,puVar2);
          }
          uVar8 = *(ulong *)(local_1a0 + (long)local_260 * 8);
          local_168 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_hasPrefix__0269d320,&::cf__);
          if ((uVar8 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_addObject__0269d180,local_168);
          }
          local_260 = local_260 + 1;
        } while (local_260 < local_258);
        local_258 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                   0x10);
        local_260 = (undefined *)0x0;
      } while (local_258 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = local_160;
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_count_0269cfe0);
    if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      puVar3 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_140;
      local_1b0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_140,PTR_s_stringByAppendingPathComponent__026cab30,puVar3);
      _objc_retainAutoreleasedReturnValue();
      local_1b9 = 0;
      puVar2 = local_150;
      local_1b8 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_150,PTR_s_fileExistsAtPath_isDirectory__026ca638,IVar1,&local_1b9);
      if ((((ulong)puVar2 & 1) == 0) || ((local_1b9 & 1) == 0)) {
        local_144 = 1;
      }
      else {
        IVar1 = local_140;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_140,PTR_s_stringByDeletingLastPathComponen_0269fb90);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithInteger__0269e080,(long)in_d0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_stringWithFormat__0269cca8,&cf__wcr_flatten___);
        _objc_retainAutoreleasedReturnValue();
        IVar6 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_stringByAppendingPathComponent__026cab30);
        _objc_retainAutoreleasedReturnValue();
        local_1c8 = IVar6;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(IVar1);
        puVar2 = local_150;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_150,PTR_s_moveItemAtPath_toPath_error__0269f940,local_1b8,local_1c8,0);
        if (((ulong)puVar2 & 1) == 0) {
          local_144 = 1;
        }
        else {
          _memset(auStack_210,0,0x40);
          puVar2 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_150,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_1c8,0);
          _objc_retainAutoreleasedReturnValue();
          local_2b8 = puVar2;
          if (puVar2 == (undefined *)0x0) {
            local_2b8 = *(undefined **)PTR____NSArray0___02578280;
          }
          (*(code *)PTR__objc_retain_02578638)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_2d0 = local_2b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_2b8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,
                     auStack_128,0x10);
          if (local_2d0 != (undefined *)0x0) {
            lVar7 = *local_200;
            local_2d8 = (undefined *)0x0;
            do {
              do {
                if (*local_200 - lVar7 != 0) {
                  _objc_enumerationMutation(*local_200 - lVar7,local_2b8);
                }
                uVar8 = *(ulong *)(local_208 + (long)local_2d8 * 8);
                local_1d0 = uVar8;
                (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_hasPrefix__0269d320,&::cf__);
                if ((uVar8 & 1) == 0) {
                  IVar1 = local_1c8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1c8,PTR_s_stringByAppendingPathComponent__026cab30,local_1d0);
                  _objc_retainAutoreleasedReturnValue();
                  IVar6 = local_140;
                  local_218 = IVar1;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_140,PTR_s_stringByAppendingPathComponent__026cab30,local_1d0);
                  _objc_retainAutoreleasedReturnValue();
                  puVar2 = local_150;
                  local_220 = IVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_150,PTR_s_fileExistsAtPath__026ca630,IVar6);
                  if (((ulong)puVar2 & 1) != 0) {
                    IVar6 = local_130;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_130,PTR_s_uniquePathInDirectory_preferredN_026b0d30,local_140,
                               local_1d0);
                    _objc_retainAutoreleasedReturnValue();
                    IVar1 = local_220;
                    local_220 = IVar6;
                    (*(code *)PTR__objc_release_02578630)(IVar1);
                  }
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_150,PTR_s_moveItemAtPath_toPath_error__0269f940,local_218,
                             local_220);
                  _objc_storeStrong(&local_220,0);
                  _objc_storeStrong(&local_218,0);
                }
                local_2d8 = local_2d8 + 1;
              } while (local_2d8 < local_2d0);
              local_2d0 = local_2b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_2b8,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,
                         auStack_128,0x10);
              local_2d8 = (undefined *)0x0;
            } while (local_2d0 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(local_2b8);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_150,PTR_s_removeItemAtPath_error__0269f910,local_1c8,0);
          local_144 = 0;
        }
        _objc_storeStrong(&local_1c8,0);
      }
      _objc_storeStrong(&local_1b8);
      _objc_storeStrong(&local_1b0,0);
    }
    else {
      local_144 = 1;
    }
    _objc_storeStrong(&local_160);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_150,0);
  }
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

