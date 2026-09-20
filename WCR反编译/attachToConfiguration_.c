// attachToConfiguration: @ 01cbd6fc

/* Function Stack Size: 0x18 bytes */

void WCRefineProfileBgHTMLRuntime::attachToConfiguration_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined *local_98;
  undefined *local_78 [4];
  byte local_51;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_3c;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (undefined *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  if (local_38 == (undefined *)0x0) {
    local_3c = 1;
  }
  else {
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_userContentController_026a1da8);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 0;
    local_98 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_98 = PTR__OBJC_CLASS___WKUserContentController_026ce500;
      _objc_alloc_init();
      local_50 = local_98;
    }
    local_51 = puVar1 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_98;
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_removeScriptMessageHandlerForNam_026a8e60,&cf_WCRefineTM);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_addScriptMessageHandler_name__026a8f00,local_28,&cf_WCRefineTM);
    puVar1 = local_48;
    puVar2 = PTR__OBJC_CLASS___WKUserScript_026ce508;
    _objc_alloc();
    puVar3 = puVar2;
    _WCRefineProfileBgHTMLSupportScript();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_initWithSource_injectionTime_for_026a1dc8,puVar3,0,0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addUserScript__026a1dd0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_workId_026c34c0);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (IVar5 != 0) {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_workId_026c34c0);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_workId_026c34c0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_stringWithFormat__0269cca8,
                 &
                 cf__function___window___WCR_WORK_ID________try_varm_document_createElement__meta___m_name__wcr_work_id__m_content_______document_head__document_documentElement__appendChild_m___catch_e________
                );
      _objc_retainAutoreleasedReturnValue();
      local_78[0] = puVar1;
      (*(code *)PTR__objc_release_02578630)(IVar5);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      puVar1 = local_48;
      puVar2 = PTR__OBJC_CLASS___WKUserScript_026ce508;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addUserScript__026a1dd0);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(local_78,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setUserContentController__026a1db0,local_48);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setURLSchemeHandler_forURLScheme_026a1da0,local_28,&cf_wcrasset);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setURLSchemeHandler_forURLScheme_026a1da0,local_28,&cf_wcrlyric);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

