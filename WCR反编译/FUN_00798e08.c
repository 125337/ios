// FUN_00798e08 @ 00798e08

double FUN_00798e08(void)

{
  undefined *puVar1;
  undefined *puVar2;
  double local_48;
  double local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_18 = (double)(long)puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (local_18 < 0.0) {
    local_18 = 0.0;
  }
  if (50.0 < local_18) {
    local_18 = 50.0;
  }
  if (local_18 <= 0.0) {
    local_48 = DAT_02323d38;
  }
  else {
    local_48 = local_18;
  }
  return local_48;
}

