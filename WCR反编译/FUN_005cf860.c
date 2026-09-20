// FUN_005cf860 @ 005cf860

void FUN_005cf860(long param_1)

{
  ulong uVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(param_1 + 0x20);
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if ((lVar2 == 0) || (local_28 == 0)) {
    local_38 = 1;
  }
  else {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_textView);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = &cf_insertString_;
    local_40 = uVar1;
    _NSSelectorFromString();
    if ((local_40 == 0) ||
       (uVar1 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,pcVar3),
       (uVar1 & 1) == 0)) {
      if (local_40 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_setValue_forKey__0269d300,*(undefined8 *)(param_1 + 0x20),&cf_text
                  );
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,pcVar3,*(undefined8 *)(param_1 + 0x20));
    }
    _objc_storeStrong(&local_40,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

