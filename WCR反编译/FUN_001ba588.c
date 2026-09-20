// FUN_001ba588 @ 001ba588

void FUN_001ba588(ulong param_1,undefined8 param_2,byte param_3)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  uint local_2c;
  byte local_25;
  
  uVar3 = param_1;
  FUN_001cf8b0();
  bVar2 = (byte)uVar3;
  FUN_001cf94c();
  if (((uVar3 & 1) == 0) && ((bVar2 & 1) == 0)) {
    (*DAT_028c8ad8)(param_1,param_2,param_3 & 1);
  }
  else {
    local_2c = 0;
    if (((uVar3 & 1) != 0) && (local_2c = 0, (param_3 & 1) == 0)) {
      uVar3 = param_1;
      FUN_001cf9e8();
      local_2c = (uint)uVar3;
    }
    local_25 = 0;
    if (((bVar2 & 1) != 0) && (uVar3 = param_1, FUN_001cfbc4(), (uVar3 & 1) != 0)) {
      uVar3 = param_1;
      FUN_001cff98();
      local_25 = (byte)uVar3;
    }
    bVar2 = 0;
    if ((param_3 & 1) == 0) {
      bVar2 = local_25;
    }
    bVar1 = 0;
    if ((param_3 & 1) != 0) {
      bVar1 = local_25;
    }
    if ((bVar1 & 1) != 0) {
      FUN_001d031c(param_1);
    }
    if ((local_2c & 1) != 0) {
      uVar3 = param_1;
      FUN_001d0624();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar3 == 0) {
        FUN_001d0988(param_1);
      }
      else {
        FUN_001d07e4(param_1);
      }
    }
    if ((bVar2 & 1) != 0) {
      FUN_001d0ac4(param_1);
    }
    (*DAT_028c8ad8)(param_1,param_2,param_3 & 1);
    if ((local_2c & 1) != 0) {
      uVar3 = param_1;
      FUN_001d0624();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar3 == 0) {
        FUN_001d0988(param_1);
      }
      else {
        FUN_001d07e4(param_1);
      }
    }
    if ((bVar2 & 1) != 0) {
      FUN_001d0ac4(param_1);
    }
  }
  return;
}

