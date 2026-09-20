// _WCRefineProfileBgHTMLHasTrustedAutoHeight @ 01cf36d8

bool _WCRefineProfileBgHTMLHasTrustedAutoHeight(double param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_profileBgHTMLHeight_026a8c10);
  bVar1 = false;
  if ((param_1 <= 0.0) && (bVar1 = false, (DAT_028e4700 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_profileBgHTMLAutoRawHeight_026c3ab8);
    bVar1 = 1.0 < param_1;
  }
  _objc_storeStrong(&local_18,0);
  return bVar1;
}

