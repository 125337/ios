// setEditing:resetCropBox:animated: @0xb7af4

/* Function Stack Size: 0x1c bytes */

void WCMTOCropView::setEditing_resetCropBox_animated_
               (ID param_1,SEL param_2,bool param_3,bool param_4,bool param_5)

{
  double dVar1;
  double dVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  float fVar6;
  undefined8 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  byte local_40;
  double local_38;
  double local_30;
  byte local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_22 = (byte)param_4;
  local_23 = (byte)param_5;
  if ((param_3 & 1) != (*(byte *)(param_1 + (long)_editing) & 1)) {
    *(byte *)(param_1 + (long)_editing) = local_21 & 1;
    local_24 = (*(byte *)(param_1 + (long)_editing) ^ 1) & 1;
    local_20 = param_2;
    local_18 = param_1;
    uVar3 = _objc_msgSend_alwaysShowCroppingGrid(param_1,local_70);
    if ((uVar3 & 1) != 0) {
      local_24 = 0;
    }
    _objc_msgSend_gridOverlayView(local_18,local_70);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setGridHidden_animated_(uVar4,local_70,local_24 & 1,local_23 & 1);
    (*(code *)PTR__objc_release_00110458)(uVar4);
    if ((local_22 & 1) != 0) {
      _objc_msgSend_moveCroppedContentToCenterAnimated_(local_18,local_70,local_23 & 1);
      _objc_msgSend_captureStateForImageRotation(local_18,local_70);
      uVar4 = _objc_msgSend_angle(local_18,local_70);
      _objc_msgSend_setCropBoxLastEditedAngle_(local_18,local_70,uVar4);
    }
    if ((local_23 & 1) == 0) {
      _objc_msgSend_toggleTranslucencyViewVisible_(local_18,local_70,(local_21 ^ 1) & 1);
    }
    else {
      fVar6 = 0.05;
      if ((local_21 & 1) == 0) {
        fVar6 = 0.35;
      }
      local_30 = (double)fVar6;
      fVar6 = 0.0;
      if ((local_21 & 1) == 0) {
        fVar6 = 0.35;
      }
      local_38 = (double)fVar6;
      lVar5 = _objc_msgSend_croppingStyle(local_21 & 1,local_18,local_70);
      dVar2 = local_30;
      if (lVar5 == 1) {
        local_38 = 0.0;
      }
      dVar1 = local_38;
      local_68 = PTR___NSConcreteStackBlock_001104f0;
      local_60 = 0xc2000000;
      local_5c = 0;
      local_58 = ___50__WCMTOCropView_setEditing_resetCropBox_animated___block_invoke;
      local_50 = &___block_descriptor_41_e8_32s_e5_v8__0l;
      local_48 = (*(code *)PTR__objc_retain_00110460)(local_18);
      local_40 = local_21 & 1;
      _objc_msgSend_animateKeyframesWithDuration_delay_options_animations_completion_
                (dVar2,dVar1,&_OBJC_CLASS___UIView,local_70,0,&local_68);
      _objc_storeStrong(&local_48,0);
    }
  }
  return;
}

