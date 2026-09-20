// FUN_006f6348 @ 006f6348

void FUN_006f6348(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long local_48;
  uint local_40;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar2 = param_1 + 0x28;
  local_28 = param_1;
  _objc_loadWeakRetained();
  uVar4 = local_20;
  bVar1 = lVar2 != 0;
  local_30 = lVar2;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_sourceImage_026a70f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),lVar2,
               PTR_s_wcr_legacyCompositedWatermarkIma_026a71c8,uVar4,*(undefined8 *)(param_1 + 0x20)
              );
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar2;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar4 = local_20;
    lVar2 = local_48;
    lVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_ciContext_026a7120);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_finishWithImage_context__026a70f8,lVar2);
    (*(code *)PTR__objc_release_02578630)(lVar5);
    _objc_storeStrong(&local_48,0);
  }
  else {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_sourceImage_026a70f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_finishWithImage_context__026a70f8,uVar3,0);
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  local_40 = (uint)!bVar1;
  _objc_storeStrong(&local_30,0);
  if (local_40 == 0) {
    local_40 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

