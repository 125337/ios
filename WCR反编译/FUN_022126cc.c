// FUN_022126cc @ 022126cc

void FUN_022126cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_88;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  
  local_50 = param_2;
  uStack_48 = param_3;
  local_40 = param_4;
  uStack_38 = param_5;
  local_28 = param_1;
  FUN_021c8144();
  uVar1 = 0;
  FUN_021c8c68();
  FUN_02223a60(param_1,local_88);
  puVar2 = &local_58;
  local_60 = 2;
  local_58 = param_1;
  FUN_021c8cfc();
  __sSQ2eeoiySbx_xtFZTj(puVar2,&local_60,uVar1,param_1);
  if (((ulong)puVar2 & 1) == 0) {
    _swift_bridgeObjectRetain(param_3);
    local_c8 = param_2;
    local_c0 = param_3;
  }
  else {
    _swift_bridgeObjectRetain(param_5);
    local_c8 = param_4;
    local_c0 = param_5;
  }
  FUN_0220f694(local_c8,local_c0);
  return;
}

