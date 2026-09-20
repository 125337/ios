// FUN_01603920 @ 01603920

byte FUN_01603920(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_20;
  byte local_11;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  bVar1 = true;
  if (local_20 != (undefined *)0x0) {
    puVar2 = &DAT_028e3bc0;
    _objc_loadWeakRetained();
    bVar1 = puVar2 == (undefined *)0x0;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  if (bVar1) {
    local_11 = 0;
  }
  else {
    puVar2 = &DAT_028e3bc8;
    _objc_loadWeakRetained();
    bVar1 = false;
    if (puVar2 != (undefined *)0x0) {
      puVar3 = &DAT_028e3bc8;
      _objc_loadWeakRetained();
      bVar1 = puVar3 != local_20;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (bVar1) {
      local_11 = 0;
    }
    else {
      puVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_viewControllers_0269e348);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = &DAT_028e3bc0;
      _objc_loadWeakRetained();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_containsObject__0269cbb8);
      local_11 = (byte)puVar4 & 1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

