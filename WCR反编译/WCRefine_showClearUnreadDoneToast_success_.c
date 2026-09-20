// WCRefine_showClearUnreadDoneToast:success: @ 0016dab0

/* Function Stack Size: 0x1c bytes */

void WCRefineClearUnreadMsgHook::WCRefine_showClearUnreadDoneToast_success_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if ((param_4 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToastAndShowErrorWithText__0269f838,&cf_Yt1Y_
               ,local_28);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToastAndShowDoneWithText_f_0269f848,&cf_Yt_b,
               local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

