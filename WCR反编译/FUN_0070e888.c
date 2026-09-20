// FUN_0070e888 @ 0070e888

void FUN_0070e888(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint local_e8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  byte local_69;
  undefined *local_68 [3];
  undefined *local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_48 = param_1;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar2;
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_68[0] = puVar2;
    if (*(long *)(param_1 + 0x28) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_addObject__0269d180,*(undefined8 *)(param_1 + 0x28));
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68[0],PTR_s_addObject__0269d180,*(undefined8 *)(param_1 + 0x30));
    }
    puVar2 = local_68[0];
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    bVar1 = *(byte *)(param_1 + 0x60);
    puVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_screenshotWatermarkEnabled_026a1ee0);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_wcr_registerAlbumEnhancementDedu_026a7640,puVar2,bVar1 & 1,1,
               (ulong)puVar3 & 0xffffffff);
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_screenshotFrameDeleteOriginal_026a7690);
    local_e8 = 1;
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_screenshotWatermarkDeleteOrigina_026a7650);
      local_e8 = (uint)puVar2;
    }
    local_69 = (byte)local_e8 & 1;
    if ((local_e8 & 1) != 0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___PHAsset_026ce530;
      local_78 = puVar3;
      if (*(long *)(param_1 + 0x28) == 0) {
        if (*(long *)(param_1 + 0x40) != 0) {
          local_30 = *(undefined8 *)(param_1 + 0x40);
          puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_30,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_fetchAssetsWithLocalIdentifiers__026a73d0,puVar3,0);
          _objc_retainAutoreleasedReturnValue();
          local_80 = puVar2;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0);
          puVar2 = local_78;
          if (puVar3 != (undefined *)0x0) {
            puVar3 = local_80;
            (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_firstObject_0269d1f8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          _objc_storeStrong(&local_80,0);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_addObject__0269d180,*(undefined8 *)(param_1 + 0x28));
      }
      puVar2 = PTR__OBJC_CLASS___PHAsset_026ce530;
      if (*(long *)(param_1 + 0x30) == 0) {
        if (*(long *)(param_1 + 0x48) != 0) {
          local_38 = *(undefined8 *)(param_1 + 0x48);
          puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_38,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_fetchAssetsWithLocalIdentifiers__026a73d0,puVar3,0);
          _objc_retainAutoreleasedReturnValue();
          local_88 = puVar2;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = local_88;
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_count_0269cfe0);
          puVar2 = local_78;
          if (puVar3 != (undefined *)0x0) {
            puVar3 = local_88;
            (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_firstObject_0269d1f8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          _objc_storeStrong(&local_88,0);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_addObject__0269d180,*(undefined8 *)(param_1 + 0x30));
      }
      puVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
      if (puVar2 != (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,PTR_s_sharedPhotoLibrary_026a1730);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_78;
        local_b0 = PTR___NSConcreteStackBlock_02578660;
        local_a8 = 0xc2000000;
        local_a4 = 0;
        local_a0 = FUN_0070f2a0;
        local_98 = &DAT_02578c20;
        (*(code *)PTR__objc_retain_02578638)();
        local_90 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_performChanges_completionHandler_026a1740,&local_b0,0);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _objc_storeStrong(&local_90,0);
      }
      _objc_storeStrong(&local_78,0);
    }
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_screenshotWatermarkEnabled_026a1ee0);
    if (((((ulong)puVar2 & 1) == 0) ||
        (puVar2 = local_50,
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_screenshotWatermarkShowToast_026a7648),
        ((ulong)puVar2 & 1) == 0)) ||
       (puVar2 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_screenshotFrameShowToast_026a1ed0),
       ((ulong)puVar2 & 1) == 0)) {
      puVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_screenshotFrameShowToast_026a1ed0);
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_screenshotWatermarkEnabled_026a1ee0);
        if ((((ulong)puVar2 & 1) != 0) &&
           (puVar2 = local_50,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_50,PTR_s_screenshotWatermarkShowToast_026a7648),
           ((ulong)puVar2 & 1) != 0)) {
          (**(code **)(*(long *)(param_1 + 0x50) + 0x10))(*(long *)(param_1 + 0x50),&cf_4lpS_mR);
        }
      }
      else {
        (**(code **)(*(long *)(param_1 + 0x50) + 0x10))(*(long *)(param_1 + 0x50),&cf_SVWYX_mR);
      }
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x50) + 0x10))(*(long *)(param_1 + 0x50),&cf_4lpS_);
    }
    if (*(long *)(param_1 + 0x58) != 0) {
      (**(code **)(*(long *)(param_1 + 0x58) + 0x10))(*(long *)(param_1 + 0x58),1);
    }
    _objc_storeStrong(local_68,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_screenshotFrameShowToast_026a1ed0);
    if (((ulong)puVar2 & 1) != 0) {
      (**(code **)(*(long *)(param_1 + 0x50) + 0x10))(*(long *)(param_1 + 0x50),&cf_SVWYXOX_1Y_);
    }
  }
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

