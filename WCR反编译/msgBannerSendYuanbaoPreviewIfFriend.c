// msgBannerSendYuanbaoPreviewIfFriend @ 01b91354

/* Function Stack Size: 0x10 bytes */

void WCRefineMessageBannerBeautifyViewController::msgBannerSendYuanbaoPreviewIfFriend
               (ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_msgBannerYuanbaoIsFriend_026bffa0);
  if ((param_1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_sendMsg_toContactUsrName__0269d3f0,&cf_8Yb,
               &cf_wxid_wi_1d142z0zdj03);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__S);
  }
  return;
}

