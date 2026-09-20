// FUN_003ec73c @ 003ec73c

void FUN_003ec73c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong local_f8;
  ulong local_58;
  ulong local_50;
  ulong local_48 [3];
  ulong local_30;
  undefined8 local_28;
  
  local_48[0] = 0;
  _objc_storeStrong(local_48,param_1);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_2);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_3);
  uVar1 = local_48[0];
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48[0],PTR_s_respondsToSelector__026ca818,PTR_s_setText__026caa88);
  if ((uVar1 & 1) == 0) {
    if (local_50 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setText__026caa88,local_58);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_setText__026caa88,local_58);
  }
  if ((local_50 != 0) &&
     (uVar1 = local_50,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setSelectedRange__026a0d48),
     (uVar1 & 1) != 0)) {
    local_f8 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if (param_4 < local_f8) {
      local_f8 = param_4;
    }
    local_48[2] = local_f8;
    local_48[1] = 0;
    local_30 = local_f8;
    local_28 = 0;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setSelectedRange__026a0d48,local_f8,0);
  }
  uVar1 = local_48[0];
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48[0],PTR_s_respondsToSelector__026ca818,PTR_s_saveTextSelectRange_026a0d50);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_saveTextSelectRange_026a0d50);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(local_48,0);
  return;
}

