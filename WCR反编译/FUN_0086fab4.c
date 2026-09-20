// FUN_0086fab4 @ 0086fab4

undefined1  [16]
FUN_0086fab4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined8 local_20;
  undefined8 local_18;
  
  if ((DAT_028cd85d & 1) == 0) {
    (*DAT_028cd7a8)(param_3,param_4);
    local_20 = param_1;
    local_18 = param_2;
  }
  else {
    local_18 = 0;
    FUN_00889c6c();
    local_20 = param_1;
  }
  auVar1._8_8_ = local_18;
  auVar1._0_8_ = local_20;
  return auVar1;
}

