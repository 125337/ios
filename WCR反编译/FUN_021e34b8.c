// FUN_021e34b8 @ 021e34b8

long FUN_021e34b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_a0;
  long local_88;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_58 = 0;
  local_88 = param_5;
  FUN_02223ac0(param_5,param_6,0x77636267);
  _objc_retainAutoreleasedReturnValue();
  if (local_88 == 0) {
    FUN_021c7714();
    local_88 = param_5;
    FUN_02222060(param_5,local_a0);
    local_50 = param_1;
    local_48 = param_2;
    local_40 = param_3;
    local_38 = param_4;
    FUN_021b9938(param_1,param_2,param_3,param_4);
    uVar1 = 0;
    local_58 = local_88;
    FUN_021c880c(0);
    lVar2 = 2;
    __ss27_allocateUninitializedArrayySayxG_BptBwlF(2,uVar1);
    *(undefined8 *)(lVar2 + 0x20) = 2;
    *(undefined8 *)(lVar2 + 0x28) = 0x10;
    FUN_021b0268();
    lVar3 = lVar2;
    FUN_021c88a0();
    __ss10SetAlgebraPs7ElementQz012ArrayLiteralC0RtzrlE05arrayE0xAFd_tcfC
              (&local_60,lVar2,uVar1,lVar3);
    FUN_02222d20(local_88,local_a0,local_60);
    FUN_02223540(local_88,local_a0,0x77636267);
    FUN_022236a0(local_88,local_a0,0);
    FUN_02222e60(local_88,local_a0,1);
    FUN_02222860(param_5,local_a0,local_88,0);
  }
  return local_88;
}

