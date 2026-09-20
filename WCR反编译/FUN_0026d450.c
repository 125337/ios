// FUN_0026d450 @ 0026d450

void FUN_0026d450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar4;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uVar3;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar3 = local_18;
  (*DAT_028c9548)(local_18,local_20,local_28);
  uVar2 = (uint)uVar3;
  FUN_0026e0d8();
  uVar1 = local_18;
  uVar3 = local_28;
  if ((uVar2 & 1) != 0) {
    uVar4 = local_18;
    FUN_0026e810();
    _objc_retainAutoreleasedReturnValue();
    FUN_0026e174(uVar1,uVar3);
    (*(code *)PTR__objc_release_02578630)(uVar4);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

