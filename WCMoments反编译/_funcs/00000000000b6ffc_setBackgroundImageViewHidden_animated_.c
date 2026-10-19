// setBackgroundImageViewHidden:animated: @0xb6ffc

/* Function Stack Size: 0x18 bytes */

void WCMTOCropView::setBackgroundImageViewHidden_animated_
               (ID param_1,SEL param_2,bool param_3,bool param_4)

{
  undefined *puVar1;
  double dVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined8 local_c0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  byte local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  double local_50;
  double local_48;
  double local_40;
  undefined1 local_32;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  local_31 = (byte)param_3;
  local_32 = (undefined1)param_4;
  local_30 = param_2;
  local_28 = param_1;
  if ((param_4 & 1) == 0) {
    _objc_msgSend_backgroundImageView(param_1,local_c0);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setHidden_(uVar3,local_c0,param_3 & 1);
    (*(code *)PTR__objc_release_00110458)(uVar3);
  }
  else {
    fVar4 = 0.0;
    fVar5 = 1.0;
    if ((param_3 & 1) == 0) {
      fVar5 = 0.0;
    }
    local_40 = (double)fVar5;
    if ((param_3 & 1) == 0) {
      fVar4 = 1.0;
    }
    local_48 = (double)fVar4;
    _objc_msgSend_backgroundImageView(param_3 & 1,param_1,local_c0);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setHidden_(uVar3,local_c0,0);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    dVar2 = local_40;
    _objc_msgSend_backgroundImageView(local_28,local_c0);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_setAlpha_(dVar2,uVar3,local_c0);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    puVar1 = PTR___NSConcreteStackBlock_001104f0;
    local_78 = PTR___NSConcreteStackBlock_001104f0;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = ___55__WCMTOCropView_setBackgroundImageViewHidden_animated___block_invoke;
    local_60 = &___block_descriptor_48_e8_32s_e5_v8__0l;
    local_58 = (*(code *)PTR__objc_retain_00110460)(local_28);
    local_50 = local_48;
    local_a8 = puVar1;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = ___55__WCMTOCropView_setBackgroundImageViewHidden_animated___block_invoke_17;
    local_90 = &___block_descriptor_41_e8_32s_e8_v12__0B8l;
    local_80 = local_31 & 1;
    local_88 = (*(code *)PTR__objc_retain_00110460)(local_28);
    _objc_msgSend_animateWithDuration_animations_completion_
              (0x3fe0000000000000,&_OBJC_CLASS___UIView,local_c0,&local_78,&local_a8);
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_58,0);
  }
  return;
}

