// FUN_006f385c @ 006f385c

void FUN_006f385c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  long local_60;
  long local_58;
  int local_50;
  long local_40;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  lVar1 = param_1 + 0x30;
  local_38 = param_1;
  _objc_loadWeakRetained();
  uVar4 = local_30;
  local_40 = lVar1;
  if (lVar1 == 0) {
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sourceImage_026a70f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_finishWithImage_context__026a70f8,uVar2,0);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_50 = 1;
  }
  else {
    lVar3 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_wcr_exportCIFrameCount_026a7100);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setWcr_exportCIFrameCount__026a7108,lVar3 + 1)
    ;
    lVar1 = local_40;
    local_60 = 0;
    local_58 = lVar3;
    if ((*(byte *)(param_1 + 0x58) & 1) == 0) {
      uVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sourceImage_026a70f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar1,PTR_s_wcr_compositedFrameImageForSourc_026a7118,uVar4,
                 *(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      local_88 = lVar1;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      lVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50),local_40,
                 PTR_s_wcr_compositedWatermarkImageForS_026a7110,local_88,
                 *(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_60;
      local_60 = lVar3;
      (*(code *)PTR__objc_release_02578630)(lVar1);
      _objc_storeStrong(&local_88,0);
    }
    else {
      uVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sourceImage_026a70f0);
      _objc_retainAutoreleasedReturnValue();
      uStack_78 = *(undefined8 *)(param_1 + 0x40);
      local_80 = *(undefined8 *)(param_1 + 0x38);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,uStack_78,lVar1,PTR_s_wcr_compositedWatermarkImageForS_026a7110,uVar4,
                 *(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      local_68 = lVar1;
      (*(code *)PTR__objc_release_02578630)(uVar4);
      lVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_wcr_compositedFrameImageForSourc_026a7118,local_68,
                 *(undefined8 *)(param_1 + 0x28));
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_60;
      local_60 = lVar3;
      (*(code *)PTR__objc_release_02578630)(lVar1);
      _objc_storeStrong(&local_68,0);
    }
    uVar4 = local_30;
    lVar1 = local_60;
    lVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_ciContext_026a7120);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_finishWithImage_context__026a70f8,lVar1);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    _objc_storeStrong(&local_60,0);
    local_50 = 0;
  }
  _objc_storeStrong(&local_40,0);
  if (local_50 == 0) {
    local_50 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

