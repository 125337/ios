// FUN_000586e8 @ 000586e8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_000586e8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  uint local_378;
  undefined *local_350;
  undefined *local_348;
  uint local_310;
  undefined *local_2e8;
  undefined *local_2e0;
  undefined1 auStack_270 [8];
  long local_268;
  long *local_260;
  undefined8 local_230;
  int local_228;
  byte local_221;
  ulong local_220;
  undefined8 local_218;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  undefined8 local_1d0;
  undefined *local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  ulong local_1a0;
  byte local_191;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  undefined1 auStack_178 [128];
  undefined1 auStack_f8 [128];
  cfstringStruct *local_78;
  cfstringStruct *local_70;
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
  local_1a0 = 0;
  _objc_storeStrong(&local_1a0,param_1);
  local_1a8 = 0;
  _objc_storeStrong(&local_1a8,param_2);
  local_1b8 = (undefined *)0x0;
  local_1b0 = param_3;
  if ((param_3 & 1) == 0) {
    if (((uint)param_3 >> 1 & 1) == 0) {
      if (((uint)param_3 >> 2 & 1) != 0) {
        local_78 = &cf_GetFilePath;
        local_70 = &cf_GetDataPath;
        local_68 = &cf_GetTempFilePath;
        puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_78,3);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_1b8;
        local_1b8 = puVar1;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
    }
    else {
      local_60 = &cf_getFormatVideoPath;
      local_58 = &cf_GetDataPath;
      local_50 = &cf_GetTempFilePath;
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_1b8;
      local_1b8 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
  }
  else {
    local_48 = &cf_GetImageSourcePath;
    local_40 = &cf_GetImagePath;
    local_38 = &cf_GetDataPath;
    local_30 = &cf_GetThumbPath;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4
              );
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_1b8;
    local_1b8 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _memset(auStack_210,0,0x40);
  puVar3 = local_1b8;
  (*(code *)PTR__objc_retain_02578638)();
  local_2e0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_f8,0x10);
  if (local_2e0 != (undefined *)0x0) {
    lVar5 = *local_200;
    local_2e8 = (undefined *)0x0;
    do {
      do {
        if (*local_200 - lVar5 != 0) {
          _objc_enumerationMutation(*local_200 - lVar5,puVar3);
        }
        uVar6 = *(undefined8 *)(local_208 + (long)local_2e8 * 8);
        local_1d0 = uVar6;
        _NSSelectorFromString();
        local_221 = 0;
        uVar2 = local_1a0;
        local_218 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_respondsToSelector__026ca818,uVar6);
        local_310 = 0;
        if ((uVar2 & 1) != 0) {
          uVar2 = local_1a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a0,local_218);
          _objc_retainAutoreleasedReturnValue();
          local_221 = 1;
          local_220 = uVar2;
          FUN_00059974();
          local_310 = (uint)uVar2;
        }
        if ((local_221 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_220);
        }
        if ((local_310 & 1) != 0) {
          local_191 = 1;
          local_228 = 1;
          goto LAB_00058bc8;
        }
        local_2e8 = local_2e8 + 1;
      } while (local_2e8 < local_2e0);
      local_2e0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_f8,0x10)
      ;
      local_2e8 = (undefined *)0x0;
    } while (local_2e0 != (undefined *)0x0);
  }
  local_228 = 0;
LAB_00058bc8:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (local_228 == 0) {
    _memset(auStack_270,0,0x40);
    local_190 = &cf_GetDataPath;
    local_188 = &cf_GetDataPathForFav;
    local_180 = &cf_dataPathForDisplay;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_190,
               3);
    _objc_retainAutoreleasedReturnValue();
    local_348 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_348 != (undefined *)0x0) {
      lVar5 = *local_260;
      local_350 = (undefined *)0x0;
      do {
        do {
          if (*local_260 - lVar5 != 0) {
            _objc_enumerationMutation(*local_260 - lVar5,puVar3);
          }
          uVar6 = *(undefined8 *)(local_268 + (long)local_350 * 8);
          local_230 = uVar6;
          _NSSelectorFromString();
          uVar2 = local_1a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_respondsToSelector__026ca818,uVar6);
          local_378 = 0;
          if ((uVar2 & 1) != 0) {
            uVar2 = local_1a8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1a8,uVar6);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar2;
            FUN_00059974();
            local_378 = (uint)uVar4;
            (*(code *)PTR__objc_release_02578630)(uVar2);
          }
          if ((local_378 & 1) != 0) {
            local_191 = 1;
            local_228 = 1;
            goto LAB_00058ed4;
          }
          local_350 = local_350 + 1;
        } while (local_350 < local_348);
        local_348 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_270,auStack_178,
                   0x10);
        local_350 = (undefined *)0x0;
      } while (local_348 != (undefined *)0x0);
    }
    local_228 = 0;
LAB_00058ed4:
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_228 == 0) {
      local_191 = 0;
      local_228 = 1;
    }
  }
  _objc_storeStrong(&local_1b8);
  _objc_storeStrong(&local_1a8,0);
  _objc_storeStrong(&local_1a0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_191 & 1;
}

