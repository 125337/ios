// handlePinch: @ 01fa3720

/* Function Stack Size: 0x18 bytes */

void WCRefineWatermarkEditorViewController::handlePinch_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 in_d0;
  undefined8 uVar3;
  undefined8 in_d1;
  undefined8 uVar4;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 uVar5;
  undefined1 auStack_150 [48];
  undefined1 auStack_120 [48];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined1 auStack_d0 [48];
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [48];
  undefined8 local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
  if ((lVar1 == 1) ||
     (lVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20),
     lVar1 == 2)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_scale_026ca830);
    local_40 = in_d0;
    if (*(long *)(local_28 + (long)_watermarkContainerView) == 0) {
      _memset(auStack_a0,0,0x30);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (auStack_a0,*(long *)(local_28 + (long)_watermarkContainerView),
                 PTR_s_transform_0269e178);
    }
    _CGAffineTransformScale(local_40,local_40,auStack_a0);
    uVar2 = *(undefined8 *)(local_28 + (long)_watermarkContainerView);
    _memcpy(auStack_d0,auStack_70,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setTransform__026caad0,auStack_d0);
    (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_38,PTR_s_setScale__026caa28);
  }
  else {
    lVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
    if (lVar1 == 3) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(local_28 + (long)_watermarkContainerView),PTR_s_frame_026ca640);
      local_f0 = in_d0;
      local_e8 = in_d1;
      local_e0 = in_d2;
      local_d8 = in_d3;
      _memcpy(auStack_120,PTR__CGAffineTransformIdentity_025782d8,0x30);
      uVar2 = *(undefined8 *)(local_28 + (long)_watermarkContainerView);
      _memcpy(auStack_150,auStack_120,0x30);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setTransform__026caad0,auStack_150);
      uVar4 = 0;
      uVar3 = 0;
      uVar2 = local_e0;
      uVar5 = local_d8;
      FUN_01fa0f08();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,uVar4,uVar2,uVar5,*(undefined8 *)(local_28 + (long)_watermarkContainerView),
                 PTR_s_setBounds__026ca8a0);
      uVar2 = local_f0;
      _CGRectGetMidX(local_f0,local_e8,local_e0,local_d8);
      _CGRectGetMidY(local_f0,local_e8,local_e0,local_d8);
      FUN_01fa2e4c();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,local_f0,*(undefined8 *)(local_28 + (long)_watermarkContainerView),
                 PTR_s_setCenter__026ca8c0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateWatermarkPreview_026c9d58);
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

