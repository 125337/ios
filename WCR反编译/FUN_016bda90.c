// FUN_016bda90 @ 016bda90

undefined8 FUN_016bda90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_016bd4f8();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_016be224();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_18,0);
  return uVar2;
}

