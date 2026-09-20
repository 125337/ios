// FUN_008689b0 @ 008689b0

void FUN_008689b0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_00888a08();
  if ((uVar1 & 1) == 0) {
    (*DAT_028cd4f0)(param_1,param_2);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setSpeakerMode_026a9180);
  }
  return;
}

