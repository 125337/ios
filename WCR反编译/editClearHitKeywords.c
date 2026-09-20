// editClearHitKeywords @ 018b53f4

/* Function Stack Size: 0x10 bytes */

void WCRefineChatRoomManageViewController::editClearHitKeywords(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_editKeywordFieldTitle_subtitle_p_026b7a88,&cf_nzzSN,&cf__S0_,&cf_nzz_,
             puVar2,&PTR___NSConcreteGlobalBlock_02589e88);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

