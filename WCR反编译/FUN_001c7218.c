// FUN_001c7218 @ 001c7218

void FUN_001c7218(double param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_30 = param_5;
  local_28 = param_4;
  (*DAT_028c8cb0)(param_4,param_5);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_msgBannerBeautifyEnabled_026a06b8);
  if ((((ulong)puVar1 & 1) != 0) && (uVar2 = local_28, FUN_00207570(), (uVar2 & 1) == 0)) {
    DAT_028c9190 = DAT_028c9190 + 1;
    FUN_00209f80(local_28);
    FUN_0020a6b0(local_28);
    FUN_0020a964(local_28);
    FUN_0020af44(local_28);
    FUN_0020a6b0(local_28);
    FUN_0020a964(local_28);
    FUN_0020dec0(local_28,local_38);
    uVar2 = local_28;
    FUN_00207ce4();
    if ((uVar2 & 1) != 0) {
      uVar2 = local_28;
      _objc_getAssociatedObject(local_28,&DAT_028c9194);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (((uVar3 & 1) == 0) &&
         ((((*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_msgBannerWidth_026a0698),
           param_1 <= 0.0 ||
           ((*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_msgBannerHeight_026a06a0),
           param_1 <= 0.0)) &&
          (puVar1 = local_38,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_msgBannerBgUseImageBackground_026a06a8),
          ((ulong)puVar1 & 1) == 0)))) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
        _CGRectGetHeight(param_1,param_2);
        uVar2 = local_28;
        uVar4 = 0x404c400000000000;
        if (56.5 < param_1) {
          puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(uVar2,&DAT_028c9194,puVar1,1);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
          (*(code *)PTR__objc_msgSend_02578628)
                    (param_1,uVar4,param_3,0x404c000000000000,local_28,PTR_s_setBounds__026ca8a0);
          FUN_0020a6b0(local_28);
          FUN_0020a964(local_28);
          _objc_setAssociatedObject(local_28,&DAT_028c9194,0,1);
        }
      }
      FUN_0020e1d8(local_28);
    }
    DAT_028c9190 = DAT_028c9190 + -1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

