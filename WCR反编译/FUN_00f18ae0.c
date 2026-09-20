// FUN_00f18ae0 @ 00f18ae0

void FUN_00f18ae0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_30;
  undefined4 local_24;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (local_18 == 0) {
    local_24 = 1;
  }
  else {
    uVar1 = local_18;
    FUN_00f1d1f4();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    if ((uVar1 != 0) && (uVar1 != local_18)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_setM_nsTitle__026a59a8);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setM_nsTitle__026a59a8,local_20);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setM_nsTitle__026a59a8,local_20);
    _objc_storeStrong(&local_30,0);
    local_24 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

