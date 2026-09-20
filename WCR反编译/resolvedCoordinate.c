// resolvedCoordinate @ 00f5c524

/* Function Stack Size: 0x10 bytes */

CLLocationCoordinate2D WCRefineFakeLocationEngine::resolvedCoordinate(ID param_1,SEL param_2)

{
  CLLocationCoordinate2D CVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  double in_d0;
  double dVar5;
  double in_d1;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  double local_20;
  double local_18;
  
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_fakeLocationMoveRunning_026ac668);
  if ((((ulong)puVar3 & 1) != 0) &&
     (IVar4 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasRoute_026ac648),
     IVar2 = local_28, (IVar4 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_traveledMeters_026ac600);
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_routeCoords_026ac650);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_coordinateAtDistance_alongRoute__026ac658,IVar4,0);
    local_20 = in_d0;
    local_18 = in_d1;
    (*(code *)PTR__objc_release_02578630)();
    in_d0 = local_20;
    _CLLocationCoordinate2DIsValid(local_20,local_18);
    if ((IVar4 & 1) != 0) goto LAB_00f5c69c;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_fakeLocationLatitude_026ac690);
  dVar5 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_fakeLocationLongitude_026ac698);
  _CLLocationCoordinate2DMake();
  local_20 = in_d0;
  local_18 = dVar5;
LAB_00f5c69c:
  _objc_storeStrong(&local_38,0);
  CVar1.field1_0x8 = local_18;
  CVar1.field0_0x0 = local_20;
  return CVar1;
}

