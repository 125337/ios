// ___58-[WCMTOCropViewControllerTransitioning_animateTransition:]_block_invoke.2 @0xad83c

void ___58__WCMTOCropViewControllerTransitioning_animateTransition___block_invoke_2
               (long param_1,undefined1 param_2)

{
  undefined8 local_b0;
  undefined8 local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_28;
  undefined1 local_19;
  long local_18;
  
  local_50 = PTR___NSConcreteStackBlock_001104f0;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = ___58__WCMTOCropViewControllerTransitioning_animateTransition___block_invoke_2;
  local_38 = &___block_descriptor_40_e8_32s_e5_v8__0l;
  local_28 = param_1;
  local_19 = param_2;
  local_18 = param_1;
  local_30 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
  local_58 = (*(code *)PTR__objc_retain_00110460)(*(undefined8 *)(param_1 + 0x20));
  _objc_msgSend_animateWithDuration_animations_completion_
            (0x3fd0000000000000,&_OBJC_CLASS___UIView,local_b0,&local_50);
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_30,0);
  return;
}

