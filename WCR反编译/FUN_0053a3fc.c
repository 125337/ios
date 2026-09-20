// FUN_0053a3fc @ 0053a3fc

byte FUN_0053a3fc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  byte local_11;
  
  uVar1 = param_1;
  FUN_0053a8c8();
  if ((uVar1 & 1) == 0) {
    (*DAT_028cb298)(param_1,param_2);
    local_11 = (byte)param_1 & 1;
  }
  else {
    local_11 = 0;
  }
  return local_11;
}

