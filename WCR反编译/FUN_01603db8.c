// FUN_01603db8 @ 01603db8

void FUN_01603db8(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *local_28;
  uint local_1c;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == (undefined *)0x0) {
    local_1c = 1;
  }
  else {
    puVar2 = local_18;
    FUN_01603920();
    if (((ulong)puVar2 & 1) == 0) {
      FUN_01604008(local_18);
      local_1c = 1;
    }
    else {
      puVar2 = &DAT_028e3bc0;
      _objc_loadWeakRetained();
      bVar1 = true;
      local_28 = puVar2;
      if (puVar2 != (undefined *)0x0) {
        puVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_topViewController_0269e588);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = puVar2 == local_28;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      if (!bVar1) {
        puVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_popToViewController_animated__0269e4f8,local_28,0);
        _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
      }
      local_1c = (uint)bVar1;
      _objc_storeStrong(&local_28,0);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

