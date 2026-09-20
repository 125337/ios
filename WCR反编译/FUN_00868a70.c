// FUN_00868a70 @ 00868a70

void FUN_00868a70(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = param_1;
  FUN_00888a08();
  if ((uVar1 & 1) == 0) {
    (*DAT_028cd500)(param_1,param_2);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_swithOutputToMicroPhone_026a9190);
  }
  return;
}

