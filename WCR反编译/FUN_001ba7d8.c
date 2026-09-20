// FUN_001ba7d8 @ 001ba7d8

void FUN_001ba7d8(double param_1,ulong param_2,undefined8 param_3)

{
  byte bVar1;
  double dVar2;
  byte bVar3;
  ulong uVar4;
  uint local_3c;
  byte local_2c;
  
  dVar2 = DAT_02323cd0;
  uVar4 = param_2;
  FUN_001cf8b0();
  bVar3 = (byte)uVar4;
  FUN_001cf94c();
  if (((uVar4 & 1) == 0) && ((bVar3 & 1) == 0)) {
    (*DAT_028c8ae0)(param_1,param_2,param_3);
  }
  else {
    local_3c = 0;
    if (((uVar4 & 1) != 0) && (local_3c = 0, dVar2 < param_1)) {
      uVar4 = param_2;
      FUN_001cf9e8();
      local_3c = (uint)uVar4;
    }
    local_2c = 0;
    if (((bVar3 & 1) != 0) && (uVar4 = param_2, FUN_001cfbc4(), (uVar4 & 1) != 0)) {
      uVar4 = param_2;
      FUN_001cff98();
      local_2c = (byte)uVar4;
    }
    bVar3 = 0;
    if (dVar2 < param_1) {
      bVar3 = local_2c;
    }
    bVar1 = 0;
    if (param_1 <= dVar2) {
      bVar1 = local_2c;
    }
    if ((bVar1 & 1) != 0) {
      FUN_001d031c(param_2);
    }
    if ((local_3c & 1) != 0) {
      uVar4 = param_2;
      FUN_001d0624();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar4 == 0) {
        FUN_001d0988(param_2);
      }
      else {
        FUN_001d07e4(param_2);
      }
    }
    if ((bVar3 & 1) != 0) {
      FUN_001d0ac4(param_2);
    }
    (*DAT_028c8ae0)(param_1,param_2,param_3);
    if ((local_3c & 1) != 0) {
      uVar4 = param_2;
      FUN_001d0624();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar4 == 0) {
        FUN_001d0988(param_2);
      }
      else {
        FUN_001d07e4(param_2);
      }
    }
    if ((bVar3 & 1) != 0) {
      FUN_001d0ac4(param_2);
    }
  }
  return;
}

