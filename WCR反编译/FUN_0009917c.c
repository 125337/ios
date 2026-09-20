// FUN_0009917c @ 0009917c

byte FUN_0009917c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte local_11;
  
  uVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isSender_0269d1b0);
  uVar2 = param_1;
  FUN_0009a0c0(param_1,(byte)uVar1 & 1);
  if ((uVar2 & 1) == 0) {
    (*DAT_028c7fa8)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  else {
    local_11 = 0;
  }
  return local_11;
}

