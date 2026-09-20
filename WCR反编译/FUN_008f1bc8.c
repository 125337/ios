// FUN_008f1bc8 @ 008f1bc8

void FUN_008f1bc8(double param_1,undefined8 param_2,undefined4 *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined1 *puVar11;
  undefined *local_2b0;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined8 local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  double local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 *local_b0;
  long local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_a8 = 0;
  _objc_storeStrong(&local_a8,param_2);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = 0;
  }
  lVar1 = local_a8;
  local_b0 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
  puVar3 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
  if (lVar1 == 0) {
    local_a0 = (undefined *)0x0;
    local_c0 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_URLAssetWithURL_options__026a1748,puVar2,0);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_c8 == (undefined *)0x0) {
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(&local_e8,local_c8,PTR_s_duration_0269dd70);
    }
    uVar4 = 0;
    _CMTimeGetSeconds();
    local_d0 = param_1;
    if (((local_b0 != (undefined4 *)0x0) && (FUN_00224fa4(param_1), (uVar4 & 1) != 0)) &&
       (0.0 < local_d0)) {
      *local_b0 = (int)(long)(local_d0 * 1000.0);
    }
    puVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_tracksWithMediaType__0269f568,
               *(undefined8 *)PTR__AVMediaTypeAudio_02578580);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_count_0269cfe0);
    if (puVar3 == (undefined *)0x0) {
      local_a0 = (undefined *)0x0;
      local_c0 = 1;
    }
    else {
      local_f8 = 0;
      puVar3 = PTR__OBJC_CLASS___AVAssetReader_026cea30;
      _objc_alloc();
      local_108 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_initWithAsset_error__026a9e00,local_c8,&local_108);
      _objc_storeStrong(&local_f8,local_108);
      local_100 = puVar3;
      if (puVar3 == (undefined1 *)0x0) {
        local_a0 = (undefined *)0x0;
        local_c0 = 1;
      }
      else {
        local_98 = *(undefined8 *)PTR__AVFormatIDKey_02578540;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                   0x6c70636d);
        _objc_retainAutoreleasedReturnValue();
        local_90 = *(undefined8 *)PTR__AVSampleRateKey_025785a8;
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_60 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                   &DAT_00003e80);
        _objc_retainAutoreleasedReturnValue();
        local_88 = *(undefined8 *)PTR__AVNumberOfChannelsKey_02578598;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_58 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedShort__026a9e08,1);
        _objc_retainAutoreleasedReturnValue();
        local_80 = *(undefined8 *)PTR__AVLinearPCMBitDepthKey_02578560;
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_50 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedShort__026a9e08,0x10)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_78 = *(undefined8 *)PTR__AVLinearPCMIsFloatKey_02578570;
        puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_48 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        local_70 = *(undefined8 *)PTR__AVLinearPCMIsBigEndianKey_02578568;
        puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_40 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        local_68 = *(undefined8 *)PTR__AVLinearPCMIsNonInterleaved_02578578;
        puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_38 = puVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_30 = puVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_60,&local_98,7);
        _objc_retainAutoreleasedReturnValue();
        local_110 = puVar10;
        (*(code *)PTR__objc_release_02578630)(puVar9);
        (*(code *)PTR__objc_release_02578630)(puVar8);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = PTR__OBJC_CLASS___AVAssetReaderTrackOutput_026cea38;
        _objc_alloc();
        puVar2 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_initWithTrack_outputSettings__026a9e10,puVar2,local_110);
        local_118 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setAlwaysCopiesSampleData__026a9e18,0)
        ;
        puVar11 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_canAddOutput__026a9e20,local_118);
        if (((ulong)puVar11 & 1) == 0) {
          local_a0 = (undefined *)0x0;
          local_c0 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_addOutput__026a9e28,local_118);
          puVar11 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_startReading_026a9e30);
          if (((ulong)puVar11 & 1) == 0) {
            local_a0 = (undefined *)0x0;
            local_c0 = 1;
          }
          else {
            puVar3 = PTR__OBJC_CLASS___NSMutableData_026ce660;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSMutableData_026ce660,PTR_s_data_0269d850);
            _objc_retainAutoreleasedReturnValue();
            local_120 = puVar3;
            while ((puVar11 = local_100,
                   (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_status_026a1830),
                   puVar11 == (undefined1 *)((long)&MACH_HEADER.magic + 1) &&
                   (puVar3 = local_118,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_118,PTR_s_copyNextSampleBuffer_026a9e38), local_128 = puVar3,
                   puVar3 != (undefined *)0x0))) {
              _CMSampleBufferGetDataBuffer();
              local_130 = puVar3;
              if ((puVar3 != (undefined *)0x0) &&
                 (_CMBlockBufferGetDataLength(), local_138 = puVar3, puVar3 != (undefined *)0x0)) {
                puVar5 = PTR__OBJC_CLASS___NSMutableData_026ce660;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSMutableData_026ce660,PTR_s_dataWithLength__026a3368,
                           puVar3);
                _objc_retainAutoreleasedReturnValue();
                puVar2 = local_130;
                puVar3 = local_138;
                local_140 = puVar5;
                _objc_retainAutorelease();
                (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_mutableBytes_026a3370);
                _CMBlockBufferCopyDataBytes(puVar2,0,puVar3,puVar5);
                if ((int)puVar2 == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_120,PTR_s_appendData__026a9df8,local_140);
                }
                _objc_storeStrong(&local_140,0);
              }
              _CFRelease(local_128);
            }
            puVar3 = local_120;
            (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
            if (puVar3 == (undefined *)0x0) {
              local_2b0 = (undefined *)0x0;
            }
            else {
              local_2b0 = local_120;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_a0 = local_2b0;
            local_c0 = 1;
            _objc_storeStrong(&local_120,0);
          }
        }
        _objc_storeStrong(&local_118);
        _objc_storeStrong(&local_110,0);
      }
      _objc_storeStrong(&local_100);
      _objc_storeStrong(&local_f8,0);
    }
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_a8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_a0);
  return;
}

