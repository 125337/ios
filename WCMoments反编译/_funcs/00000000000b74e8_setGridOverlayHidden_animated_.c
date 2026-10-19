// setGridOverlayHidden:animated: @0xb74e8

/* Function Stack Size: 0x18 bytes */

void WCMTOCropView::setGridOverlayHidden_animated_(ID param_1,SEL param_2,bool param_3,bool param_4)

{
  undefined8 uVar1;
  float fVar2;
  undefined8 local_68;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  byte local_28;
  undefined1 local_22;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_22 = (undefined1)param_4;
  *(byte *)(param_1 + (long)_gridOverlayHidden) = local_21 & 1;
  local_20 = param_2;
  local_18 = param_1;
  if ((param_4 & 1) == 0) {
    fVar2 = 0.0;
    if ((param_3 & 1) == 0) {
      fVar2 = 1.0;
    }
    _objc_msgSend_gridOverlayView(param_3 & 1,param_1,local_68);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setAlpha_((double)fVar2,uVar1,local_68);
    (*(code *)PTR__objc_release_00110458)(uVar1);
  }
  else {
    fVar2 = 1.0;
    if ((param_3 & 1) == 0) {
      fVar2 = 0.0;
    }
    _objc_msgSend_gridOverlayView(param_3 & 1,param_1,local_68);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setAlpha_((double)fVar2,uVar1,local_68);
    (*(code *)PTR__objc_release_00110458)(uVar1);
    local_50 = PTR___NSConcreteStackBlock_001104f0;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = ___47__WCMTOCropView_setGridOverlayHidden_animated___block_invoke;
    local_38 = &___block_descriptor_41_e8_32s_e5_v8__0l;
    local_30 = (*(code *)PTR__objc_retain_00110460)(local_18);
    local_28 = local_21 & 1;
    _objc_msgSend_animateWithDuration_animations_
              (0x3fd99999a0000000,&_OBJC_CLASS___UIView,local_68,&local_50);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

