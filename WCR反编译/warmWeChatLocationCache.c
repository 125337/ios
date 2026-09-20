// warmWeChatLocationCache @ 00f5c6bc

/* Function Stack Size: 0x10 bytes */

void WCRefineFakeLocationEngine::warmWeChatLocationCache(ID param_1,SEL param_2)

{
  double dVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  double dVar7;
  double in_d1;
  double local_60;
  undefined *local_48;
  double local_40;
  undefined *local_38;
  double local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  dVar1 = DAT_0232c3a8;
  dVar7 = DAT_0232c3a8;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_featureActive_026ac678);
  if ((param_1 & 1) != 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_resolvedCoordinate_026ac6a0);
    local_30 = dVar7;
    local_28 = in_d1;
    _CLLocationCoordinate2DIsValid(dVar7,in_d1);
    if (((IVar2 & 1) != 0) &&
       ((local_60 = ABS(local_30), dVar1 <= local_60 ||
        (local_60 = ABS(local_28), dVar1 <= local_60)))) {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_38 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_fakeLocationAltitude_026ac6a8);
      local_60 = ABS(local_60);
      if (local_60 <= DAT_0232c3a0) {
        local_60 = 40.0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_fakeLocationAltitude_026ac6a8);
      }
      local_40 = local_60;
      puVar3 = PTR__OBJC_CLASS___CLLocation_026ceb88;
      _objc_alloc();
      dVar1 = local_40;
      puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,local_28,dVar1,0x4020000000000000,0x4018000000000000,puVar3,
                 PTR_s_initWithCoordinate_altitude_hori_026ac6b0);
      local_48 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar5 = "LocationRetriever";
      _objc_getClass();
      if ((pcVar5 != (char *)0x0) &&
         (pcVar6 = pcVar5,
         (*(code *)PTR__objc_msgSend_02578628)
                   (pcVar5,PTR_s_respondsToSelector__026ca818,
                    PTR_s_cacheGlobalLastLocation__026ac6b8), ((ulong)pcVar6 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_cacheGlobalLastLocation__026ac6b8,local_48);
      }
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_38,0);
    }
  }
  return;
}

