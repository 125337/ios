// FUN_001dac54 @ 001dac54

double FUN_001dac54(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_48;
  undefined8 local_40;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((long)puVar2 < 1) {
    local_40 = 15.0;
  }
  else {
    if ((long)puVar2 < 0x1f) {
      local_48 = (double)(long)puVar2;
    }
    else {
      local_48 = 30.0;
    }
    local_40 = local_48;
  }
  return local_40;
}

