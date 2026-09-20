// editDisguiseBody @ 01cbc870

/* Function Stack Size: 0x10 bytes */

void WCRefinePrivateFriendViewController::editDisguiseBody(ID param_1,SEL param_2)

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
            (param_1,PTR_s_presentTextAlertWithTitle_messag_026c3240,&cf__OQ_,&cf_w_NV_>f_yvQ_,
             puVar2,PTR_s_handleDisguiseBody__026c34a8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

