// _WCRefineProfileBgHTMLDiscardStaleAutoHeight @ 01cf3954

byte _WCRefineProfileBgHTMLDiscardStaleAutoHeight(double param_1)

{
  undefined *puVar1;
  undefined *local_20;
  byte local_11;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_profileBgHTMLHeight_026a8c10);
  if (param_1 <= 0.0) {
    puVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_profileBgHTMLAutoRawHeight_026c3ab8);
    FUN_01cf3674();
    if (((ulong)puVar1 & 1) == 0) {
      local_11 = 0;
    }
    else if ((DAT_028e4700 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (0,local_20,PTR_s_setProfileBgHTMLAutoRawHeight__026c3930);
      DAT_028e4700 = 0;
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
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

