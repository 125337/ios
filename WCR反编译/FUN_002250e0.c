// FUN_002250e0 @ 002250e0

void FUN_002250e0(undefined8 param_1)

{
  uint uVar1;
  ulong uVar3;
  ulong uVar4;
  ulong local_18;
  ulong *puVar2;
  
  puVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  if ((local_18 != 0) && (DAT_028c9078 < 1)) {
    FUN_001cf8b0(DAT_028c9078);
    if ((uVar1 & 1) == 0) {
      FUN_00223e8c(0,local_18);
      FUN_00217110(local_18);
    }
    else {
      FUN_00223e8c(0,local_18);
      uVar3 = local_18;
      _objc_getAssociatedObject(local_18,&DAT_028c919d);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if ((uVar4 & 1) != 0) {
        DAT_028c9078 = DAT_028c9078 + 1;
        FUN_00217110(local_18);
        DAT_028c9078 = DAT_028c9078 + -1;
      }
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

