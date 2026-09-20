// FUN_008c704c @ 008c704c

byte FUN_008c704c(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  (*DAT_028ce0d0)(param_1,param_2,param_3 & 1);
  DAT_028ce1e8 = 0;
  DAT_028ce1e9 = 1;
  DAT_028ce049 = 0;
  DAT_028ce048 = 0;
  DAT_028ce04a = 0;
  FUN_008c9608();
  uVar2 = 0;
  FUN_008c9688(0,param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_008c58c4(2,0);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = 0;
  FUN_008c9688(0,param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_008c58c4(4,0);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  return (byte)uVar1 & 1;
}

