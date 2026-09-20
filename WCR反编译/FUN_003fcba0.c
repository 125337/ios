// FUN_003fcba0 @ 003fcba0

void FUN_003fcba0(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_003fe19c();
  if (((uVar1 & 1) == 0) && (FUN_00400c3c(), (uVar1 & 1) != 0)) {
    FUN_00400d94();
    FUN_00400db4();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_startIPadLoginLogic_026a3520);
    FUN_00400dd8();
  }
  else {
    (*DAT_028ca638)(param_1,param_2);
  }
  return;
}

