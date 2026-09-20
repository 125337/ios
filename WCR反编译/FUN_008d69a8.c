// FUN_008d69a8 @ 008d69a8

undefined8
FUN_008d69a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  ulong uVar1;
  undefined8 local_60;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_5);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_width_026a12d0);
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_frame_026ca640);
    _CGRectGetWidth(param_1,param_2,param_3,param_4);
    local_60 = param_1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_width_026a12d0);
    local_60 = param_1;
  }
  _objc_storeStrong(&local_18,0);
  return local_60;
}

