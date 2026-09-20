// absoluteForRel: @ 01dfe0b0

/* Function Stack Size: 0x18 bytes */

ID WCRefineSuperFloatBallWarehouseViewController::absoluteForRel_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((IVar1 == 0) ||
     (IVar1 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_30,PTR_s_isEqualToString__0269ccc8,&cf___WCR_SF_NONE_ICON__), (IVar1 & 1) != 0
     )) {
    local_18 = 0;
  }
  else {
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf__);
    IVar1 = local_30;
    if ((IVar2 & 1) == 0) {
      IVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_docsDir_026c5bd8);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_18 = IVar2;
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = IVar1;
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

