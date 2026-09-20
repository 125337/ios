// FUN_00434cd4 @ 00434cd4

int FUN_00434cd4(ulong param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  int local_34;
  
  uVar2 = param_1;
  (*DAT_028ca8e8)(param_1,param_2,param_3);
  iVar1 = (int)uVar2;
  FUN_00437f68();
  local_34 = iVar1;
  if (((uVar2 & 1) != 0) && (uVar2 = param_3, FUN_00438004(), (uVar2 & 1) != 0)) {
    local_34 = 18000;
  }
  FUN_0043808c((double)(long)iVar1,(double)(long)local_34,param_1,&cf_facade_sw_threshold,param_3,1)
  ;
  return local_34;
}

