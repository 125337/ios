// pickBoardPages @ 01dd4444

/* Function Stack Size: 0x10 bytes */

void WCRefineSessionStatsViewController::pickBoardPages(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *local_40;
  uint local_34;
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_layoutMode_026c5648);
  puVar1 = PTR_WCRefineSessionStatsLayoutViewController_026cf5e8;
  local_28 = param_1;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  IVar2 = local_18;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar2 == 0) {
    puVar1 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_presentViewController_animated_c_0269d2b0,puVar1,1);
    _objc_storeStrong(&local_40,0);
  }
  else {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  local_34 = (uint)(IVar2 != 0);
  _objc_storeStrong(&local_30,0);
  return;
}

