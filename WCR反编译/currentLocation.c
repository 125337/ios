// currentLocation @ 00f603b4

/* Function Stack Size: 0x10 bytes */

ID WCRefineFakeLocationEngine::currentLocation(ID param_1,SEL param_2)

{
  double dVar1;
  double dVar2;
  u_int32_t uVar3;
  u_int32_t uVar4;
  undefined *puVar5;
  ID IVar6;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  double in_d1;
  double local_120;
  double local_118;
  double local_110;
  double local_108;
  uint local_d4;
  double local_c0;
  double local_b8;
  double local_a0;
  double local_58;
  double local_50;
  undefined *local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  
  dVar2 = DAT_0232c3a8;
  dVar1 = DAT_02323cb0;
  puVar5 = PTR_WCRefineConfig_026cdf58;
  local_58 = DAT_02323cb0;
  local_38 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_fakeLocationEnabled_026ac5c0);
  if (((ulong)puVar5 & 1) == 0) {
    local_28 = (undefined *)0x0;
  }
  else {
    IVar6 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_resolvedCoordinate_026ac6a0);
    _CLLocationCoordinate2DIsValid(local_58,in_d1);
    if (((IVar6 & 1) == 0) ||
       ((local_a0 = ABS(local_58), local_a0 < dVar2 && (local_a0 = ABS(in_d1), local_a0 < dVar2))))
    {
      local_28 = (undefined *)0x0;
    }
    else {
      puVar5 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_fakeLocationMoveRunning_026ac668);
      local_d4 = 0;
      if (((ulong)puVar5 & 1) != 0) {
        IVar6 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasRoute_026ac648);
        local_d4 = (uint)IVar6;
      }
      puVar5 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_fakeLocationJitterEnabled_026ac7b0);
      local_50 = in_d1;
      if (((local_d4 & 1) == 0) && (((ulong)puVar5 & 1) != 0)) {
        uVar3 = _arc4random_uniform(500);
        uVar4 = _arc4random_uniform(36000);
        dVar8 = (((double)uVar4 / 100.0) * dVar1) / 180.0;
        dVar9 = dVar8;
        _cos();
        _sin();
        dVar2 = DAT_02323da8;
        local_108 = (local_58 * dVar1) / 180.0;
        _cos();
        if (local_108 <= dVar2) {
          local_108 = dVar2;
        }
        local_58 = local_58 + (((double)uVar3 / 100.0) * dVar9) / 111320.0;
        local_a0 = in_d1 + (((double)uVar3 / 100.0) * dVar8) / (local_108 * 111320.0);
        local_50 = local_a0;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_fakeLocationAltitude_026ac6a8);
      if (DAT_0232c3a0 <= ABS(local_a0)) {
        if (((local_d4 & 1) == 0) && (((ulong)puVar5 & 1) != 0)) {
          uVar3 = _arc4random_uniform(200);
          local_a0 = local_a0 + ((double)uVar3 / 100.0 - 1.0);
        }
      }
      else {
        if (((ulong)puVar5 & 1) == 0) {
          local_110 = 40.0;
        }
        else {
          uVar3 = _arc4random_uniform(1000);
          local_110 = (double)uVar3 / 100.0 + 35.0;
        }
        local_a0 = local_110;
      }
      if (((ulong)puVar5 & 1) == 0) {
        local_118 = 8.0;
      }
      else {
        uVar3 = _arc4random_uniform(800);
        local_118 = (double)uVar3 / 100.0 + 5.0;
      }
      if (((ulong)puVar5 & 1) == 0) {
        local_120 = 6.0;
      }
      else {
        uVar3 = _arc4random_uniform(600);
        local_120 = (double)uVar3 / 100.0 + 4.0;
      }
      local_b8 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastCourse_026ac7f0);
      local_c0 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastSpeed_026ac7f8);
      if ((local_d4 & 1) == 0) {
        local_b8 = -1.0;
        local_c0 = -1.0;
      }
      else {
        if (local_b8 < 0.0) {
          local_b8 = 0.0;
        }
        if (local_c0 < 0.0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_fakeLocationMoveSpeedMps_026ac670);
        }
      }
      puVar5 = PTR__OBJC_CLASS___CLLocation_026ceb88;
      _objc_alloc();
      puVar7 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,local_50,local_a0,local_118,local_120,local_b8,local_c0,puVar5,
                 PTR_s_initWithCoordinate_altitude_hori_026ac800);
      local_28 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar7);
    }
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

