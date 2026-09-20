// finishLoadingUI @ 01bd302c

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsCacheViewController::finishLoadingUI(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  ID local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setIsLoading__026c06f8,0);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadingView_026c0770);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadingToast_026c0778);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (IVar2 == 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_30 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_customView_0269ea28);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIActivityIndicatorView_026cebe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIActivityIndicatorView_026cebe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_30,0);
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_allItems_026a2730);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf__R_);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar4;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar1 = local_28;
    puVar4 = PTR_WCRefineHelper_026ce000;
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_loadingToast_026c0778);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_hideWeToastAndShowDoneWithText_f_0269f848,puVar1);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setLoadingToast__026c0780);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

