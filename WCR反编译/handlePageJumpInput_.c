// handlePageJumpInput: @ 01b1e118

/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAlertHistoryCardViewController::handlePageJumpInput_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ID IVar4;
  undefined *puVar5;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_01b0f0fc();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pageCount_026bea90);
  puVar1 = PTR_WCRefineHelper_026ce000;
  if (((long)uVar2 < 1) || (IVar4 < uVar2)) {
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf_eQ);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentPage__0269f4f0,uVar2 - 1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateBottomBar_026be928);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_scrollToCurrentPageAnimated__026beaa8,1);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

