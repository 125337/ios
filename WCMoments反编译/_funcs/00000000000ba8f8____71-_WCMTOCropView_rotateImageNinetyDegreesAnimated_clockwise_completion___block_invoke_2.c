// ___71-[WCMTOCropView_rotateImageNinetyDegreesAnimated:clockwise:completion:]_block_invoke_2 @0xba8f8

void ___71__WCMTOCropView_rotateImageNinetyDegreesAnimated_clockwise_completion___block_invoke_2
               (long param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_f8;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  byte local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  undefined1 local_29;
  long local_28;
  
  local_38 = param_1;
  local_29 = param_2;
  local_28 = param_1;
  _objc_msgSend_backgroundContainerView(*(undefined8 *)(param_1 + 0x20));
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar2,local_f8,0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_foregroundContainerView(*(undefined8 *)(param_1 + 0x20),local_f8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar2,local_f8,0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  uVar1 = _objc_msgSend_translucencyAlwaysHidden(*(undefined8 *)(param_1 + 0x20),local_f8);
  _objc_msgSend_translucencyView(*(undefined8 *)(param_1 + 0x20),local_f8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar2,local_f8,uVar1);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_gridOverlayView(*(undefined8 *)(param_1 + 0x20),local_f8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setHidden_(uVar2,local_f8,0);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_backgroundContainerView(*(undefined8 *)(param_1 + 0x20),local_f8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAlpha_(uVar2,local_f8);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_gridOverlayView(*(undefined8 *)(param_1 + 0x20),local_f8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAlpha_(0,uVar2,local_f8);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_msgSend_translucencyView(*(undefined8 *)(param_1 + 0x20),local_f8);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setAlpha_(0x3ff0000000000000,uVar2,local_f8);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  local_68 = PTR___NSConcreteStackBlock_001104f0;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = 
  ___71__WCMTOCropView_rotateImageNinetyDegreesAnimated_clockwise_completion___block_invoke_3;
  local_50 = &___block_descriptor_48_e8_32s40s_e5_v8__0l;
  local_48 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x28));
  local_40 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
  local_88 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
  local_80 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x28));
  local_70 = *(byte *)(param_1 + 0x38) & 1;
  local_78 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x30));
  _objc_msgSend_animateWithDuration_animations_completion_
            (0x3fdcccccc0000000,&_OBJC_CLASS___UIView,local_f8,&local_68);
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_48,0);
  return;
}

