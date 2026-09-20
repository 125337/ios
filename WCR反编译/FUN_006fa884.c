// FUN_006fa884 @ 006fa884

void FUN_006fa884(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long local_50;
  long local_48;
  uint local_40;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = param_1 + 0x28;
  local_28 = param_1;
  _objc_loadWeakRetained();
  uVar4 = local_20;
  local_30 = lVar1;
  if (lVar1 == 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_sourceImage_026a70f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_finishWithImage_context__026a70f8,uVar2,0);
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  else {
    lVar3 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_wcr_exportCIFrameCount_026a7100);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setWcr_exportCIFrameCount__026a7108,lVar3 + 1)
    ;
    lVar5 = local_30;
    uVar4 = local_20;
    local_48 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_sourceImage_026a70f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),lVar5,
               PTR_s_wcr_compositedWatermarkImageForS_026a7110,uVar4,*(undefined8 *)(param_1 + 0x20)
              );
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar5;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar4 = local_20;
    lVar5 = local_50;
    lVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_ciContext_026a7120);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_finishWithImage_context__026a70f8,lVar5);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    _objc_storeStrong(&local_50,0);
  }
  local_40 = (uint)(lVar1 == 0);
  _objc_storeStrong(&local_30,0);
  if (local_40 == 0) {
    local_40 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

