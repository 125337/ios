// _WCRefineProfileBgHTMLResolvedHeight @ 01cf3480

double _WCRefineProfileBgHTMLResolvedHeight(double param_1)

{
  undefined *puVar1;
  double dVar2;
  double local_40;
  undefined *local_28;
  double local_20;
  double local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_profileBgHTMLHeight_026a8c10);
  FUN_01cf35e0();
  local_18 = param_1;
  if (param_1 <= 0.0) {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_profileBgHTMLAutoRawHeight_026c3ab8);
    FUN_01cf3674(param_1);
    local_40 = param_1;
    if ((((ulong)puVar1 & 1) != 0) && ((DAT_028e4700 & 1) == 0)) {
      local_40 = 0.0;
    }
    if (local_40 <= 0.0) {
      if (local_20 <= 1.0) {
        local_18 = 211.0;
      }
      else {
        dVar2 = (local_20 * 9.0) / 16.0;
        FUN_01cf35e0();
        local_18 = dVar2;
      }
    }
    else {
      FUN_01cf35e0();
      local_18 = local_40;
    }
  }
  _objc_storeStrong(&local_28,0);
  return local_18;
}

