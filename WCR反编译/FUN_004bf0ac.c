// FUN_004bf0ac @ 004bf0ac

void FUN_004bf0ac(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  (*DAT_028cabf0)(param_1,param_2);
  uVar1 = (uint)uVar2;
  FUN_004c10b4();
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrefine_addLongPressGesture_026a3ee0);
  }
  return;
}

