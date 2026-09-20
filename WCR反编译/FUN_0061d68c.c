// FUN_0061d68c @ 0061d68c

void FUN_0061d68c(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != (undefined *)0x0) {
    bVar1 = true;
    if (DAT_028cb988 != 0) {
      puVar2 = &DAT_028cb8b0;
      _objc_loadWeakRetained();
      bVar1 = puVar2 != local_18;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    if (bVar1) {
      _objc_storeWeak(&DAT_028cb8b0,local_18);
      _objc_setAssociatedObject(local_18,&DAT_0232420d,0,1);
    }
    DAT_028cb988 = DAT_028cb988 + 1;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

