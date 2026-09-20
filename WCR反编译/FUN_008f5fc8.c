// FUN_008f5fc8 @ 008f5fc8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_008f5fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  dispatch_semaphore_t pdVar5;
  dispatch_time_t timeout;
  long lVar6;
  byte local_194;
  long local_130;
  undefined *local_c0;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  dispatch_semaphore_t local_90;
  dispatch_semaphore_t local_88;
  undefined1 *local_80;
  undefined4 local_74;
  undefined *local_70;
  undefined *local_68 [3];
  undefined *local_50;
  long local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_30);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
  local_50 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___AVURLAsset_026ce330,PTR_s_URLAssetWithURL_options__026a1748,puVar2,0)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_68[0] = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_tracksWithMediaType__0269f568,
             *(undefined8 *)PTR__AVMediaTypeAudio_02578580);
  _objc_retainAutoreleasedReturnValue();
  local_70 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_count_0269cfe0);
  if (puVar3 == (undefined *)0x0) {
    local_21 = 0;
    local_74 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___AVAssetExportSession_026ce4b0;
    _objc_alloc();
    if (local_48 == 0) {
      local_130 = *(long *)PTR__AVAssetExportPresetAppleM4A_02578498;
    }
    else {
      local_130 = local_48;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_initWithAsset_presetName__026a7150,local_68[0],local_130);
    local_80 = puVar2;
    if (puVar2 == (undefined1 *)0x0) {
      local_21 = 0;
      local_74 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_supportedFileTypes_026a71b0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (((ulong)puVar4 & 1) == 0) {
        local_21 = 0;
        local_74 = 1;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_38);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setOutputURL__026a1820);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setOutputFileType__026a1828,local_40);
        pdVar5 = _dispatch_semaphore_create(0);
        puVar4 = local_80;
        local_b0 = PTR___NSConcreteStackBlock_02578660;
        local_a8 = 0xc2000000;
        local_a4 = 0;
        local_a0 = FUN_008f82c8;
        local_98 = &DAT_02578c20;
        local_88 = pdVar5;
        (*(code *)PTR__objc_retain_02578638)();
        local_90 = pdVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_exportAsynchronouslyWithCompleti_026a1840,&local_b0);
        pdVar5 = local_88;
        timeout = _dispatch_time(0,60000000000);
        lVar6 = _dispatch_semaphore_wait(pdVar5,timeout);
        bVar1 = false;
        local_194 = 0;
        if (lVar6 == 0) {
          puVar4 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_status_026a1830);
          local_194 = 0;
          if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
            local_c0 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = true;
            puVar2 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_194 = (byte)puVar2;
          }
        }
        local_21 = local_194 & 1;
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_c0);
        }
        local_74 = 1;
        _objc_storeStrong(&local_90);
        _objc_storeStrong(&local_88,0);
      }
    }
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(local_68,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

