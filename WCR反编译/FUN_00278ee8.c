// FUN_00278ee8 @ 00278ee8

void FUN_00278ee8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  ulong local_28;
  long local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar2 = local_28;
  FUN_00272348();
  if (uVar2 < 0x10000 || uVar2 - 0x10000 == 0) {
    local_18 = 0;
  }
  else {
    uVar3 = local_28;
    FUN_00279ffc(uVar2 - 0x10000);
    uVar1 = local_28;
    if ((uVar3 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
    }
    else {
      lVar4 = local_20;
      FUN_0027b218(local_20,local_28);
      uVar1 = local_28;
      if (lVar4 == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar1;
      }
      else {
        dVar5 = (double)NEON_ucvtf(lVar4);
        if (uVar2 < (ulong)(long)(dVar5 * 0.85)) {
          FUN_0027b414(uVar2 - (long)(dVar5 * 0.85),local_28,uVar2,lVar4);
          local_18 = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = uVar1;
        }
      }
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

