// setCroppingViewsHidden:animated: @0xb6cf0

/* Function Stack Size: 0x18 bytes */

void WCMTOCropView::setCroppingViewsHidden_animated_
               (ID param_1,SEL param_2,bool param_3,bool param_4)

{
  undefined8 uVar1;
  float fVar2;
  double dVar3;
  undefined8 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  double local_40;
  byte local_38;
  double local_30;
  undefined1 local_22;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_22 = (undefined1)param_4;
  if ((*(byte *)(param_1 + (long)_croppingViewsHidden) & 1) != (local_21 & 1)) {
    *(byte *)(param_1 + (long)_croppingViewsHidden) = local_21 & 1;
    fVar2 = 0.0;
    if ((param_3 & 1) == 0) {
      fVar2 = 1.0;
    }
    dVar3 = (double)fVar2;
    local_30 = dVar3;
    local_20 = param_2;
    local_18 = param_1;
    if ((param_4 & 1) == 0) {
      _objc_msgSend_backgroundImageView(param_1,local_70);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setAlpha_(dVar3,uVar1,local_70);
      (*(code *)PTR__objc_release_00110458)(uVar1);
      dVar3 = local_30;
      _objc_msgSend_foregroundContainerView(local_18,local_70);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setAlpha_(dVar3,uVar1,local_70);
      (*(code *)PTR__objc_release_00110458)(uVar1);
      dVar3 = local_30;
      _objc_msgSend_gridOverlayView(local_18,local_70);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setAlpha_(dVar3,uVar1,local_70);
      (*(code *)PTR__objc_release_00110458)(uVar1);
      _objc_msgSend_toggleTranslucencyViewVisible_(local_18,local_70,(local_21 ^ 1) & 1);
    }
    else {
      _objc_msgSend_foregroundContainerView(param_1,local_70);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setAlpha_(dVar3,uVar1,local_70);
      (*(code *)PTR__objc_release_00110458)(uVar1);
      dVar3 = local_30;
      _objc_msgSend_backgroundImageView(local_18,local_70);
      uVar1 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend_setAlpha_(dVar3,uVar1,local_70);
      (*(code *)PTR__objc_release_00110458)(uVar1);
      local_68 = PTR___NSConcreteStackBlock_001104f0;
      local_60 = 0xc2000000;
      local_5c = 0;
      local_58 = ___49__WCMTOCropView_setCroppingViewsHidden_animated___block_invoke;
      local_50 = &___block_descriptor_49_e8_32s_e5_v8__0l;
      local_48 = (*(code *)PTR__objc_retain_00110460)(local_18);
      local_38 = local_21 & 1;
      local_40 = local_30;
      _objc_msgSend_animateWithDuration_animations_
                (0x3fd99999a0000000,&_OBJC_CLASS___UIView,local_70,&local_68);
      _objc_storeStrong(&local_48,0);
    }
  }
  return;
}

