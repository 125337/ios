// FUN_0014d558 @ 0014d558

byte FUN_0014d558(undefined8 param_1)

{
  ulong uVar1;
  ulong local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    local_30 = 0;
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_textView_0269d0f8);
    if ((uVar1 & 1) != 0) {
      local_30 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_textView_0269d0f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
    }
    if (local_30 == 0) {
      uVar1 = local_20;
      _object_getClass();
      _class_getInstanceVariable(uVar1,"_textView");
      if (uVar1 != 0) {
        local_30 = local_20;
        _object_getIvar(local_20,uVar1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
      }
    }
    if (local_30 < 0x10000) {
      local_11 = 0;
    }
    else {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_isFirstResponder_0269f488);
      if ((uVar1 & 1) == 0) {
        local_11 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isFirstResponder_0269f488);
        local_11 = (byte)local_30 & 1;
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

