// isChatInputGrowTextView: @ 00fe8b7c

/* Function Stack Size: 0x18 bytes */

bool WCRefineInputBoxGestureSupport::isChatInputGrowTextView_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsString__0269d0b0,&cf_MMGrowTextView);
    if ((uVar1 & 1) == 0) {
      local_11 = 0;
    }
    else {
      IVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_inputToolViewFromGrowTextView__026a34c0,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_11 = IVar2 != 0;
      (*(code *)PTR__objc_release_02578630)();
    }
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

