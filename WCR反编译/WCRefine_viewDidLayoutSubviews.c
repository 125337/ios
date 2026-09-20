// WCRefine_viewDidLayoutSubviews @ 004caccc

/* Function Stack Size: 0x10 bytes */

void WCRefineMainFrameSearchButton::WCRefine_viewDidLayoutSubviews(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_WCRefine_viewDidLayoutSubviews_026a4050);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_21 = (byte)puVar3;
  IVar4 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028cac46);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_boolValue_026ca540);
  if ((local_21 & 1) == 0) {
    if ((IVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefine_restoreNativeSearchBar_026a4068)
      ;
      IVar4 = local_18;
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(IVar4,&DAT_028cac46,puVar2,1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefine_removeNativeSearchBar_026a4060);
    IVar1 = local_18;
    if ((IVar4 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(IVar1,&DAT_028cac46,puVar2,1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
  }
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefine_tryEmbedSearchButtonInt_026a4080);
  FUN_004ca9dc();
  if ((IVar4 & 1) == 0) {
    FUN_004caafc();
    if (((IVar4 & 1) != 0) && (IVar4 = local_18, FUN_004cab6c(), (IVar4 & 1) != 0)) {
      FUN_004cabc8(local_18,0);
    }
  }
  else {
    FUN_004ca9f8(local_18,0);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

