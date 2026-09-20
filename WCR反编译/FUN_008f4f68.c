// FUN_008f4f68 @ 008f4f68

byte FUN_008f4f68(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                 undefined8 *param_5)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  cfstringStruct *local_478;
  undefined *local_338;
  undefined *local_330;
  ulong local_2f8;
  ulong local_2f0;
  cfstringStruct *local_298;
  byte local_289;
  cfstringStruct *local_288;
  undefined8 local_280;
  byte local_271;
  undefined *local_270;
  undefined *local_268;
  cfstringStruct *local_260;
  undefined8 local_258;
  cfstringStruct *local_250;
  undefined8 local_248;
  int local_23c;
  cfstringStruct *local_238;
  undefined *local_230;
  undefined *local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  undefined8 local_1e0;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  ulong local_198;
  long local_190;
  undefined *local_188 [3];
  ulong local_170;
  undefined8 *local_168;
  ulong *local_160;
  cfstringStruct *local_158;
  undefined8 local_150;
  ulong local_148;
  byte local_139;
  undefined1 auStack_138 [128];
  undefined1 auStack_b8 [128];
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  _objc_storeStrong(&local_148,param_1);
  local_150 = 0;
  _objc_storeStrong(&local_150,param_2);
  local_158 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_158,param_3);
  uVar2 = local_148;
  local_168 = param_5;
  local_160 = param_4;
  FUN_008f6784();
  _objc_retainAutoreleasedReturnValue();
  local_38 = &cf___AMR;
  local_30 = &cf___AMR_WB;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_170 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  local_190 = 0;
  local_188[0] = puVar3;
  _memset(auStack_1d8,0,0x40);
  uVar2 = local_170;
  (*(code *)PTR__objc_retain_02578638)();
  local_2f0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_b8,0x10);
  if (local_2f0 != 0) {
    lVar10 = *local_1c8;
    local_2f8 = 0;
    do {
      do {
        if (*local_1c8 - lVar10 != 0) {
          _objc_enumerationMutation(*local_1c8 - lVar10,uVar2);
        }
        local_198 = *(ulong *)(local_1d0 + local_2f8 * 8);
        _memset(auStack_220,0,0x40);
        puVar3 = local_188[0];
        (*(code *)PTR__objc_retain_02578638)();
        local_330 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_138,
                   0x10);
        if (local_330 != (undefined *)0x0) {
          lVar11 = *local_210;
          local_338 = (undefined *)0x0;
          do {
            do {
              if (*local_210 - lVar11 != 0) {
                _objc_enumerationMutation(*local_210 - lVar11,puVar3);
              }
              local_1e0 = *(undefined8 *)(local_218 + (long)local_338 * 8);
              puVar4 = PTR__OBJC_CLASS___NSMutableData_026ce660;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableData_026ce660,PTR_s_data_0269d850);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = local_198;
              local_228 = puVar4;
              FUN_008f71d0(local_198,&cf___AMR);
              puVar4 = local_228;
              if ((uVar5 & 1) == 0) {
                uVar6 = local_1e0;
                (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_dataUsingEncoding__026a12e8,1)
                ;
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_appendData__026a9df8);
                (*(code *)PTR__objc_release_02578630)(uVar6);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_228,PTR_s_appendData__026a9df8,local_198);
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_228,PTR_s_appendData__026a9df8,local_198);
              }
              puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_190 = local_190 + 1;
              (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_containsString__0269d0b0,&cf_WB)
              ;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_stringWithFormat__0269cca8,&cf____amr_lu___);
              _objc_retainAutoreleasedReturnValue();
              pcVar7 = local_158;
              local_230 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_158,PTR_s_stringByAppendingPathComponent__026cab30,puVar4);
              _objc_retainAutoreleasedReturnValue();
              puVar4 = local_228;
              local_238 = pcVar7;
              FUN_008f798c(local_228,pcVar7);
              if (((ulong)puVar4 & 1) == 0) {
                local_23c = 5;
              }
              else {
                uVar6 = local_150;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_150,PTR_s_stringByAppendingPathExtension__026a4580,&cf_mp3);
                _objc_retainAutoreleasedReturnValue();
                pcVar7 = local_158;
                local_248 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_158,PTR_s_stringByAppendingPathComponent__026cab30,uVar6);
                _objc_retainAutoreleasedReturnValue();
                pcVar8 = local_238;
                local_250 = pcVar7;
                FUN_008f5fc8(local_238,pcVar7,*(undefined8 *)PTR__AVFileTypeMPEGLayer3_02578530,
                             *(undefined8 *)PTR__AVAssetExportPresetPassthrough_025784b0);
                pcVar7 = local_250;
                if (((ulong)pcVar8 & 1) == 0) {
                  uVar6 = local_150;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_150,PTR_s_stringByAppendingPathExtension__026a4580,&cf_m4a);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar7 = local_158;
                  local_258 = uVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_158,PTR_s_stringByAppendingPathComponent__026cab30,uVar6);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar8 = local_238;
                  local_260 = pcVar7;
                  FUN_008f5fc8(local_238,pcVar7,*(undefined8 *)PTR__AVFileTypeAppleM4A_02578520,
                               *(undefined8 *)PTR__AVAssetExportPresetAppleM4A_02578498);
                  pcVar7 = local_260;
                  puVar4 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
                  if (((ulong)pcVar8 & 1) == 0) {
                    puVar9 = PTR__OBJC_CLASS___NSURL_026ce328;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,
                               local_238);
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar4,PTR_s_URLAssetWithURL_options__026a1748,puVar9,0);
                    _objc_retainAutoreleasedReturnValue();
                    local_268 = puVar4;
                    (*(code *)PTR__objc_release_02578630)(puVar9);
                    local_271 = 0;
                    pcVar7 = local_238;
                    FUN_008f8130();
                    bVar1 = false;
                    if (pcVar7 != (cfstringStruct *)0x0) {
                      puVar4 = local_268;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_268,PTR_s_tracksWithMediaType__0269f568,
                                 *(undefined8 *)PTR__AVMediaTypeAudio_02578580);
                      _objc_retainAutoreleasedReturnValue();
                      local_271 = 1;
                      local_270 = puVar4;
                      (*(code *)PTR__objc_msgSend_02578628)();
                      bVar1 = puVar4 != (undefined *)0x0;
                    }
                    if ((local_271 & 1) != 0) {
                      (*(code *)PTR__objc_release_02578630)(local_270);
                    }
                    uVar6 = local_150;
                    if (bVar1) {
                      local_289 = 0;
                      pcVar7 = local_238;
                      (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_pathExtension_0269e090);
                      _objc_retainAutoreleasedReturnValue();
                      pcVar8 = pcVar7;
                      (*(code *)PTR__objc_msgSend_02578628)();
                      if (pcVar8 == (cfstringStruct *)0x0) {
                        local_478 = &cf_amr;
                      }
                      else {
                        local_478 = local_238;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_238,PTR_s_pathExtension_0269e090);
                        _objc_retainAutoreleasedReturnValue();
                        local_289 = 1;
                        local_288 = local_478;
                      }
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar6,PTR_s_stringByAppendingPathExtension__026a4580,local_478);
                      _objc_retainAutoreleasedReturnValue();
                      local_280 = uVar6;
                      if ((local_289 & 1) != 0) {
                        (*(code *)PTR__objc_release_02578630)(local_288);
                      }
                      (*(code *)PTR__objc_release_02578630)(pcVar7);
                      pcVar7 = local_158;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_158,PTR_s_stringByAppendingPathComponent__026cab30,local_280)
                      ;
                      _objc_retainAutoreleasedReturnValue();
                      puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
                      local_298 = pcVar7;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSFileManager_026ce158,
                                 PTR_s_defaultManager_026ca5f0);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(puVar4);
                      puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSFileManager_026ce158,
                                 PTR_s_defaultManager_026ca5f0);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)();
                      (*(code *)PTR__objc_release_02578630)(puVar4);
                      pcVar7 = local_298;
                      if (local_160 != (ulong *)0x0) {
                        _objc_retainAutorelease();
                        *local_160 = (ulong)pcVar7;
                      }
                      uVar6 = local_280;
                      if (local_168 != (undefined8 *)0x0) {
                        _objc_retainAutorelease();
                        *local_168 = uVar6;
                      }
                      local_139 = 1;
                      local_23c = 1;
                      _objc_storeStrong(&local_298);
                      _objc_storeStrong(&local_280,0);
                    }
                    else {
                      local_23c = 0;
                    }
                    _objc_storeStrong(&local_268,0);
                  }
                  else {
                    if (local_160 != (ulong *)0x0) {
                      _objc_retainAutorelease();
                      *local_160 = (ulong)pcVar7;
                    }
                    uVar6 = local_258;
                    if (local_168 != (undefined8 *)0x0) {
                      _objc_retainAutorelease();
                      *local_168 = uVar6;
                    }
                    local_139 = 1;
                    local_23c = 1;
                  }
                  _objc_storeStrong(&local_260);
                  _objc_storeStrong(&local_258,0);
                }
                else {
                  if (local_160 != (ulong *)0x0) {
                    _objc_retainAutorelease();
                    *local_160 = (ulong)pcVar7;
                  }
                  uVar6 = local_248;
                  if (local_168 != (undefined8 *)0x0) {
                    _objc_retainAutorelease();
                    *local_168 = uVar6;
                  }
                  local_139 = 1;
                  local_23c = 1;
                }
                _objc_storeStrong(&local_250);
                _objc_storeStrong(&local_248,0);
              }
              _objc_storeStrong(&local_238);
              _objc_storeStrong(&local_230,0);
              _objc_storeStrong(&local_228,0);
              if ((local_23c != 0) && (local_23c != 5)) goto LAB_008f5d80;
              local_338 = local_338 + 1;
            } while (local_338 < local_330);
            local_330 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,
                       auStack_138,0x10);
            local_338 = (undefined *)0x0;
          } while (local_330 != (undefined *)0x0);
        }
        local_23c = 0;
LAB_008f5d80:
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (local_23c != 0) goto LAB_008f5e14;
        local_2f8 = local_2f8 + 1;
      } while (local_2f8 < local_2f0);
      local_2f0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_b8,0x10);
      local_2f8 = 0;
    } while (local_2f0 != 0);
  }
  local_23c = 0;
LAB_008f5e14:
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (local_23c == 0) {
    local_139 = 0;
    local_23c = 1;
  }
  _objc_storeStrong(local_188);
  _objc_storeStrong(&local_170,0);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_139 & 1;
}

