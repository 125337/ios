// FUN_00214394 @ 00214394

undefined1  [16] FUN_00214394(double param_1,double param_2,undefined8 param_3)

{
  bool bVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  undefined *puVar4;
  double dVar5;
  ulong local_60 [3];
  ulong local_48;
  uint local_3c;
  ulong local_38;
  double local_30;
  double dStack_28;
  
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  if (local_38 == 0) {
    dStack_28 = *(double *)(PTR__CGSizeZero_025782f8 + 8);
    local_30 = *(double *)PTR__CGSizeZero_025782f8;
    local_3c = 1;
    goto LAB_002146cc;
  }
  uVar3 = local_38;
  _objc_getAssociatedObject(local_38,&DAT_028c9199);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSValue_026ce1f0;
  local_48 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  if ((((uVar3 & 1) == 0) ||
      ((*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_CGSizeValue_0269ec50),
      local_30 = param_1, dStack_28 = param_2, param_1 <= 0.0)) ||
     (param_1 = param_2, param_2 <= 0.0)) {
    uVar3 = local_38;
    puVar4 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar3 & 1) != 0) {
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_image_026ca678);
      _objc_retainAutoreleasedReturnValue();
      local_60[0] = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_size_026cab00);
      bVar1 = false;
      dVar5 = param_1;
      if (0.0 < param_1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_size_026cab00);
        bVar1 = 0.0 < dVar5;
      }
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_size_026cab00);
        local_30 = dVar5;
        dStack_28 = param_1;
      }
      local_3c = (uint)bVar1;
      _objc_storeStrong(local_60,0);
      if (local_3c != 0) goto LAB_002146ac;
    }
    dStack_28 = *(double *)(PTR__CGSizeZero_025782f8 + 8);
    local_30 = *(double *)PTR__CGSizeZero_025782f8;
    local_3c = 1;
  }
  else {
    local_3c = 1;
  }
LAB_002146ac:
  _objc_storeStrong(&local_48,0);
LAB_002146cc:
  _objc_storeStrong(&local_38,0);
  auVar2._8_8_ = dStack_28;
  auVar2._0_8_ = local_30;
  return auVar2;
}

