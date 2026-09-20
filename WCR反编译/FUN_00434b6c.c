// FUN_00434b6c @ 00434b6c

float FUN_00434b6c(float param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  float local_34;
  
  uVar1 = param_2;
  (*DAT_028ca8d8)(param_2,param_3,param_4);
  FUN_00437f68();
  local_34 = param_1;
  if (((uVar1 & 1) != 0) && (uVar1 = param_4, FUN_00438004(), (uVar1 & 1) != 0)) {
    local_34 = 18000.0;
  }
  FUN_0043808c((double)param_1,(double)local_34,param_2,&cf_facade_capture,param_4,1);
  return local_34;
}

