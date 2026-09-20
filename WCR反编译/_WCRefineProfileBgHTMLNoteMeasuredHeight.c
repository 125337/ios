// _WCRefineProfileBgHTMLNoteMeasuredHeight @ 01cf37a4

byte _WCRefineProfileBgHTMLNoteMeasuredHeight(double param_1)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  undefined *local_28;
  double local_20;
  byte local_11;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_profileBgHTMLHeight_026a8c10);
  if ((0.0 < param_1) || (local_20 <= 1.0)) {
    local_11 = 0;
  }
  else {
    _WCRefineProfileBgHTMLHasTrustedAutoHeight();
    if (((ulong)puVar1 & 1) == 0) {
      dVar2 = local_20;
      FUN_01cf35e0();
      if (0.0 < dVar2) {
        dVar3 = dVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_profileBgHTMLAutoRawHeight_026c3ab8);
        if ((1.0 <= ABS(dVar3 - dVar2)) || ((DAT_028e4700 & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (dVar2,local_28,PTR_s_setProfileBgHTMLAutoRawHeight__026c3930);
          DAT_028e4700 = 1;
          _WCRefineProfileBgPersistHTMLLayoutForWork(0);
          local_11 = 1;
        }
        else {
          local_11 = 0;
        }
      }
      else {
        local_11 = 0;
      }
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_28,0);
  return local_11 & 1;
}

