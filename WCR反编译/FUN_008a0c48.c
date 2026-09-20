// FUN_008a0c48 @ 008a0c48

byte FUN_008a0c48(void)

{
  undefined *puVar1;
  undefined *puVar2;
  byte local_11;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  FUN_0088fb40();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (puVar2 == (undefined *)0x0) {
    local_11 = 0;
  }
  else {
    FUN_008a12fc();
    local_11 = (byte)puVar2 & 1;
  }
  return local_11;
}

