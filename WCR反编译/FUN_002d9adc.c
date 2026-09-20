// FUN_002d9adc @ 002d9adc

void FUN_002d9adc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  _CFAbsoluteTimeGetCurrent();
  _objc_storeStrong(&DAT_028c95e0);
  _objc_storeStrong(&DAT_028c95e8,0);
  DAT_028c97f8 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_tabBar_0269e518);
  _objc_retainAutoreleasedReturnValue();
  FUN_002bf3a4();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_tabBar_0269e518);
    _objc_retainAutoreleasedReturnValue();
    FUN_002be008();
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_tabBar_0269e518);
    _objc_retainAutoreleasedReturnValue();
    FUN_002bb194();
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  return;
}

