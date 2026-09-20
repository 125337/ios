// claimWebMessageHandlerOwnership @ 01e87770

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoCardView::claimWebMessageHandlerOwnership(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 != 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_28 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_removeScriptMessageHandlerForNam_026a8e60,&cf_WCRefineTM);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_addScriptMessageHandler_name__026a8f00,local_18,&cf_WCRefineTM);
    _objc_storeWeak(&DAT_028e4800,local_18);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

