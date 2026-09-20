// FUN_001d3fac @ 001d3fac

byte FUN_001d3fac(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 local_44;
  undefined8 local_30;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_44 = 0;
  bVar1 = ((ulong)puVar3 & 1) != 0;
  if (bVar1) {
    local_30 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_44 = (byte)puVar3;
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return local_44 & 1;
}

