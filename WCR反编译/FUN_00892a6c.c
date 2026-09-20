// FUN_00892a6c @ 00892a6c

byte FUN_00892a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  FUN_008a20d0();
  uVar1 = (uint)uVar2;
  if ((uVar2 & 1) == 0) {
    uVar3 = local_20;
    (*DAT_028cd958)(local_20,local_28,local_30);
    local_11 = (byte)uVar3 & 1;
  }
  else {
    FUN_008a20bc();
    if ((uVar1 & 1) == 0) {
      uVar3 = local_20;
      (*DAT_028cd958)(local_20,local_28,local_30);
      local_11 = (byte)uVar3 & 1;
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

