// FUN_0058c084 @ 0058c084

/* WARNING: Type propagation algorithm not settling */

long FUN_0058c084(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *local_320;
  ulong local_258;
  ulong local_250;
  ulong local_1f0;
  ulong local_1a0;
  ulong local_198;
  byte local_189;
  cfstringStruct *local_188;
  cfstringStruct *local_180 [2];
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  cfstringStruct *local_118;
  long local_110;
  long local_108;
  undefined8 local_100;
  undefined8 local_f8;
  ulong local_f0;
  undefined4 local_e8;
  byte local_e1;
  ulong local_e0;
  ulong local_c8 [4];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8[2] = 0;
  _objc_storeStrong(local_c8 + 2,param_1);
  local_c8[1] = 0;
  _objc_storeStrong(local_c8 + 1,param_2);
  local_e1 = 0;
  uVar1 = local_c8[2];
  (*(code *)PTR__objc_msgSend_02578628)(local_c8[2],PTR_s_imageArray_026a54a8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  uVar3 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_1f0 = 0;
  }
  else {
    local_1f0 = local_c8[2];
    (*(code *)PTR__objc_msgSend_02578628)(local_c8[2],PTR_s_imageArray_026a54a8);
    _objc_retainAutoreleasedReturnValue();
    local_e1 = 1;
    local_e0 = local_1f0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c8[0] = local_1f0;
  if ((local_e1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_c8[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_c8[0],PTR_s_count_0269cfe0);
  if (uVar1 == 0) {
    local_c8[3] = 0;
    local_e8 = 1;
  }
  else {
    FUN_00589dc8();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_f0 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_f8 = 0;
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_100 = local_f8;
    puVar4 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_storeStrong(&local_f8,local_100);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar4 & 1) == 0) {
      local_c8[3] = 0;
    }
    else {
      local_108 = 0;
      local_110 = 0;
      _memset(auStack_158,0,0x40);
      uVar1 = local_c8[0];
      (*(code *)PTR__objc_retain_02578638)();
      local_250 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10);
      if (local_250 != 0) {
        lVar6 = *local_148;
        local_258 = 0;
        do {
          do {
            if (*local_148 - lVar6 != 0) {
              _objc_enumerationMutation(*local_148 - lVar6,uVar1);
            }
            pcVar7 = *(cfstringStruct **)(local_150 + local_258 * 8);
            local_118 = pcVar7;
            FUN_0058e49c(pcVar7,&cf_dataPath);
            _objc_retainAutoreleasedReturnValue();
            local_160 = pcVar7;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_length_0269cca0);
            if (pcVar7 == (cfstringStruct *)0x0) {
              pcVar5 = local_118;
              FUN_0058e49c(local_118,&cf_draftPath);
              _objc_retainAutoreleasedReturnValue();
              pcVar7 = local_160;
              local_160 = pcVar5;
              (*(code *)PTR__objc_release_02578630)(pcVar7);
            }
            local_168 = (cfstringStruct *)0x0;
            pcVar7 = local_160;
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0);
            if (pcVar7 != (cfstringStruct *)0x0) {
              pcVar5 = (cfstringStruct *)PTR__OBJC_CLASS___NSData_026ce1d0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,
                         local_160);
              _objc_retainAutoreleasedReturnValue();
              pcVar7 = local_168;
              local_168 = pcVar5;
              (*(code *)PTR__objc_release_02578630)(pcVar7);
            }
            pcVar7 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
            if (pcVar7 == (cfstringStruct *)0x0) {
              pcVar7 = local_118;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_118,PTR_s_valueForKey__0269d128,&cf_m_imageData);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
              local_170 = pcVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
              if (((ulong)pcVar7 & 1) != 0) {
                _objc_storeStrong(&local_168,local_170);
              }
              _objc_storeStrong(&local_170,0);
            }
            pcVar5 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
            pcVar7 = local_118;
            if (pcVar5 == (cfstringStruct *)0x0) {
              puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
              if (((ulong)pcVar7 & 1) != 0) {
                pcVar5 = local_118;
                _UIImageJPEGRepresentation(DAT_02323e70);
                _objc_retainAutoreleasedReturnValue();
                pcVar7 = local_168;
                local_168 = pcVar5;
                (*(code *)PTR__objc_release_02578630)(pcVar7);
              }
            }
            pcVar7 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_length_0269cca0);
            if (pcVar7 == (cfstringStruct *)0x0) {
              local_110 = local_110 + 1;
              local_e8 = 3;
            }
            else {
              local_189 = 0;
              pcVar7 = local_160;
              (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_pathExtension_0269e090);
              _objc_retainAutoreleasedReturnValue();
              pcVar5 = pcVar7;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (pcVar5 == (cfstringStruct *)0x0) {
                local_320 = &cf_jpg;
              }
              else {
                local_320 = local_160;
                (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_pathExtension_0269e090);
                _objc_retainAutoreleasedReturnValue();
                local_189 = 1;
                local_188 = local_320;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_180[0] = local_320;
              if ((local_189 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_188);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar7);
              uVar3 = local_f0;
              puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                         &cf_image__lu___);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar3,PTR_s_stringByAppendingPathComponent__026cab30);
              _objc_retainAutoreleasedReturnValue();
              local_198 = uVar3;
              (*(code *)PTR__objc_release_02578630)(puVar2);
              puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar2);
              uVar3 = local_198;
              FUN_0058e8a8();
              _objc_retainAutoreleasedReturnValue();
              local_1a0 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
              if ((uVar3 != 0) &&
                 (pcVar7 = local_168,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_168,PTR_s_writeToFile_atomically__0269f928,local_198,1),
                 ((ulong)pcVar7 & 1) != 0)) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_118,PTR_s_setValue_forKey__0269d300,local_1a0,&cf_dataPath);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_118,PTR_s_setValue_forKey__0269d300,local_1a0,&cf_draftPath);
                local_108 = local_108 + 1;
              }
              local_110 = local_110 + 1;
              _objc_storeStrong(&local_1a0);
              _objc_storeStrong(&local_198,0);
              _objc_storeStrong(local_180,0);
              local_e8 = 0;
            }
            _objc_storeStrong(&local_168);
            _objc_storeStrong(&local_160,0);
            local_258 = local_258 + 1;
          } while (local_258 < local_250);
          local_250 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                     0x10);
          local_258 = 0;
        } while (local_250 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      local_c8[3] = local_108;
    }
    local_e8 = 1;
    _objc_storeStrong(&local_f8);
    _objc_storeStrong(&local_f0,0);
  }
  _objc_storeStrong(local_c8);
  _objc_storeStrong(local_c8 + 1,0);
  _objc_storeStrong(local_c8 + 2,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_c8[3];
}

