// FUN_001d5470 @ 001d5470

void FUN_001d5470(undefined8 param_1)

{
  double dVar1;
  uint uVar2;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  double dVar7;
  ulong local_50;
  byte local_41;
  ulong local_40;
  double local_38;
  double local_30;
  undefined4 local_28;
  ulong local_18;
  ulong *puVar3;
  
  dVar1 = DAT_02323cd0;
  puVar3 = &local_18;
  local_18 = 0;
  dVar7 = DAT_02323cd0;
  _objc_storeStrong(puVar3,param_1);
  uVar2 = (uint)puVar3;
  FUN_001cf8b0();
  if (((uVar2 & 1) == 0) || (local_18 == 0)) {
    local_28 = 1;
  }
  else {
    FUN_001d597c();
    local_30 = dVar7;
    FUN_001d5a74(local_18);
    local_30 = dVar7;
    FUN_001d5b7c();
    uVar4 = local_18;
    local_38 = dVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar4;
    if (local_38 <= 0.0) {
      dVar7 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_borderWidth_0269e060);
    }
    else {
      dVar7 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_borderWidth_0269e060);
      dVar7 = ABS(dVar7 - local_38);
    }
    local_41 = dVar7 <= dVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_cornerRadius_026ca5c8);
    if ((((DAT_02323dc8 < ABS(dVar7 - local_30)) ||
         (uVar4 = local_40,
         (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_masksToBounds_0269e158),
         (uVar4 & 1) == 0)) ||
        (uVar4 = local_18,
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_clipsToBounds_026ca570),
        (uVar4 & 1) == 0)) || ((local_41 & 1) == 0)) {
      DAT_028c9078 = DAT_028c9078 + 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_begin_026ca520);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_setDisableActions__026ca918,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,local_40,PTR_s_setCornerRadius__026ca900);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setMasksToBounds__026ca9b8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setClipsToBounds__026ca8c8,1);
      if (local_38 <= 0.0) {
        (*(code *)PTR__objc_msgSend_02578628)(0,local_40,PTR_s_setBorderWidth__026ca898);
        puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        _objc_retainAutorelease();
        puVar6 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_CGColor_026ca470);
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setBorderColor__026ca890,puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      else {
        uVar4 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,local_40,PTR_s_setBorderWidth__026ca898);
        FUN_001d5c5c();
        _objc_retainAutoreleasedReturnValue();
        local_50 = uVar4;
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_CGColor_026ca470);
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setBorderColor__026ca890,uVar4);
        _objc_storeStrong(&local_50,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_commit_026ca580);
      DAT_028c9078 = DAT_028c9078 + -1;
      local_28 = 0;
    }
    else {
      local_28 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

