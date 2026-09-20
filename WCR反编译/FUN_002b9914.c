// FUN_002b9914 @ 002b9914

void FUN_002b9914(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x3ff0000000000000;
  uVar2 = 0x3ff0000000000000;
  FUN_002b1540();
  uVar1 = 0;
  _UIGraphicsBeginImageContextWithOptions(uVar2,uVar3,0);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = DAT_028c9810;
  DAT_028c9810 = uVar1;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _UIGraphicsEndImageContext();
  return;
}

