// exportImage:nativePath:renderKey:mediaKey:quality: @0x32700

/* Function Stack Size: 0x38 bytes */

void WCMFeedController::exportImage_nativePath_renderKey_mediaKey_quality_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,long_long param_7
               )

{
  bool bVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_230;
  undefined8 local_198;
  undefined *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  code *local_158;
  undefined *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 auStack_118 [8];
  long_long local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  byte local_e9;
  undefined8 local_e8;
  byte local_d9;
  undefined8 local_d8;
  undefined8 local_c0;
  undefined1 auStack_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  byte local_91;
  undefined8 local_90;
  undefined4 local_84;
  long_long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  SEL local_58;
  ID local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_60 = 0;
  local_58 = param_2;
  local_50 = param_1;
  _objc_storeStrong(&local_60,param_3);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_4);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_5);
  local_78 = 0;
  _objc_storeStrong(&local_78,param_6);
  local_80 = param_7;
  uVar3 = _objc_msgSend_pendingExports(local_50,local_198);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar2 = _objc_msgSend_containsObject_(uVar3,local_198,local_70);
  (*(code *)PTR__objc_release_00110458)(uVar3);
  if ((uVar2 & 1) == 0) {
    local_91 = 0;
    bVar1 = false;
    if (1 < (long)local_80) {
      uVar3 = _objc_msgSend_pendingOriginalExports(local_50,local_198);
      local_90 = _objc_retainAutoreleasedReturnValue(uVar3);
      local_91 = 1;
      uVar4 = _objc_msgSend_count(local_90,local_198);
      bVar1 = 1 < uVar4;
    }
    if ((local_91 & 1) != 0) {
      (*(code *)PTR__objc_release_00110458)(local_90);
    }
    if (bVar1) {
      local_84 = 1;
    }
    else {
      uVar3 = _objc_msgSend_pendingExports(local_50,local_198);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      _objc_msgSend_addObject_(uVar3,local_198,local_70);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      if (local_80 - 1 != 0 && 0 < (long)local_80) {
        uVar3 = _objc_msgSend_pendingOriginalExports(local_80 - 1,local_50,local_198);
        uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
        _objc_msgSend_addObject_(uVar3,local_198,local_70);
        (*(code *)PTR__objc_release_00110458)(uVar3);
      }
      uVar3 = _objc_msgSend_assetHandler(local_50,local_198);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      uVar5 = _objc_msgSend_root(uVar3,local_198);
      local_a0 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      uVar3 = _objc_msgSend_assetHandler(local_50,local_198);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      uVar5 = _objc_msgSend_accountToken(uVar3,local_198);
      local_a8 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      local_b0 = _objc_msgSend_mediaGeneration(local_50,local_198);
      _objc_initWeak(auStack_b8,local_50);
      local_d9 = 0;
      local_e9 = 0;
      if (local_80 - 1 == 0) {
        uVar3 = _objc_msgSend_previewQueue(local_50,local_198);
        local_230 = _objc_retainAutoreleasedReturnValue(uVar3);
        local_d9 = 1;
        local_d8 = local_230;
      }
      else {
        uVar3 = _objc_msgSend_mediaQueue(local_80 - 1,local_50,local_198);
        local_230 = _objc_retainAutoreleasedReturnValue(uVar3);
        local_e9 = 1;
        local_e8 = local_230;
      }
      local_c0 = (*(code *)PTR__objc_retain_00110460)(local_230);
      if ((local_e9 & 1) != 0) {
        (*(code *)PTR__objc_release_00110458)(local_e8);
      }
      if ((local_d9 & 1) != 0) {
        (*(code *)PTR__objc_release_00110458)(local_d8);
      }
      uVar3 = _objc_msgSend_processInfo(&_OBJC_CLASS___NSProcessInfo,local_198);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      uVar5 = _objc_msgSend_systemUptime(uVar3,local_198);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      local_48 = &cf_quality;
      local_f8 = uVar5;
      uVar3 = _objc_msgSend_numberWithInteger_(&_OBJC_CLASS___NSNumber,local_198,local_80);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
      local_40 = &cf_pending;
      local_38 = uVar3;
      uVar5 = _objc_msgSend_pendingExports(local_50,local_198);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar6 = _objc_msgSend_count(uVar5,local_198);
      uVar6 = _objc_msgSend_numberWithUnsignedInteger_(&_OBJC_CLASS___NSNumber,local_198,uVar6);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      local_30 = uVar6;
      uVar7 = _objc_msgSend_dictionaryWithObjects_forKeys_count_
                        (&_OBJC_CLASS___NSDictionary,local_198,&local_38,&local_48,2);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      _Trace(&cf_image_export_start);
      (*(code *)PTR__objc_release_00110458)(uVar7);
      (*(code *)PTR__objc_release_00110458)(uVar6);
      (*(code *)PTR__objc_release_00110458)(uVar5);
      (*(code *)PTR__objc_release_00110458)(uVar3);
      uVar3 = local_c0;
      local_168 = PTR___NSConcreteStackBlock_001104f0;
      local_160 = 0xc2000000;
      local_15c = 0;
      local_158 = 
      ___71__WCMFeedController_exportImage_nativePath_renderKey_mediaKey_quality___block_invoke;
      local_150 = &___block_descriptor_112_e8_32s40s48s56s64s72s80w_e5_v8__0l;
      local_148 = (*(code *)PTR__objc_retain_00110460)(local_68);
      local_140 = (*(code *)PTR__objc_retain_00110460)(local_60);
      local_138 = (*(code *)PTR__objc_retain_00110460)(local_70);
      local_130 = (*(code *)PTR__objc_retain_00110460)(local_a0);
      local_128 = (*(code *)PTR__objc_retain_00110460)(local_a8);
      local_110 = local_80;
      local_108 = local_f8;
      local_100 = local_b0;
      _objc_copyWeak(auStack_118,auStack_b8);
      local_120 = (*(code *)PTR__objc_retain_00110460)(local_78);
      _objc_msgSend_addOperationWithBlock_(uVar3,local_198,&local_168);
      _objc_storeStrong(&local_120,0);
      _objc_destroyWeak(auStack_118);
      _objc_storeStrong(&local_128,0);
      _objc_storeStrong(&local_130,0);
      _objc_storeStrong(&local_138,0);
      _objc_storeStrong(&local_140,0);
      _objc_storeStrong(&local_148,0);
      _objc_storeStrong(&local_c0,0);
      _objc_destroyWeak(auStack_b8);
      _objc_storeStrong(&local_a8,0);
      _objc_storeStrong(&local_a0,0);
      local_84 = 0;
    }
  }
  else {
    local_84 = 1;
  }
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
  }
  return;
}

