// editHangupAutoReplyText @ 01cb52b0

/* Function Stack Size: 0x10 bytes */

void WCRefinePrivateFriendViewController::editHangupAutoReplyText(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_WCRefinePrivateFriendManager_026ce160;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_presentTextAlertWithTitle_messag_026c3240,&cf_ceTRVY,
             &cf_N_Wy__YSeg5uRceTS,puVar2,PTR_s_handleHangupAutoReplyText__026c3238);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

