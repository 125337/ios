// setSimpleRenderMode:animated: @0xb88e4

/* Function Stack Size: 0x18 bytes */

void WCMTOCropView::setSimpleRenderMode_animated_(ID param_1,SEL param_2,bool param_3,bool param_4)

{
  undefined8 local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  byte local_28;
  byte local_22;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_22 = (byte)param_4;
  if ((param_3 & 1) != (*(byte *)(param_1 + (long)_simpleRenderMode) & 1)) {
    *(byte *)(param_1 + (long)_simpleRenderMode) = local_21 & 1;
    local_20 = param_2;
    local_18 = param_1;
    _objc_msgSend_setEditing_(param_1,local_58,0);
    if ((local_22 & 1) == 0) {
      _objc_msgSend_toggleTranslucencyViewVisible_(local_18,local_58,(local_21 ^ 1) & 1);
    }
    else {
      local_50 = PTR___NSConcreteStackBlock_001104f0;
      local_48 = 0xc2000000;
      local_44 = 0;
      local_40 = ___46__WCMTOCropView_setSimpleRenderMode_animated___block_invoke;
      local_38 = &___block_descriptor_41_e8_32s_e5_v8__0l;
      local_30 = (*(code *)PTR__objc_retain_00110460)(local_18);
      local_28 = local_21 & 1;
      _objc_msgSend_animateWithDuration_animations_
                (0x3fd0000000000000,&_OBJC_CLASS___UIView,local_58,&local_50);
      _objc_storeStrong(&local_30,0);
    }
  }
  return;
}

