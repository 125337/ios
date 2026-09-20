// FUN_007b4b00 @ 007b4b00

byte FUN_007b4b00(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte local_74;
  undefined *local_48;
  undefined *local_30;
  undefined4 local_24;
  undefined *local_20;
  byte local_11;
  
  if ((DAT_028ccc6a & 1) == 0) {
    puVar2 = &DAT_028ccbe8;
    _objc_loadWeakRetained();
    local_20 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      local_30 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_deferredNativeReload_026a2ae0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_74 = 1;
      bVar1 = ((ulong)puVar3 & 1) == 0;
      if (bVar1) {
        local_48 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_interactionInProgress_026a2838);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_74 = (byte)puVar3;
      }
      local_11 = local_74 & 1;
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_48);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_24 = 1;
      _objc_storeStrong(&local_30,0);
    }
    _objc_storeStrong(&local_20,0);
  }
  else {
    local_11 = 1;
  }
  return local_11 & 1;
}

