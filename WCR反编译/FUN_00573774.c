// FUN_00573774 @ 00573774

void FUN_00573774(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_5);
  if (local_18 != 0) {
    uVar1 = local_18;
    uVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setWidth__0269feb0);
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_frame_026ca640);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,param_2,param_1,param_4,local_18,PTR_s_setFrame__026ca960);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,local_18,PTR_s_setWidth__0269feb0);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

