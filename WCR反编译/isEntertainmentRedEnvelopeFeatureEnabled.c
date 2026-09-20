// isEntertainmentRedEnvelopeFeatureEnabled @ 01535038

/* Function Stack Size: 0x10 bytes */

bool WCRefineTopBarProfileCardPresenter::isEntertainmentRedEnvelopeFeatureEnabled
               (ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 local_38;
  undefined8 local_30;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isEntertainmentRedEnvelopeFeatur_026b0408);
  local_38 = 0;
  bVar1 = (param_1 & 1) != 0;
  if (bVar1) {
    local_30 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = (byte)puVar2;
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  return (uint)(local_38 & 1);
}

