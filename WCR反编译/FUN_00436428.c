// FUN_00436428 @ 00436428

void FUN_00436428(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar2 = &DAT_028ca898;
  _objc_loadWeakRetained();
  puVar1 = local_18;
  (*(code *)PTR__objc_release_02578630)();
  if (puVar2 == puVar1) {
    FUN_004389c8(0);
  }
  (*DAT_028ca950)(local_18,local_20,local_28);
  _objc_storeStrong(&local_28,0);
  return;
}

