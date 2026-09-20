// FUN_0033cb28 @ 0033cb28

uint FUN_0033cb28(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined4 local_24;
  
  uVar1 = param_1;
  FUN_0033f024();
  if ((uVar1 & 1) == 0) {
    (*DAT_028c9f78)(param_1,param_2);
    local_24 = (uint)param_1;
  }
  else {
    local_24 = 0;
  }
  return local_24 & 1;
}

