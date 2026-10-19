// dragHeader: @0xf348

/* Function Stack Size: 0x18 bytes */

void WCMCommentPresentation::dragHeader_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  double in_d1;
  undefined8 local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  double local_38;
  undefined4 local_2c;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = _objc_msgSend_state(local_28,local_78);
  uVar1 = local_28;
  if (lVar2 == 3) {
    _objc_msgSend_presentedView(local_18,local_78);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    local_48 = _objc_msgSend_translationInView_(uVar1,local_78);
    (*(code *)PTR__objc_release_00110458)(uVar3);
    local_38 = in_d1;
    if ((in_d1 <= 90.0) || (uVar4 = _objc_msgSend_expanded(local_18,local_78), (uVar4 & 1) != 0)) {
      if (35.0 <= ABS(local_38)) {
        _objc_msgSend_setExpanded_(local_18,local_78,local_38 < 0.0);
        local_70 = PTR___NSConcreteStackBlock_001104f0;
        local_68 = 0xc2000000;
        local_64 = 0;
        local_60 = ___37__WCMCommentPresentation_dragHeader___block_invoke;
        local_58 = &___block_descriptor_40_e8_32s_e5_v8__0l;
        local_50 = (*(code *)PTR__objc_retain_00110460)(local_18);
        _objc_msgSend_animateWithDuration_delay_options_animations_completion_
                  (0x3fd1eb851eb851ec,0,&_OBJC_CLASS___UIView,local_78,0,&local_70);
        _objc_storeStrong(&local_50,0);
        local_2c = 0;
      }
      else {
        local_2c = 1;
      }
    }
    else {
      _objc_msgSend_dismissPanel(local_18,local_78);
      local_2c = 1;
    }
  }
  else {
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

