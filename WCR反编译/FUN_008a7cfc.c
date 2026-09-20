// FUN_008a7cfc @ 008a7cfc

undefined4 FUN_008a7cfc(ulong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 local_14;
  
  uVar2 = param_1;
  (*DAT_028cdde0)(param_1,param_2);
  local_14 = (undefined4)uVar2;
  FUN_008a7e94();
  if ((uVar2 & 1) != 0) {
    FUN_008a7f40();
    uVar1 = (undefined4)param_1;
    if ((param_1 & 1) != 0) {
      FUN_008a81fc();
      local_14 = uVar1;
    }
  }
  return local_14;
}

