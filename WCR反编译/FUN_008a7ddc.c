// FUN_008a7ddc @ 008a7ddc

void FUN_008a7ddc(ulong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined4 local_24;
  
  uVar2 = param_1;
  FUN_008a7e94();
  local_24 = param_3;
  if ((uVar2 & 1) != 0) {
    uVar2 = param_1;
    FUN_008a8a98();
    uVar1 = (undefined4)uVar2;
    local_24 = param_3;
    if ((uVar2 & 1) != 0) {
      FUN_008a81fc();
      local_24 = uVar1;
    }
  }
  (*DAT_028cddf0)(param_1,param_2,local_24);
  return;
}

