// FUN_00434ed8 @ 00434ed8

void FUN_00434ed8(float param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  float local_30;
  
  uVar1 = param_2;
  FUN_00437f68();
  local_30 = param_1;
  if (((uVar1 & 1) != 0) && (FUN_00438128(param_1), (uVar1 & 1) != 0)) {
    local_30 = 18000.0;
  }
  FUN_0043808c((double)param_1,(double)local_30,param_2,&cf_writer_max,0,0);
  (*DAT_028ca8f8)(local_30,param_2,param_3);
  return;
}

