// wcr_applyWatermarkAlbumEnhancementForAsset:completion: @ 007281bc

/* Function Stack Size: 0x20 bytes */

void WCRefineScreenshotWatermarkProcessor::wcr_applyWatermarkAlbumEnhancementForAsset_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_124;
  code *local_120;
  undefined *local_118;
  long local_110;
  long local_108;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  ID local_e0;
  long local_d8;
  ID local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  code *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined *local_58;
  undefined4 local_50;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3,param_3,param_4,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  if (local_38 == 0) {
    if (local_40 != 0) {
      (**(code **)(local_40 + 0x10))(local_40,0);
    }
    local_50 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___PHImageManager_026ce880;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___PHImageManager_026ce880,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___PHImageRequestOptions_026ce8e8;
    local_58 = puVar3;
    _objc_alloc_init();
    local_60 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setSynchronous__026a7628,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setDeliveryMode__026a7020,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setResizeMode__026a7630,0);
    local_a8 = &local_90;
    local_90 = 0;
    local_80 = 0x32000000;
    local_7c = 0x30;
    local_78 = FUN_007287cc;
    local_70 = FUN_00728820;
    local_68 = 0;
    uStack_98 = *(undefined8 *)(PTR__PHImageManagerMaximumSize_02578610 + 8);
    local_a0 = *(undefined8 *)PTR__PHImageManagerMaximumSize_02578610;
    local_c8 = PTR___NSConcreteStackBlock_02578660;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = FUN_0072884c;
    local_b0 = &DAT_0257f4e8;
    local_88 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a0,uStack_98,local_58,PTR_s_requestImageForAsset_targetSize__026a7638,local_38,
               0,local_60,&local_c8);
    if (local_88[5] == 0) {
      if (local_40 != 0) {
        (**(code **)(local_40 + 0x10))(local_40,0);
      }
      local_50 = 1;
    }
    else {
      IVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_applyWatermarkToImage__026a7a30,local_88[5]);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_38;
      local_d0 = IVar5;
      if ((IVar5 == 0) || (IVar5 == local_88[5])) {
        if (local_40 != 0) {
          (**(code **)(local_40 + 0x10))(local_40,0);
        }
        local_50 = 1;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_d8 = lVar1;
        puVar4 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,PTR_s_sharedPhotoLibrary_026a1730);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = local_d0;
        puVar3 = PTR___NSConcreteStackBlock_02578660;
        local_100 = PTR___NSConcreteStackBlock_02578660;
        local_f8 = 0xc2000000;
        local_f4 = 0;
        local_f0 = FUN_007288d4;
        local_e8 = &DAT_02578c20;
        (*(code *)PTR__objc_retain_02578638)();
        lVar2 = local_40;
        local_e0 = IVar5;
        local_130 = puVar3;
        local_128 = 0xc2000000;
        local_124 = 0;
        local_120 = FUN_00728924;
        local_118 = &DAT_0257f518;
        (*(code *)PTR__objc_retain_02578638)();
        lVar1 = local_d8;
        local_108 = lVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_110 = lVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_performChanges_completionHandler_026a1740,&local_100,&local_130);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        _objc_storeStrong(&local_110);
        _objc_storeStrong(&local_108,0);
        _objc_storeStrong(&local_e0,0);
        _objc_storeStrong(&local_d8,0);
        local_50 = 0;
      }
      _objc_storeStrong(&local_d0,0);
    }
    __Block_object_dispose(&local_90,8);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

