// FUN_003e2108 @ 003e2108

void FUN_003e2108(ulong param_1)

{
  ulong uVar1;
  
  uVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_deleteAllReports_026a33c8);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_deleteAllReports_026a33c8);
  }
  FUN_003e3274(0x4014000000000000);
  return;
}

