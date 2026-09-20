// wcr_watermarkRectForLayer:renderSize: @ 006fd6ac

/* Function Stack Size: 0x28 bytes */

CGRect WCRefineScreenRecordingFrameProcessor::wcr_watermarkRectForLayer_renderSize_
                 (ID param_1,SEL param_2,ID param_3,CGSize param_4)

{
  CGRect CVar1;
  undefined *puVar2;
  double in_d0;
  double dVar3;
  double dVar4;
  double in_d1;
  double in_d2;
  double local_1d0;
  double local_108;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  undefined8 local_68;
  SEL local_60;
  ID local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  
  local_68 = 0;
  local_60 = param_2;
  local_58 = param_1;
  local_50 = in_d0;
  local_48 = in_d1;
  _objc_storeStrong(&local_68,param_3,param_3,param_4.field0_0x0,param_4.field1_0x8);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_opacity_026a1fa0);
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_centerX_026a72c0);
  local_90 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_centerY_026a72c8);
  local_88 = in_d0;
  if ((in_d0 <= 0.0) && (local_90 <= 0.0)) {
    local_88 = 0.5;
    local_90 = 0.5;
  }
  dVar3 = 0.0;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_scale_026ca830);
  local_1d0 = local_50;
  if (0.0 < dVar3) {
    puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_108 = in_d2;
    if (in_d2 <= 0.0) {
      local_108 = local_50;
    }
    dVar3 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_imageSize_026a7288);
    dVar4 = dVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_scale_026ca830);
    local_108 = (dVar3 * dVar4) / local_108;
    local_98 = local_50 * local_108;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_imageSize_026a7288);
    dVar3 = local_108;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_imageSize_026a7288);
    local_a0 = local_98 * (local_108 / dVar3);
  }
  else {
    dVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_imageSize_026a7288);
    dVar3 = local_48;
    local_1d0 = local_1d0 / dVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_imageSize_026a7288);
    if (local_1d0 < dVar3 / dVar4) {
      local_1d0 = dVar3 / dVar4;
    }
    local_98 = local_1d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_imageSize_026a7288);
    local_98 = local_98 * local_1d0;
    local_a0 = local_1d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_imageSize_026a7288);
    local_a0 = local_a0 * local_1d0;
  }
  dVar4 = local_50 * local_88 - local_98 / 2.0;
  dVar3 = local_48 * local_90 - local_a0 / 2.0;
  FUN_006f8f30();
  local_40 = dVar4;
  local_38 = dVar3;
  local_30 = local_98;
  local_28 = local_a0;
  _objc_storeStrong(&local_68,0);
  CVar1.field0_0x0.field1_0x8 = local_38;
  CVar1.field0_0x0.field0_0x0 = local_40;
  CVar1.field1_0x10.field0_0x0 = local_30;
  CVar1.field1_0x10.field1_0x8 = local_28;
  return CVar1;
}

