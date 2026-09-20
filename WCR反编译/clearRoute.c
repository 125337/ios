// clearRoute @ 00f5c910

/* Function Stack Size: 0x10 bytes */

void WCRefineFakeLocationEngine::clearRoute(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR____NSArray0___02578280;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_setRouteCoords__026ac5d8,*(undefined8 *)PTR____NSArray0___02578280);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setRouteDistanceMeters__026ac5e8);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_18,PTR_s_setTraveledMeters__026ac5f8);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_saveRouteDicts__026ac6c0,*(undefined8 *)puVar1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(0,puVar1,PTR_s_setFakeLocationMoveProgress__026ac6c8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFakeLocationMoveRunning__026ac6d0,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ensureTimer_026ac680);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_warmWeChatLocationCache_026ac688);
  _objc_storeStrong(&local_28,0);
  return;
}

