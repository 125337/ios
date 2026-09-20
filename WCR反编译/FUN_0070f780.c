// FUN_0070f780 @ 0070f780

void FUN_0070f780(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  uint local_b8;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  byte local_55;
  undefined *local_48;
  long local_40;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_40 = param_1;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar2;
  if (*(long *)(param_1 + 0x20) == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    local_30 = *(undefined8 *)(param_1 + 0x30);
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1
              );
    _objc_retainAutoreleasedReturnValue();
    bVar1 = *(byte *)(param_1 + 0x48);
    puVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_screenshotWatermarkEnabled_026a1ee0);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_wcr_registerAlbumEnhancementDedu_026a7640,puVar2,bVar1 & 1,1,
               (ulong)puVar3 & 0xffffffff);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_screenshotFrameDeleteOriginal_026a7690);
    local_b8 = 1;
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_screenshotWatermarkDeleteOrigina_026a7650);
      local_b8 = (uint)puVar2;
    }
    local_55 = (byte)local_b8 & 1;
    if (((local_b8 & 1) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
      puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,PTR_s_sharedPhotoLibrary_026a1730);
      _objc_retainAutoreleasedReturnValue();
      local_80 = PTR___NSConcreteStackBlock_02578660;
      local_78 = 0xc2000000;
      local_74 = 0;
      local_70 = FUN_0070fcbc;
      local_68 = &DAT_02578c20;
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_performChanges_completionHandler_026a1740,&local_80,0);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_60,0);
    }
    puVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_screenshotWatermarkEnabled_026a1ee0);
    if (((((ulong)puVar2 & 1) == 0) ||
        (puVar2 = local_48,
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_screenshotWatermarkShowToast_026a7648),
        ((ulong)puVar2 & 1) == 0)) ||
       (puVar2 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_screenshotFrameShowToast_026a1ed0),
       ((ulong)puVar2 & 1) == 0)) {
      puVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_screenshotFrameShowToast_026a1ed0);
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_screenshotWatermarkEnabled_026a1ee0);
        if ((((ulong)puVar2 & 1) != 0) &&
           (puVar2 = local_48,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_48,PTR_s_screenshotWatermarkShowToast_026a7648),
           ((ulong)puVar2 & 1) != 0)) {
          (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),&cf_4lpS_mR);
        }
      }
      else {
        (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),&cf_WYX_mR);
      }
    }
    else {
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),&cf_4lpS_);
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),1);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_screenshotFrameShowToast_026a1ed0);
    if (((ulong)puVar2 & 1) != 0) {
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),&cf_WYXOX_1Y_);
    }
  }
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

