// FUN_008c9dbc @ 008c9dbc

void FUN_008c9dbc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_028ce040;
  DAT_028ce040 = 0;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (((DAT_028ce048 & 1) != 0) && ((DAT_028ce049 & 1) == 0)) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    FUN_008c9b4c();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

