// FUN_00789888 @ 00789888

double FUN_00789888(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  double dVar2;
  double local_80;
  undefined8 local_20;
  double local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  FUN_0078a874(local_20);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  dVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_80 = param_1;
  if (0.0 < dVar2) {
    local_80 = dVar2;
  }
  dVar2 = local_80;
  FUN_00789a10(local_20);
  local_18 = dVar2;
  if (local_80 <= dVar2) {
    local_18 = local_80;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

