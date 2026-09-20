// applyRouteDicts: @ 00f5e52c

/* Function Stack Size: 0x18 bytes */

void WCRefineFakeLocationEngine::applyRouteDicts_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_saveRouteDicts__026ac6c0,local_28);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadRouteFromConfig_026ac5b8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTraveledMeters__026ac5f8);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(0,puVar1,PTR_s_setFakeLocationMoveProgress__026ac6c8);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_routeCoords_026ac650);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (1 < IVar3) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setFakeLocationMoveRunning__026ac6d0,1);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ensureTimer_026ac680);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_warmWeChatLocationCache_026ac688);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

