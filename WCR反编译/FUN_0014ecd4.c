// FUN_0014ecd4 @ 0014ecd4

void FUN_0014ecd4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  puVar1 = &DAT_028c8698;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = puVar1;
  if ((puVar1 != (undefined *)0x0) &&
     ((((DAT_028c87b8 & 1) != 0 || ((DAT_028c87b9 & 1) != 0)) &&
      (FUN_00147f7c(), ((uint)puVar1 & 1) != (DAT_028c87e3 & 1))))) {
    FUN_0014e090(local_30,1);
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

