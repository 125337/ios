// swipeCategory: @0xba00

/* Function Stack Size: 0x18 bytes */

void WCMInboxController::swipeCategory_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  double in_d1;
  undefined8 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  long local_60;
  long local_58;
  double local_50;
  double local_40;
  double local_38;
  undefined4 local_2c;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = _objc_msgSend_state(local_28,local_90);
  uVar3 = local_28;
  if (lVar1 == 3) {
    _objc_msgSend_view(local_18,local_90);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    local_40 = (double)_objc_msgSend_translationInView_(uVar3,local_90);
    local_38 = in_d1;
    (*(code *)PTR__objc_release_00110458)(uVar2);
    uVar3 = local_28;
    _objc_msgSend_view(local_18,local_90);
    uVar2 = _objc_retainAutoreleasedReturnValue();
    local_50 = (double)_objc_msgSend_velocityInView_(uVar3,local_90);
    (*(code *)PTR__objc_release_00110458)(uVar2);
    if ((ABS(local_40) < 44.0) || (ABS(local_40) < ABS(local_38) * 1.4)) {
      local_2c = 1;
    }
    else if ((0.0 <= local_40 * local_50) || (ABS(local_50) <= 120.0)) {
      _objc_msgSend_categories(local_18,local_90);
      uVar3 = _objc_retainAutoreleasedReturnValue();
      local_58 = _objc_msgSend_selectedSegmentIndex(uVar3,local_90);
      iVar4 = -1;
      if (local_40 < 0.0) {
        iVar4 = 1;
      }
      local_58 = local_58 + iVar4;
      (*(code *)PTR__objc_release_00110458)(uVar3);
      if ((local_58 < 0) || (2 < local_58)) {
        local_2c = 1;
      }
      else {
        local_88 = PTR___NSConcreteStackBlock_001104f0;
        local_80 = 0xc2000000;
        local_7c = 0;
        local_78 = ___36__WCMInboxController_swipeCategory___block_invoke;
        local_70 = &___block_descriptor_48_e8_32s_e5_v8__0l;
        local_68 = (*(code *)PTR__objc_retain_00110460)(local_18);
        local_60 = local_58;
        _objc_msgSend_animateWithDuration_delay_options_animations_completion_
                  (0x3fc999999999999a,0,&_OBJC_CLASS___UIView,local_90,6,&local_88);
        _objc_msgSend_changeCategory(local_18,local_90);
        _objc_storeStrong(&local_68,0);
        local_2c = 0;
      }
    }
    else {
      local_2c = 1;
    }
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

