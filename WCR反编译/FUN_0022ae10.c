// FUN_0022ae10 @ 0022ae10

byte FUN_0022ae10(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined *local_240;
  undefined *local_238;
  undefined8 local_1d8;
  undefined1 local_1c9;
  long local_1c8;
  ulong local_1c0;
  long local_1b8;
  ulong local_1b0;
  undefined8 local_1a8;
  long local_1a0;
  long local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  undefined8 local_150;
  undefined *local_148;
  undefined8 local_140;
  long local_138;
  undefined *local_130;
  long local_128;
  long local_120 [3];
  long local_108;
  undefined4 local_fc;
  long local_f8;
  ulong local_f0;
  byte local_e1;
  undefined1 auStack_e0 [128];
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f0 = 0;
  _objc_storeStrong(&local_f0,param_1);
  local_f8 = 0;
  _objc_storeStrong(&local_f8,param_2);
  if (local_f0 == 0) {
    local_e1 = 0;
    local_fc = 1;
  }
  else {
    lVar7 = local_f8;
    FUN_0022a660();
    _objc_retainAutoreleasedReturnValue();
    local_108 = lVar7;
    FUN_0022e178();
    _objc_retainAutoreleasedReturnValue();
    local_120[0] = lVar7;
    (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
    if (lVar7 == 0) {
      local_e1 = 0;
      local_fc = 1;
    }
    else {
      FUN_0022e2c8();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      local_128 = lVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_138 = 0;
      local_140 = 0;
      local_130 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_128,1,0,&local_140);
      _objc_storeStrong(&local_138,local_140);
      if (local_138 == 0) {
        local_60 = &cf_png;
        local_58 = &cf_jpg;
        local_50 = &cf_jpeg;
        local_48 = &cf_gif;
        local_40 = &cf_webp;
        local_38 = &cf_heic;
        local_30 = &cf_bmp;
        puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_60,7);
        _objc_retainAutoreleasedReturnValue();
        local_148 = puVar1;
        _memset(auStack_190,0,0x40);
        puVar1 = local_148;
        (*(code *)PTR__objc_retain_02578638)();
        local_238 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_e0,
                   0x10);
        if (local_238 != (undefined *)0x0) {
          lVar7 = *local_180;
          local_240 = (undefined *)0x0;
          do {
            do {
              if (*local_180 - lVar7 != 0) {
                _objc_enumerationMutation(*local_180 - lVar7,puVar1);
              }
              lVar3 = local_128;
              local_150 = *(undefined8 *)(local_188 + (long)local_240 * 8);
              puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf______);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (lVar3,PTR_s_stringByAppendingPathComponent__026cab30);
              _objc_retainAutoreleasedReturnValue();
              local_198 = lVar3;
              (*(code *)PTR__objc_release_02578630)(puVar2);
              puVar2 = local_130;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_130,PTR_s_fileExistsAtPath__026ca630,local_198);
              if (((ulong)puVar2 & 1) != 0) {
                local_1a0 = 0;
                local_1a8 = 0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_130,PTR_s_removeItemAtPath_error__0269f910,local_198,&local_1a8);
                _objc_storeStrong(&local_1a0,local_1a8);
                _objc_storeStrong(&local_1a0,0);
              }
              _objc_storeStrong(&local_198,0);
              local_240 = local_240 + 1;
            } while (local_240 < local_238);
            local_238 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_e0
                       ,0x10);
            local_240 = (undefined *)0x0;
          } while (local_238 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar1);
        uVar4 = local_f0;
        FUN_0022dbf0();
        _objc_retainAutoreleasedReturnValue();
        lVar7 = local_128;
        local_1b0 = uVar4;
        if (uVar4 == 0) {
          local_e1 = 0;
          local_fc = 1;
        }
        else {
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____png
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (lVar7,PTR_s_stringByAppendingPathComponent__026cab30);
          _objc_retainAutoreleasedReturnValue();
          local_1b8 = lVar7;
          (*(code *)PTR__objc_release_02578630)(puVar1);
          uVar4 = local_1b0;
          _UIImagePNGRepresentation();
          _objc_retainAutoreleasedReturnValue();
          local_1c0 = uVar4;
          if (uVar4 == 0) {
            uVar5 = local_1b0;
            _UIImageJPEGRepresentation(0x3fee666666666666);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = local_1c0;
            local_1c0 = uVar5;
            (*(code *)PTR__objc_release_02578630)(uVar4);
          }
          if (local_1c0 == 0) {
            local_e1 = 0;
            local_fc = 1;
          }
          else {
            local_1c8 = 0;
            local_1d8 = 0;
            uVar4 = local_1c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1c0,PTR_s_writeToFile_options_error__026a0a68,local_1b8,1,&local_1d8);
            plVar6 = &local_1c8;
            _objc_storeStrong(plVar6,local_1d8);
            local_1c9 = (undefined1)uVar4;
            if (((uVar4 & 1) == 0) || (local_1c8 != 0)) {
              FUN_0022d4c4(local_108);
              local_e1 = 0;
            }
            else {
              FUN_0022d610();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(plVar6);
              local_e1 = 1;
            }
            local_fc = 1;
            _objc_storeStrong(&local_1c8,0);
          }
          _objc_storeStrong(&local_1c0);
          _objc_storeStrong(&local_1b8,0);
        }
        _objc_storeStrong(&local_1b0);
        _objc_storeStrong(&local_148,0);
      }
      else {
        local_e1 = 0;
        local_fc = 1;
      }
      _objc_storeStrong(&local_138);
      _objc_storeStrong(&local_130,0);
      _objc_storeStrong(&local_128,0);
    }
    _objc_storeStrong(local_120);
    _objc_storeStrong(&local_108,0);
  }
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_e1 & 1;
}

