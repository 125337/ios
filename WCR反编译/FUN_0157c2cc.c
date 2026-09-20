// FUN_0157c2cc @ 0157c2cc

byte FUN_0157c2cc(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    FUN_0157b998();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_becomeFirstResponder_0269d108);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_becomeFirstResponder_0269d108);
    }
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_insertText__026a43a8);
    if ((uVar1 & 1) == 0) {
      FUN_01562e38();
      _objc_retainAutoreleasedReturnValue();
      local_48 = 0;
      local_40 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_textView_0269d0f8);
      if ((uVar1 & 1) != 0) {
        uVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_textView_0269d0f8);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_48;
        local_48 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      if ((local_48 == 0) &&
         (uVar1 = local_40,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_m_textView_0269d100),
         (uVar1 & 1) != 0)) {
        uVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_m_textView_0269d100);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_48;
        local_48 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      uVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_becomeFirstResponder_0269d108);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_becomeFirstResponder_0269d108);
      }
      uVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_insertText__026a43a8);
      local_11 = (uVar1 & 1) != 0;
      if ((bool)local_11) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_insertText__026a43a8,local_28);
      }
      local_2c = 1;
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_40,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_insertText__026a43a8,local_28);
      local_11 = 1;
      local_2c = 1;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

