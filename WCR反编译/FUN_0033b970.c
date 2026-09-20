// FUN_0033b970 @ 0033b970

undefined1  [16]
FUN_0033b970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  uint uVar2;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 *puVar3;
  
  puVar3 = &local_28;
  local_28 = 0;
  _objc_storeStrong(puVar3,param_3);
  uVar2 = (uint)puVar3;
  FUN_0033ee78();
  if ((uVar2 & 1) == 0) {
    if (DAT_028c9ef8 == (code *)0x0) {
      uVar4 = 0x40c3878000000000;
      uVar5 = uVar4;
      FUN_0033f158();
      local_20 = uVar4;
      local_18 = uVar5;
    }
    else {
      (*DAT_028c9ef8)(local_28,param_4);
      local_20 = param_1;
      local_18 = param_2;
    }
  }
  else {
    uVar4 = 0x40c3878000000000;
    uVar5 = uVar4;
    FUN_0033f158();
    local_20 = uVar4;
    local_18 = uVar5;
  }
  _objc_storeStrong(&local_28,0);
  auVar1._8_8_ = local_18;
  auVar1._0_8_ = local_20;
  return auVar1;
}

