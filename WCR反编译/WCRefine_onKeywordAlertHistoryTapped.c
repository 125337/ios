// WCRefine_onKeywordAlertHistoryTapped @ 004c5318

/* Function Stack Size: 0x10 bytes */

void WCRefineMainFrameMenuSearchItem::WCRefine_onKeywordAlertHistoryTapped(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID local_60;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((param_1 & 1) == 0) {
    local_60 = 0;
  }
  else {
    local_60 = local_18;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_pushKeywordAlertHistoryViewContr_026a4000,local_60,1)
  ;
  _objc_storeStrong(&local_28,0);
  return;
}

