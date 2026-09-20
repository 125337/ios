// FUN_00efa5f8 @ 00efa5f8

byte FUN_00efa5f8(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong local_40;
  ulong local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_becomeFirstResponder_0269d108);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_becomeFirstResponder_0269d108);
  }
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_textView_0269d0f8);
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    local_40 = 0;
  }
  else {
    local_40 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_textView_0269d0f8);
    _objc_retainAutoreleasedReturnValue();
    local_30 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_40;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_becomeFirstResponder_0269d108);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_becomeFirstResponder_0269d108);
  }
  uVar2 = local_20;
  FUN_00ef9544(local_20,&cf_insertString_,&cf__);
  if ((uVar2 & 1) == 0) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_insertString__0269dc28);
    if ((uVar2 & 1) == 0) {
      uVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_insertText__026a43a8);
      if ((uVar2 & 1) == 0) {
        local_11 = 0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_insertText__026a43a8,&cf__);
        local_11 = 1;
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_insertString__0269dc28,&cf__);
      local_11 = 1;
    }
  }
  else {
    local_11 = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

