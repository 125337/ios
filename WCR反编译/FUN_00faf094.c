// FUN_00faf094 @ 00faf094

void FUN_00faf094(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong local_30;
  int local_24;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_currentLogicController_0269d470);
  uVar3 = local_20;
  if ((uVar1 & 1) == 0) {
    local_24 = 1;
  }
  else {
    pcVar2 = &cf_PresentModalViewController_animated_forceFullScreen_completion_;
    _NSSelectorFromString(&cf_PresentModalViewController_animated_forceFullScreen_completion_);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_respondsToSelector__026ca818,pcVar2);
    if ((uVar3 & 1) == 0) {
      local_24 = 1;
    }
    else {
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentLogicController_0269d470);
      _objc_retainAutoreleasedReturnValue();
      local_30 = uVar3;
      if (uVar3 == 0) {
        local_24 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_setBPresent__026ad0d0);
        if ((uVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setBPresent__026ad0d0,1);
        }
        uVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_setBAnimation__026ad0d8);
        if ((uVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setBAnimation__026ad0d8,1);
        }
        local_24 = 0;
      }
      _objc_storeStrong(&local_30,0);
      if (local_24 == 0) {
        local_24 = 0;
      }
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

