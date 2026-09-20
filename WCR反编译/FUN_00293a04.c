// FUN_00293a04 @ 00293a04

void FUN_00293a04(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  uint local_c4;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  long local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_50;
  byte local_49;
  undefined *local_48;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_49 = 0;
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  local_c4 = 1;
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_c4 = (uint)puVar2 ^ 1;
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  lVar1 = local_30;
  puVar2 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
  if ((local_c4 & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_28);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_URLAssetWithURL_options__026a1748,puVar4,0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___AVAssetExportSession_026ce4b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___AVAssetExportSession_026ce4b0,
               PTR_s_exportSessionWithAsset_presetNam_026a1818,local_58,
               *(undefined8 *)PTR__AVAssetExportPresetAppleM4A_02578498);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_30;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_60 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      if (local_30 != 0) {
        uVar3 = 0xfffffffffffffffb;
        FUN_00272848(0xfffffffffffffffb,&cf_el_Q);
        _objc_retainAutoreleasedReturnValue();
        (**(code **)(lVar1 + 0x10))(lVar1,0);
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      local_50 = 1;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_stringWithFormat__0269cca8,&cf_finder_audio__lld_m4a);
      _objc_retainAutoreleasedReturnValue();
      local_68 = puVar2;
      (*(code *)PTR__objc_release_02578630)();
      FUN_0027215c();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setOutputURL__026a1820);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setOutputFileType__026a1828,
                 *(undefined8 *)PTR__AVFileTypeAppleM4A_02578520);
      puVar4 = local_60;
      local_a8 = PTR___NSConcreteStackBlock_02578660;
      local_a0 = 0xc2000000;
      local_9c = 0;
      local_98 = FUN_00294b08;
      local_90 = &DAT_02579740;
      (*(code *)PTR__objc_retain_02578638)();
      lVar1 = local_30;
      local_88 = puVar4;
      (*(code *)PTR__objc_retain_02578638)();
      puVar2 = local_70;
      local_78 = lVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_exportAsynchronouslyWithCompleti_026a1840,&local_a8);
      _objc_storeStrong(&local_80);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      local_50 = 0;
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  else {
    if (local_30 != 0) {
      uVar3 = 0xfffffffffffffffc;
      FUN_00272848(0xfffffffffffffffc,&cf_NX__W);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))(lVar1,0);
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    local_50 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

