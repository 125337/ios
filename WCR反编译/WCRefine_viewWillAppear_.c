// WCRefine_viewWillAppear: @ 004ca7e4

/* Function Stack Size: 0x14 bytes */

void WCRefineMainFrameSearchButton::WCRefine_viewWillAppear_(ID param_1,SEL param_2,bool param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_WCRefine_viewWillAppear__026a4048,param_3 & 1)
  ;
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_WCRefine_removeNativeSearchBar_026a4060);
  }
  IVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_WCRefine_tryEmbedSearchButtonInt_026a4080);
  FUN_004ca9dc();
  if ((IVar3 & 1) == 0) {
    FUN_004caafc();
    if (((IVar3 & 1) != 0) && (IVar3 = param_1, FUN_004cab6c(), (IVar3 & 1) != 0)) {
      FUN_004cabc8(param_1,0);
    }
  }
  else {
    FUN_004ca9f8(param_1,0);
  }
  return;
}

