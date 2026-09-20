// FUN_001cf2d0 @ 001cf2d0

void FUN_001cf2d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  
  (*DAT_028c8fd8)(param_1,param_2,param_3,param_4,param_5,param_6);
  uVar1 = param_5;
  FUN_0022586c();
  if ((uVar1 & 1) != 0) {
    FUN_00225a08();
    _objc_retainAutoreleasedReturnValue();
    FUN_00223fd8();
    (*(code *)PTR__objc_release_02578630)(param_5);
  }
  return;
}

