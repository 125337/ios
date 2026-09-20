// FUN_0031b590 @ 0031b590

byte FUN_0031b590(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  byte local_50;
  ulong local_20;
  byte local_11;
  
  puVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar1,param_1);
  uVar2 = local_20;
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    FUN_0031b758();
    FUN_0030fef4(uVar2,puVar1);
    uVar3 = local_20;
    local_50 = 1;
    if ((uVar2 & 1) == 0) {
      FUN_0031b7cc();
      FUN_0030fef4(uVar3,uVar2);
      uVar2 = local_20;
      local_50 = 1;
      if ((uVar3 & 1) == 0) {
        FUN_0031b840();
        FUN_0030fef4(uVar2,uVar3);
        uVar3 = local_20;
        uVar4 = 1;
        local_50 = 1;
        if ((uVar2 & 1) == 0) {
          FUN_0031b8b4();
          FUN_0030fef4(uVar3,uVar4);
          uVar2 = local_20;
          uVar4 = 1;
          local_50 = 1;
          if ((uVar3 & 1) == 0) {
            FUN_0031b928();
            FUN_0030fef4(uVar2,uVar4);
            local_50 = (byte)uVar2;
          }
        }
      }
    }
    local_11 = local_50 & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

