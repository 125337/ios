// FUN_007bda28 @ 007bda28

bool FUN_007bda28(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_20;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  puVar2 = &DAT_028ccbe8;
  _objc_loadWeakRetained();
  puVar3 = puVar2;
  FUN_007ae408();
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  bVar1 = false;
  if ((local_18 != (undefined *)0x0) && (bVar1 = false, local_20 != (undefined *)0x0)) {
    bVar1 = local_18 == local_20;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return bVar1;
}

