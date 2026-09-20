// gifDataFromVideoAtPath: @ 00f43388

/* WARNING: Removing unreachable block (ram,0x00f435d0) */
/* WARNING: Removing unreachable block (ram,0x00f435e8) */
/* WARNING: Removing unreachable block (ram,0x00f435ec) */
/* WARNING: Removing unreachable block (ram,0x00f435f4) */
/* WARNING: Removing unreachable block (ram,0x00f4360c) */
/* WARNING: Removing unreachable block (ram,0x00f43610) */
/* WARNING: Removing unreachable block (ram,0x00f4361c) */
/* WARNING: Removing unreachable block (ram,0x00f43624) */
/* WARNING: Removing unreachable block (ram,0x00f4350c) */
/* WARNING: Removing unreachable block (ram,0x00f4352c) */
/* WARNING: Removing unreachable block (ram,0x00f43530) */
/* WARNING: Removing unreachable block (ram,0x00f43538) */
/* WARNING: Removing unreachable block (ram,0x00f43550) */
/* WARNING: Removing unreachable block (ram,0x00f43554) */
/* WARNING: Removing unreachable block (ram,0x00f43560) */
/* WARNING: Removing unreachable block (ram,0x00f43568) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID __thiscall
WCRefineEmoticonToolsHelper::gifDataFromVideoAtPath_
          (WCRefineEmoticonToolsHelper *this,ID param_1,SEL param_2,ID param_3)

{
  double dVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  double in_d0;
  undefined8 uVar11;
  undefined *local_420;
  undefined *local_3e8;
  undefined *local_3e0;
  long local_318;
  long local_2f8;
  long local_2f0;
  double local_2e8;
  undefined1 auStack_2a8 [8];
  long local_2a0;
  long *local_298;
  long local_268;
  undefined *local_260;
  double local_258;
  undefined *local_250;
  undefined *local_248;
  undefined *local_240;
  undefined *local_238;
  undefined8 local_230;
  undefined1 auStack_228 [24];
  undefined *local_210;
  undefined8 local_208;
  long local_200;
  undefined4 local_1f4;
  long local_1f0;
  double local_1e8;
  long local_1e0;
  undefined *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined *local_1b0;
  long local_1a8;
  undefined8 local_1a0;
  long local_198;
  long local_190;
  long local_188;
  undefined4 local_17c;
  long local_178;
  double local_170;
  undefined8 local_168;
  double local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined *local_130;
  undefined4 local_124;
  undefined8 local_120;
  SEL local_118;
  ID local_110;
  undefined *local_108;
  undefined1 auStack_e8 [128];
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_120 = 0;
  local_118 = param_2;
  local_110 = param_1;
  _objc_storeStrong(&local_120,param_3);
  IVar2 = local_110;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_110,PTR_s_fileExistsWithBytesAtPath__026ac1d8,local_120);
  puVar4 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
  if ((IVar2 & 1) == 0) {
    local_108 = (undefined *)0x0;
    local_124 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_120);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_URLAssetWithURL_options__026a1748,puVar3,0);
    _objc_retainAutoreleasedReturnValue();
    local_130 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_130 == (undefined *)0x0) {
      local_108 = (undefined *)0x0;
      local_124 = 1;
    }
    else {
      if (local_130 == (undefined *)0x0) {
        local_150 = 0;
        local_148 = 0;
        local_140 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(&local_150,local_130,PTR_s_duration_0269dd70);
      }
      _CMTimeGetSeconds(&local_150);
      if ((ABS(in_d0) == INFINITY) || (in_d0 <= 0.0)) {
        local_108 = (undefined *)0x0;
        local_124 = 1;
      }
      else {
        local_168 = 0x403e000000000000;
        local_2e8 = in_d0;
        if (30.0 <= in_d0) {
          local_2e8 = 30.0;
        }
        local_170 = local_2e8;
        local_158 = local_2e8;
        local_17c = 2;
        local_188 = (long)(local_2e8 * 12.0);
        local_2f0 = local_188;
        if (local_188 < 3) {
          local_2f0 = 2;
        }
        local_190 = local_2f0;
        local_198 = local_2f0;
        local_1a0 = 0xb4;
        if (local_2f0 < 0xb4) {
          local_2f8 = local_2f0;
        }
        else {
          local_2f8 = 0xb4;
        }
        local_1a8 = local_2f8;
        local_178 = local_2f8;
        puVar4 = PTR__OBJC_CLASS___AVAssetImageGenerator_026ceaa8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_1b0 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_setAppliesPreferredTrackTransfor_026aa7e8,1);
        uVar8 = 0x4072c00000000000;
        uVar11 = uVar8;
        FUN_00f3845c();
        local_1d0 = uVar8;
        uStack_1c8 = uVar11;
        local_1c0 = uVar8;
        uStack_1b8 = uVar11;
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,uVar11,local_1b0,PTR_s_setMaximumSize__026aa7f0)
        ;
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_1d8 = puVar4;
        for (local_1e0 = 0; local_1e0 < local_178; local_1e0 = local_1e0 + 1) {
          _objc_autoreleasePoolPush(local_1e0 - local_178);
          puVar4 = local_1b0;
          local_1f0 = local_178 + -1;
          local_1f4 = 1;
          local_318 = local_1f0;
          if (local_1f0 < 1) {
            local_318 = 1;
          }
          local_200 = local_318;
          local_1e8 = local_158 * ((double)local_1e0 / (double)local_318);
          local_208 = 0;
          _CMTimeMakeWithSeconds(local_1e8,600);
          local_230 = local_208;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_copyCGImageAtTime_actualTime_err_026aa7f8,auStack_228,0,&local_230
                    );
          _objc_storeStrong(&local_208,local_230);
          local_210 = puVar4;
          if (puVar4 == (undefined *)0x0) {
            local_124 = 4;
          }
          else {
            puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithCGImage__026a7280,puVar4);
            _objc_retainAutoreleasedReturnValue();
            local_238 = puVar3;
            _CGImageRelease(local_210);
            if (local_238 != (undefined *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_addObject__0269d180,local_238);
            }
            _objc_storeStrong(&local_238,0);
            local_124 = 0;
          }
          _objc_storeStrong(&local_208,0);
          _objc_autoreleasePoolPop();
        }
        puVar4 = local_1d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_count_0269cfe0);
        if (puVar4 == (undefined *)0x0) {
          local_108 = (undefined *)0x0;
          local_124 = 1;
        }
        else {
          puVar3 = PTR__OBJC_CLASS___NSMutableData_026ce660;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableData_026ce660,PTR_s_data_0269d850);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = local_1d8;
          local_240 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_count_0269cfe0);
          _CGImageDestinationCreateWithData(puVar3,&cf_com_compuserve_gif,puVar4,0);
          puVar4 = PTR__kCGImagePropertyGIFDictionary_02578448;
          local_248 = puVar3;
          if (puVar3 == (undefined *)0x0) {
            local_108 = (undefined *)0x0;
            local_124 = 1;
          }
          else {
            local_38 = *(undefined8 *)PTR__kCGImagePropertyGIFDictionary_02578448;
            local_48 = *(undefined8 *)PTR__kCGImagePropertyGIFLoopCount_02578450;
            puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_40 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_48);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_30 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
            _objc_retainAutoreleasedReturnValue();
            local_250 = puVar6;
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            _CGImageDestinationSetProperties(local_248,local_250);
            dVar1 = local_158;
            puVar3 = local_1d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_count_0269cfe0);
            local_258 = dVar1 / (double)puVar3;
            local_58 = *(undefined8 *)puVar4;
            local_68 = *(undefined8 *)PTR__kCGImagePropertyGIFDelayTime_02578440;
            puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_258,PTR__OBJC_CLASS___NSNumber_026ce038,
                       PTR_s_numberWithDouble__0269d6d0);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_60 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_60,&local_68,1);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_50 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_50,&local_58,1);
            _objc_retainAutoreleasedReturnValue();
            local_260 = puVar5;
            (*(code *)PTR__objc_release_02578630)(puVar3);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            _memset(auStack_2a8,0,0x40);
            puVar4 = local_1d8;
            (*(code *)PTR__objc_retain_02578638)();
            local_3e0 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a8,auStack_e8
                       ,0x10);
            if (local_3e0 != (undefined *)0x0) {
              lVar9 = *local_298;
              local_3e8 = (undefined *)0x0;
              do {
                do {
                  if (*local_298 - lVar9 != 0) {
                    _objc_enumerationMutation(*local_298 - lVar9,puVar4);
                  }
                  lVar10 = *(long *)(local_2a0 + (long)local_3e8 * 8);
                  local_268 = lVar10;
                  _objc_retainAutorelease();
                  (*(code *)PTR__objc_msgSend_02578628)(lVar10,PTR_s_CGImage_0269e0e8);
                  puVar3 = local_248;
                  lVar7 = local_268;
                  if (lVar10 != 0) {
                    _objc_retainAutorelease();
                    (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_CGImage_0269e0e8);
                    _CGImageDestinationAddImage(puVar3,lVar7,local_260);
                  }
                  local_3e8 = local_3e8 + 1;
                } while (local_3e8 < local_3e0);
                local_3e0 = puVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2a8,
                           auStack_e8,0x10);
                local_3e8 = (undefined *)0x0;
              } while (local_3e0 != (undefined *)0x0);
            }
            (*(code *)PTR__objc_release_02578630)(puVar4);
            puVar4 = local_248;
            _CGImageDestinationFinalize();
            _CFRelease(local_248);
            if ((((ulong)puVar4 & 1) == 0) ||
               (puVar4 = local_240,
               (*(code *)PTR__objc_msgSend_02578628)(local_240,PTR_s_length_0269cca0),
               puVar4 == (undefined *)0x0)) {
              local_420 = (undefined *)0x0;
            }
            else {
              local_420 = local_240;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_108 = local_420;
            local_124 = 1;
            _objc_storeStrong(&local_260);
            _objc_storeStrong(&local_250,0);
          }
          _objc_storeStrong(&local_240,0);
        }
        _objc_storeStrong(&local_1d8);
        _objc_storeStrong(&local_1b0,0);
      }
    }
    _objc_storeStrong(&local_130,0);
  }
  _objc_storeStrong(&local_120,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_108;
}

