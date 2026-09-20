// FUN_00789a10 @ 00789a10

double FUN_00789a10(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  double dVar3;
  double local_80;
  undefined8 local_20;
  double local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  FUN_0078a874(local_20);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  dVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_18 = param_1;
  if (puVar2 != (undefined1 *)0x0) {
    if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      local_18 = param_1 * DAT_02323d30;
    }
    else if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_80 = param_1;
      if (0.0 < dVar3) {
        local_80 = dVar3;
      }
      local_18 = local_80;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

