// hideWithAnimation: @0x87d50

/* Function Stack Size: 0x14 bytes */

void WCMYBIBSheetView::hideWithAnimation_(ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  undefined8 local_c8;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  long local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  long local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSend_superview(param_1);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)();
  local_88 = PTR___NSConcreteStackBlock_001104f0;
  if (lVar1 != 0) {
    local_58 = PTR___NSConcreteStackBlock_001104f0;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = ___38__WCMYBIBSheetView_hideWithAnimation___block_invoke;
    local_40 = &___block_descriptor_40_e8_32s_e5_v8__0l;
    local_38 = (*(code *)PTR__objc_retain_00110460)(local_18);
    local_30 = _objc_retainBlock(&local_58);
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = ___38__WCMYBIBSheetView_hideWithAnimation___block_invoke_2;
    local_70 = &___block_descriptor_40_e8_32s_e8_v12__0B8l;
    local_68 = (*(code *)PTR__objc_retain_00110460)(local_18);
    local_60 = _objc_retainBlock(&local_88);
    if ((local_21 & 1) == 0) {
      (**(code **)(local_30 + 0x10))();
      (**(code **)(local_60 + 0x10))(local_60,0);
    }
    else {
      _objc_msgSend_hideDuration(local_18,local_c8);
      _objc_msgSend_animateWithDuration_animations_completion_
                (&_OBJC_CLASS___UIView,local_c8,local_30,local_60);
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_30,0);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

