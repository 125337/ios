// FUN_0022200c @ 0022200c

double FUN_0022200c(void)

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
    local_18 = 8.0;
  }
  else if ((long)puVar2 < 0x1f) {
    local_18 = (double)(long)puVar2;
  }
  else {
    local_18 = 30.0;
  }
  return local_18;
}

