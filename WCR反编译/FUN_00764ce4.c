// FUN_00764ce4 @ 00764ce4

void FUN_00764ce4(undefined8 param_1,undefined8 param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 != 0) && (local_20 != 0)) {
    if ((param_3 & 1) == 0) {
      _objc_setAssociatedObject(local_18,DAT_026f45f0,0,3);
      _objc_setAssociatedObject(local_18,DAT_026f45f8,0,1);
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_textColor_0269f098);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if ((uVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTextColor__026caa98,local_20);
      }
    }
    else {
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_textColor_0269f098);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_20;
      (*(code *)PTR__objc_release_02578630)();
      if (uVar2 != uVar1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTextColor__026caa98,local_20);
      }
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

