// FUN_004ccffc @ 004ccffc

void FUN_004ccffc(long param_1)

{
  ulong uVar1;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_focusSearchBar_0269eaa8);
  if ((uVar1 & 1) == 0) {
    uVar1 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_searchTextField_0269e9f8);
    if ((uVar1 & 1) != 0) {
      uVar1 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_performSelector__026ca7b8,PTR_s_searchTextField_0269e9f8);
      _objc_retainAutoreleasedReturnValue();
      local_28 = uVar1;
      if ((uVar1 != 0) &&
         ((*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_becomeFirstResponder_0269d108),
         (uVar1 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_performSelector__026ca7b8,PTR_s_becomeFirstResponder_0269d108);
      }
      _objc_storeStrong(&local_28,0);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_performSelector__026ca7b8,
               PTR_s_focusSearchBar_0269eaa8);
  }
  return;
}

