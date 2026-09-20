// FUN_000ec76c @ 000ec76c

void FUN_000ec76c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar3 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar3,param_2);
  uVar2 = local_18;
  uVar1 = local_20;
  FUN_000efbf4();
  _objc_retainAutoreleasedReturnValue();
  FUN_000ed584(uVar2,uVar1,puVar3,0);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

