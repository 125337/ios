// FUN_021def54 @ 021def54

undefined1  [16] FUN_021def54(ulong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar2 = param_1;
  __sSS7isEmptySbvg();
  if ((uVar2 & 1) == 0) {
    _swift_bridgeObjectRetain(param_2);
    local_40 = param_1;
    local_38 = param_2;
  }
  else {
    local_40 = 0;
    local_38 = 0;
  }
  auVar1._8_8_ = local_38;
  auVar1._0_8_ = local_40;
  return auVar1;
}

