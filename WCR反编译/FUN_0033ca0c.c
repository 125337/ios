// FUN_0033ca0c @ 0033ca0c

undefined * FUN_0033ca0c(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *local_28;
  
  puVar1 = param_1;
  FUN_0033f024();
  if (((ulong)puVar1 & 1) == 0) {
    (*DAT_028c9f60)(param_1,param_2);
    local_28 = param_1;
  }
  else {
    local_28 = &DAT_00004650;
  }
  return local_28;
}

