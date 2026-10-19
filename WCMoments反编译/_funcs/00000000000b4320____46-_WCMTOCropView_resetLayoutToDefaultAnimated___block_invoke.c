// ___46-[WCMTOCropView_resetLayoutToDefaultAnimated:]_block_invoke @0xb4320

void ___46__WCMTOCropView_resetLayoutToDefaultAnimated___block_invoke(long param_1)

{
  undefined8 local_a8;
  undefined8 local_50;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_48 = PTR___NSConcreteStackBlock_001104f0;
  local_40 = 0xc2000000;
  local_3c = 0;
  local_38 = ___46__WCMTOCropView_resetLayoutToDefaultAnimated___block_invoke_2;
  local_30 = &___block_descriptor_40_e8_32s_e5_v8__0l;
  local_20 = param_1;
  local_18 = param_1;
  local_28 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
  local_50 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
  _objc_msgSend_animateWithDuration_delay_usingSpringWithDamping_initialSpringVelocity_options_animations_completion_
            (0x3fe0000000000000,0,0x3ff0000000000000,&_OBJC_CLASS___UIView,local_a8,4,&local_48);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_28,0);
  return;
}

