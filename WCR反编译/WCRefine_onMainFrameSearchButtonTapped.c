// WCRefine_onMainFrameSearchButtonTapped @ 004cc578

/* Function Stack Size: 0x10 bytes */

void WCRefineMainFrameSearchButton::WCRefine_onMainFrameSearchButtonTapped(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_getAssociatedObject(param_1,&DAT_028cac49);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_boolValue_026ca540);
  IVar1 = local_18;
  if ((param_1 & 1) == 0) {
    FUN_004cc684();
    if ((param_1 & 1) == 0) {
      FUN_004cc720(local_18);
    }
    else {
      FUN_004cc6a0(local_18);
    }
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(IVar1,&DAT_028cac49,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

