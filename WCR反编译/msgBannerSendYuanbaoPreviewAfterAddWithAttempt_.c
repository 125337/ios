// msgBannerSendYuanbaoPreviewAfterAddWithAttempt: @ 01b91a58

/* Function Stack Size: 0x18 bytes */

void WCRefineMessageBannerBeautifyViewController::msgBannerSendYuanbaoPreviewAfterAddWithAttempt_
               (ID param_1,SEL param_2,long_long param_3)

{
  dispatch_time_t dVar1;
  undefined *puVar2;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 auStack_40 [8];
  long_long local_38;
  undefined1 auStack_30 [8];
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_msgBannerYuanbaoIsFriend_026bffa0);
  if ((param_1 & 1) == 0) {
    if ((long)local_28 < 8) {
      if (local_28 == 1) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_msgBannerAddYuanbaoContactIfNeed_026bffb0);
      }
      _objc_initWeak(auStack_30,local_18);
      dVar1 = _dispatch_time(0,400000000);
      puVar2 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_60 = PTR___NSConcreteStackBlock_02578660;
      local_58 = 0xc2000000;
      local_54 = 0;
      local_50 = FUN_01b91be4;
      local_48 = &DAT_025799c0;
      _objc_copyWeak(auStack_40,auStack_30);
      local_38 = local_28;
      _dispatch_after(dVar1,puVar2,&local_60);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_30);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQmRCQ__YSTQ);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_msgBannerSendYuanbaoPreviewIfFri_026bffc0);
  }
  return;
}

