// FUN_0070e0c8 @ 0070e0c8

void FUN_0070e0c8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58 [3];
  undefined *local_40;
  undefined *local_38;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  if (*(long *)(param_1 + 0x20) == 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    local_20 = *(undefined8 *)(param_1 + 0x30);
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_wcr_registerAlbumEnhancementDedu_026a7640,puVar2,
               *(byte *)(param_1 + 0x48) & 1,0,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_screenshotWatermarkShowToast_026a7648);
    if (((ulong)puVar1 & 1) != 0) {
      (**(code **)(*(long *)(param_1 + 0x38) + 0x10))(*(long *)(param_1 + 0x38),&cf_4lpS_mR);
    }
    puVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_screenshotWatermarkDeleteOrigina_026a7650);
    if ((((ulong)puVar1 & 1) != 0) && (*(long *)(param_1 + 0x30) != 0)) {
      puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,PTR_s_sharedPhotoLibrary_026a1730);
      _objc_retainAutoreleasedReturnValue();
      local_78 = PTR___NSConcreteStackBlock_02578660;
      local_70 = 0xc2000000;
      local_6c = 0;
      local_68 = FUN_0070e4a8;
      local_60 = &DAT_02578c20;
      uVar3 = *(undefined8 *)(param_1 + 0x30);
      (*(code *)PTR__objc_retain_02578638)();
      local_58[0] = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_performChanges_completionHandler_026a1740,&local_78,0);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_storeStrong(local_58,0);
    }
    if (*(long *)(param_1 + 0x40) != 0) {
      (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),1);
    }
    _objc_storeStrong(&local_40,0);
  }
  else if (*(long *)(param_1 + 0x40) != 0) {
    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0);
  }
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

