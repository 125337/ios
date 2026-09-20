// FUN_00632070 @ 00632070

void FUN_00632070(undefined *param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  
  (*DAT_028cb9e8)(param_1,param_2,param_3 & 1);
  puVar1 = &DAT_028cb9b0;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_release_02578630)();
  if (puVar1 == param_1) {
    _objc_storeWeak(0,&DAT_028cb9b0,0);
  }
  return;
}

