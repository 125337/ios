// moveStatusSummary @ 00f5bf98

/* Function Stack Size: 0x10 bytes */

ID __thiscall
WCRefineFakeLocationEngine::moveStatusSummary
          (WCRefineFakeLocationEngine *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  double in_d0;
  double dVar4;
  double dVar5;
  double local_128;
  double local_120;
  cfstringStruct *local_108;
  double local_100;
  double local_f8;
  double local_e8;
  bool local_89;
  cfstringStruct *local_88;
  undefined *local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_38 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_30;
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasRoute_026ac648);
  if ((IVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___jb;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_routeDistanceMeters_026ac608);
    if (in_d0 <= 0.0) {
      local_e8 = 0.0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_traveledMeters_026ac600);
      dVar4 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_routeDistanceMeters_026ac608);
      local_e8 = (in_d0 / dVar4) * 100.0;
    }
    if (local_e8 <= 0.0) {
      local_f8 = 0.0;
    }
    else {
      local_f8 = local_e8;
    }
    if (local_f8 <= 100.0) {
      local_100 = local_f8;
    }
    else {
      local_100 = 100.0;
    }
    puVar1 = local_40;
    local_120 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_fakeLocationMoveRunning_026ac668);
    if (((ulong)puVar1 & 1) == 0) {
      if (local_100 <= 0.5) {
        local_108 = &cf__;
      }
      else {
        local_108 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__f_P);
        _objc_retainAutoreleasedReturnValue();
        local_88 = local_108;
      }
      local_89 = local_100 > 0.5;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_108;
      if (local_89) {
        (*(code *)PTR__objc_release_02578630)(local_88);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_routeDistanceMeters_026ac608);
      dVar5 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_traveledMeters_026ac600);
      dVar4 = DAT_02323c68;
      local_120 = local_120 - dVar5;
      if (local_120 <= 0.0) {
        local_120 = 0.0;
      }
      local_128 = DAT_02323c68;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_fakeLocationMoveSpeedMps_026ac670);
      if (local_128 <= dVar4) {
        local_128 = dVar4;
      }
      if (60.0 <= local_120 / local_128) {
        pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__jb_N);
        _objc_retainAutoreleasedReturnValue();
        local_28 = pcVar3;
      }
      else {
        pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__jb_N);
        _objc_retainAutoreleasedReturnValue();
        local_28 = pcVar3;
      }
    }
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

