// FUN_001eb9a0 @ 001eb9a0

void FUN_001eb9a0(double param_1,double param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  double dVar4;
  double local_118;
  ulong local_b8;
  double local_b0;
  double dStack_a8;
  byte local_91;
  undefined *local_90;
  double local_88;
  double local_80;
  double dStack_78;
  double local_70;
  double dStack_68;
  ulong local_50;
  undefined4 local_44;
  ulong local_40;
  double local_38;
  double dStack_30;
  ulong local_28;
  
  local_40 = 0;
  local_38 = param_1;
  dStack_30 = param_2;
  _objc_storeStrong(&local_40,param_3);
  if (local_40 == 0) {
    local_28 = 0;
    local_44 = 1;
  }
  else {
    uVar1 = local_40;
    _objc_getAssociatedObject(local_40,DAT_026dfab0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    local_50 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar3 = local_50;
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_size_026cab00);
      if ((param_1 < 0.5) || (local_70 = param_1, dStack_68 = param_2, param_2 < 0.5)) {
        dStack_68 = dStack_30;
        local_70 = local_38;
      }
      if ((local_70 < 0.5) || (local_118 = dStack_68, dStack_68 < 0.5)) {
        dVar4 = 1.0;
        local_118 = 1.0;
        FUN_001ebe58();
        local_80 = local_118;
        dStack_78 = dVar4;
        local_70 = local_118;
        dStack_68 = dVar4;
      }
      local_91 = 0;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_scale_026ca830);
      if (local_118 <= 0.0) {
        puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
        _objc_retainAutoreleasedReturnValue();
        local_91 = 1;
        local_90 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_scale_026ca830);
      }
      if ((local_91 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      local_88 = local_118;
      dStack_a8 = dStack_68;
      local_b0 = local_70;
      uVar3 = 0;
      _UIGraphicsBeginImageContextWithOptions(local_70,dStack_68,local_118);
      _UIGraphicsGetImageFromCurrentImageContext();
      _objc_retainAutoreleasedReturnValue();
      local_b8 = uVar3;
      _UIGraphicsEndImageContext();
      uVar3 = local_b8;
      if (local_b8 == 0) {
        local_28 = 0;
      }
      else {
        uVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_renderingMode_026a02c0);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_imageWithRenderingMode__026ca690,uVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_b8;
        local_b8 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar1);
        FUN_001eb7ec(local_b8);
        _objc_setAssociatedObject(local_40,DAT_026dfab0,local_b8,1);
        uVar3 = local_b8;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = uVar3;
      }
      local_44 = 1;
      _objc_storeStrong(&local_b8,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar3;
      local_44 = 1;
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

