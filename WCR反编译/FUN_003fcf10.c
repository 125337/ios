// FUN_003fcf10 @ 003fcf10

void FUN_003fcf10(undefined8 param_1,undefined8 param_2,byte param_3)

{
  (*DAT_028ca650)(param_1,param_2,param_3 & 1);
  if ((param_3 & 1) == 0) {
    FUN_00400d94();
    FUN_00400ffc();
  }
  else {
    FUN_00400fd8();
    FUN_00400ffc();
  }
  return;
}

