// limitBytes @ 00ead76c

/* Function Stack Size: 0x10 bytes */

unsigned_long_long WCRefineAutoDownloadQuotaHelper::limitBytes(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((long)puVar2 < 1) {
    local_18 = 0;
  }
  else {
    local_18 = (long)puVar2 << 0x14;
  }
  return local_18;
}

