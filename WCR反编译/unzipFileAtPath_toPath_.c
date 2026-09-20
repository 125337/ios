// unzipFileAtPath:toPath: @ 01fb05a0

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

bool WCRefineWatermarkLibraryViewController::unzipFileAtPath_toPath_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *local_2b0;
  undefined *local_2a8;
  undefined8 local_210;
  undefined8 local_208;
  undefined *local_200;
  undefined *local_1f8;
  undefined *local_1f0;
  ushort local_1e8;
  ushort local_1e6;
  undefined4 local_1e4;
  uint local_1e0;
  short local_1da;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  ulong local_188;
  long local_180;
  undefined *local_178;
  undefined4 local_170;
  ushort local_16a;
  ushort local_168;
  ushort local_166;
  undefined4 local_164;
  undefined4 local_160;
  undefined2 local_15a;
  ulong local_158;
  uint local_14c;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined4 local_11c;
  undefined *local_118;
  undefined8 local_110;
  undefined8 local_108;
  SEL local_100;
  undefined *local_f8;
  byte local_e9;
  undefined1 auStack_e8 [128];
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_108 = 0;
  local_100 = param_2;
  local_f8 = (undefined *)param_1;
  _objc_storeStrong(&local_108,param_3);
  local_110 = 0;
  _objc_storeStrong(&local_110,param_4);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_108);
  _objc_retainAutoreleasedReturnValue();
  local_118 = puVar1;
  if ((puVar1 == (undefined *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0), puVar2 = local_118,
     puVar1 == (undefined *)0x0)) {
    local_e9 = 0;
    local_11c = 1;
  }
  else {
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_bytes_026a9630);
    puVar1 = local_118;
    local_128 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_130 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_140 = (undefined *)0x0;
    for (local_148 = local_130 + -0x16; -1 < (long)local_148; local_148 = local_148 + -1) {
      if (*(int *)(local_128 + (long)local_148) == 0x6054b50) {
        local_140 = local_148;
        break;
      }
    }
    local_138 = puVar2;
    if (local_140 != (undefined *)0x0) {
      local_14c = *(uint *)(local_128 + (long)local_140 + 0x10);
      local_158 = (ulong)local_14c;
      while (((undefined *)(local_158 + 0x2e) <= local_130 &&
             (*(int *)(local_128 + local_158) == 0x2014b50))) {
        local_15a = *(undefined2 *)(local_128 + local_158 + 10);
        local_160 = *(undefined4 *)(local_128 + local_158 + 0x14);
        local_164 = *(undefined4 *)(local_128 + local_158 + 0x18);
        local_166 = *(ushort *)(local_128 + local_158 + 0x1c);
        local_168 = *(ushort *)(local_128 + local_158 + 0x1e);
        local_16a = *(ushort *)(local_128 + local_158 + 0x20);
        local_170 = *(undefined4 *)(local_128 + local_158 + 0x2a);
        puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_178 = puVar1;
        if (puVar1 != (undefined *)0x0) {
          local_68 = &cf_compressionMethod;
          puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedShort__026a9e08,
                     local_15a);
          _objc_retainAutoreleasedReturnValue();
          local_60 = &cf_compressedSize;
          puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_48 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                     local_160);
          _objc_retainAutoreleasedReturnValue();
          local_58 = &cf_uncompressedSize;
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_40 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                     local_164);
          _objc_retainAutoreleasedReturnValue();
          local_50 = &cf_localHeaderOffset;
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_38 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                     local_170);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_30 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_68,4);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,local_178);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_release_02578630)(puVar1);
        }
        local_158 = local_158 + (long)(int)(local_166 + 0x2e + (uint)local_168 + (uint)local_16a);
        _objc_storeStrong(&local_178,0);
      }
    }
    local_180 = 0;
    _memset(auStack_1c8,0,0x40);
    puVar1 = local_138;
    (*(code *)PTR__objc_retain_02578638)();
    local_2a8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_e8,0x10);
    if (local_2a8 != (undefined *)0x0) {
      lVar8 = *local_1b8;
      local_2b0 = (undefined *)0x0;
      do {
        do {
          puVar2 = local_2a8;
          if (*local_1b8 - lVar8 != 0) {
            puVar2 = puVar1;
            _objc_enumerationMutation(*local_1b8 - lVar8);
          }
          local_188 = *(ulong *)(local_1c0 + (long)local_2b0 * 8);
          _objc_autoreleasePoolPush();
          puVar3 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_138,PTR_s_objectForKeyedSubscript__0269d098,local_188);
          _objc_retainAutoreleasedReturnValue();
          local_1d0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_localHeaderOffset);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = local_1d0;
          local_1d8 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_compressionMethod);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_1da = (short)puVar4;
          puVar3 = local_1d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_compressedSize);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_1e0 = (uint)puVar4;
          puVar3 = local_1d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_uncompressedSize);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_1e4 = SUB84(puVar4,0);
          uVar6 = local_188;
          (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_hasSuffix__0269d018,&cf__);
          if ((uVar6 & 1) == 0) {
            uVar6 = local_188;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_188,PTR_s_containsString__0269d0b0,&cf___MACOSX);
            if ((uVar6 & 1) == 0) {
              if (local_130 < local_1d8 + 0x1e) {
                local_11c = 8;
              }
              else {
                local_1e6 = *(ushort *)(local_128 + (long)local_1d8 + 0x1a);
                local_1e8 = *(ushort *)(local_128 + (long)local_1d8 + 0x1c);
                local_1f0 = local_1d8 + (ulong)local_1e8 + (ulong)local_1e6 + 0x1e;
                if (local_130 < local_1f0 + local_1e0) {
                  local_11c = 8;
                }
                else {
                  local_1f8 = (undefined *)0x0;
                  if (local_1da == 0) {
                    puVar4 = PTR__OBJC_CLASS___NSData_026ce1d0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSData_026ce1d0,
                               PTR_s_dataWithBytes_length__026a1aa8,local_128 + (long)local_1f0,
                               local_1e0);
                    _objc_retainAutoreleasedReturnValue();
                    puVar3 = local_1f8;
                    local_1f8 = puVar4;
                    (*(code *)PTR__objc_release_02578630)(puVar3);
                  }
                  else if (local_1da == 8) {
                    puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSData_026ce1d0,
                               PTR_s_dataWithBytes_length__026a1aa8,local_128 + (long)local_1f0,
                               local_1e0);
                    _objc_retainAutoreleasedReturnValue();
                    puVar4 = local_f8;
                    local_200 = puVar3;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_f8,PTR_s_decompressData_expectedSize__026b6568,puVar3,local_1e4
                              );
                    _objc_retainAutoreleasedReturnValue();
                    puVar3 = local_1f8;
                    local_1f8 = puVar4;
                    (*(code *)PTR__objc_release_02578630)(puVar3);
                    _objc_storeStrong(&local_200,0);
                  }
                  if (local_1f8 != (undefined *)0x0) {
                    uVar7 = local_110;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_110,PTR_s_stringByAppendingPathComponent__026cab30,local_188);
                    _objc_retainAutoreleasedReturnValue();
                    local_208 = uVar7;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (uVar7,PTR_s_stringByDeletingLastPathComponen_0269fb90);
                    _objc_retainAutoreleasedReturnValue();
                    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
                    local_210 = uVar7;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSFileManager_026ce158,
                               PTR_s_defaultManager_026ca5f0);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)();
                    (*(code *)PTR__objc_release_02578630)(puVar3);
                    puVar3 = local_1f8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1f8,PTR_s_writeToFile_atomically__0269f928,local_208,1);
                    if (((ulong)puVar3 & 1) != 0) {
                      local_180 = local_180 + 1;
                    }
                    _objc_storeStrong(&local_210);
                    _objc_storeStrong(&local_208,0);
                  }
                  _objc_storeStrong(&local_1f8,0);
                  local_11c = 0;
                }
              }
            }
            else {
              local_11c = 8;
            }
          }
          else {
            local_11c = 8;
          }
          _objc_storeStrong(&local_1d0,0);
          _objc_autoreleasePoolPop(puVar2);
          local_2b0 = local_2b0 + 1;
        } while (local_2b0 < local_2a8);
        local_2a8 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_e8,
                   0x10);
        local_2b0 = (undefined *)0x0;
      } while (local_2a8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_e9 = 0 < local_180;
    local_11c = 1;
    _objc_storeStrong(&local_138,0);
  }
  _objc_storeStrong(&local_118);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_108,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_e9 & 1;
}

