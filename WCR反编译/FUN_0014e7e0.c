// FUN_0014e7e0 @ 0014e7e0

void FUN_0014e7e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar2 = (undefined *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = puVar2;
  if (((puVar2 != (undefined *)0x0) && ((DAT_028c87b8 & 1) == (*(byte *)(param_1 + 0x28) & 1))) &&
     ((DAT_028c87b9 & 1) == (*(byte *)(param_1 + 0x29) & 1))) {
    puVar2 = &DAT_028c8698;
    _objc_loadWeakRetained(0);
    puVar1 = local_28;
    (*(code *)PTR__objc_release_02578630)();
    if (puVar2 == puVar1) {
      FUN_0014e934(0,local_28);
      FUN_0014735c(local_28,&cf_applyBG_async_done);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

