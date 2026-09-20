// FUN_008d6ae0 @ 008d6ae0

void FUN_008d6ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_5);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setX__026a5d38);
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_frame_026ca640);
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,param_2,param_3,param_4,local_18,PTR_s_setFrame__026ca960);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,local_18,PTR_s_setX__026a5d38);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

