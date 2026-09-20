// editJoinNameKeywords @ 018b5264

/* Function Stack Size: 0x10 bytes */

void WCRefineChatRoomManageViewController::editJoinNameKeywords(ID param_1,SEL param_2)

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
            (param_1,PTR_s_editKeywordFieldTitle_subtitle_p_026b7a88,&cf_eQ_5fysQ_,&cf__T_N_5fy,
             &cf___JT_,puVar2,&PTR___NSConcreteGlobalBlock_02589e68);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

