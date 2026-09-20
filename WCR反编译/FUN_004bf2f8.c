// FUN_004bf2f8 @ 004bf2f8

void FUN_004bf2f8(undefined8 param_1,undefined8 param_2,byte param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  (*DAT_028cac00)(param_1,param_2,param_3 & 1);
  uVar1 = (uint)uVar2;
  FUN_004c10b4();
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrefine_addLongPressGesture_026a3ee0);
  }
  return;
}

