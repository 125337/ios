// FUN_02202df4 @ 02202df4

void FUN_02202df4(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong local_50;
  ulong local_48;
  
  local_50 = *param_2;
  local_48 = param_2[1];
  uVar1 = local_50;
  __sSS7isEmptySbvg();
  if ((uVar1 & 1) == 0) {
    _swift_bridgeObjectRetain(local_48);
  }
  else {
    local_50 = 0;
    local_48 = 0;
  }
  *param_1 = local_50;
  param_1[1] = local_48;
  return;
}

