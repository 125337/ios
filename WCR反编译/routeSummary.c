// routeSummary @ 00f5be60

/* Function Stack Size: 0x10 bytes */

ID WCRefineFakeLocationEngine::routeSummary(ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *local_18;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hasRoute_026ac648);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__g_;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_routeDistanceMeters_026ac608);
    local_18 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_routeCoords_026ac650);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

