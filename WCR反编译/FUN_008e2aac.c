// FUN_008e2aac @ 008e2aac

undefined4 FUN_008e2aac(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined4 local_14;
  
  uVar1 = param_1;
  (*DAT_028ce310)(param_1,param_2);
  local_14 = (undefined4)uVar1;
  FUN_008f8484();
  if ((param_1 & 1) != 0) {
    FUN_008f2e74();
  }
  return local_14;
}

