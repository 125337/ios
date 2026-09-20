// FUN_002d25ac @ 002d25ac

double FUN_002d25ac(double param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  long local_a0;
  long local_88;
  long local_48;
  long local_40;
  double local_38;
  undefined1 local_19;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_19 = SUB81(puVar3,0);
  FUN_002c85b0((uint)puVar3 & 1);
  bVar1 = local_18 == 0;
  local_38 = param_1;
  if (bVar1) {
    local_88 = 0;
  }
  else {
    local_88 = local_18;
    FUN_0029cc70();
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_88;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_88;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if (local_40 == 0) {
    local_a0 = 0;
  }
  else {
    local_a0 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_selectedIndex_0269e580);
  }
  dVar5 = local_38;
  dVar4 = local_38;
  FUN_002d3e38(local_a0);
  dVar5 = dVar5 + dVar4;
  FUN_002adba4(dVar5,0x4028000000000000,0x404e000000000000);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_18,0);
  return dVar5;
}

