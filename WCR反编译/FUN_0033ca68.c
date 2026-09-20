// FUN_0033ca68 @ 0033ca68

uint FUN_0033ca68(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined4 local_24;
  
  uVar1 = param_1;
  FUN_0033f024();
  if ((uVar1 & 1) == 0) {
    (*DAT_028c9f68)(param_1,param_2);
    local_24 = (uint)param_1;
  }
  else {
    local_24 = 1;
  }
  return local_24 & 1;
}

