// FUN_001cf9e8 @ 001cf9e8

byte FUN_001cf9e8(undefined8 param_1)

{
  uint uVar1;
  ulong uVar3;
  ulong uVar4;
  byte local_5c;
  ulong local_20;
  byte local_11;
  ulong *puVar2;
  
  puVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  if ((local_20 == 0) || (FUN_001cf8b0(), (uVar1 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    uVar3 = local_20;
    FUN_001d0624();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar3 == 0) {
      uVar3 = local_20;
      FUN_001d151c();
      if ((uVar3 & 1) == 0) {
        uVar3 = local_20;
        FUN_001d1890();
        _objc_retainAutoreleasedReturnValue();
        local_5c = 0;
        if (uVar3 != 0) {
          uVar4 = local_20;
          FUN_001d167c();
          local_5c = (byte)uVar4;
        }
        local_11 = local_5c & 1;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      else {
        uVar3 = local_20;
        FUN_001d167c();
        local_11 = (byte)uVar3 & 1;
      }
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

