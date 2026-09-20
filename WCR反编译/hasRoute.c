// hasRoute @ 00f5bd8c

/* Function Stack Size: 0x10 bytes */

bool WCRefineFakeLocationEngine::hasRoute(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  double in_d0;
  bool local_24;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_routeCoords_026ac650);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_24 = 0;
  if (1 < IVar2) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_routeDistanceMeters_026ac608);
    local_24 = (bool)(1.0 < in_d0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return local_24;
}

