// FUN_001cf3a4 @ 001cf3a4

void FUN_001cf3a4(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  (*DAT_028c8fe0)(param_1,param_2);
  uVar1 = param_1;
  FUN_0022586c();
  if ((uVar1 & 1) != 0) {
    FUN_00225a08();
    _objc_retainAutoreleasedReturnValue();
    FUN_00223fd8();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

