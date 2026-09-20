// FUN_00f94944 @ 00f94944

void FUN_00f94944(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_60;
  undefined *puStack_58;
  ulong local_48;
  long local_40;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  ulong local_20;
  undefined8 local_18;
  
  local_60 = *(ulong *)(param_1 + 0x20);
  local_40 = param_1;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_textView_0269d0f8);
  _objc_retainAutoreleasedReturnValue();
  local_48 = local_60;
  if (local_60 != 0) {
    puStack_58 = PTR_s_selectedRange_026a43a0;
    (*(code *)PTR__objc_msgSend_02578628)();
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((local_60 == 0x7fffffffffffffff) || (uVar2 < local_60)) {
      local_30 = 0;
      local_18 = 0;
      puStack_58 = (undefined *)0x0;
      local_60 = uVar2;
      local_28 = uVar2;
      local_20 = uVar2;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_scrollRangeToVisible__026aa0d8,local_60,puStack_58);
  }
  _objc_storeStrong(&local_48,0);
  return;
}

