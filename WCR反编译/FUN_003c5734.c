// FUN_003c5734 @ 003c5734

void FUN_003c5734(undefined8 param_1)

{
  undefined *puVar1;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar1 = &DAT_028ca0d0;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = puVar1;
  if (puVar1 != (undefined *)0x0) {
    FUN_003736ec(puVar1);
    FUN_00368c14(local_28,&cf_sessionUnhidden);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

