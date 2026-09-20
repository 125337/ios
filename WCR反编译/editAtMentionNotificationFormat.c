// editAtMentionNotificationFormat @ 018a74d0

/* Function Stack Size: 0x10 bytes */

void WCRefineChatRoomFunctionViewController::editAtMentionNotificationFormat(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  ID local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_30 = &cf_W_k_;
  puVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_atMentionNotificationFormat_026a4510);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_018a76a8;
  local_48 = &DAT_02589d98;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (0,puVar2,PTR_s_presentPageSheetMultilineInputWi_026ab118,&cf__yrw<h_,&cf_e,&cf_W_k_,
             puVar3,&local_60);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (local_38 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_Sb);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

