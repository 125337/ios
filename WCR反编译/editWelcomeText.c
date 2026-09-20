// editWelcomeText @ 018aa9b4

/* Function Stack Size: 0x10 bytes */

void WCRefineChatRoomFunctionViewController::editWelcomeText(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_98;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined1 auStack_50 [8];
  undefined *local_48;
  undefined1 auStack_40 [8];
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = &cf__k;
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_98 = local_28;
  }
  else {
    local_98 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_98;
  _objc_initWeak(auStack_40,local_18);
  pcVar1 = local_38;
  puVar3 = PTR_WCRefineHelper_026ce000;
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_018aac4c;
  local_58 = &DAT_02589100;
  _objc_copyWeak(auStack_50,auStack_40);
  (*(code *)PTR__objc_msgSend_02578628)
            (0,puVar3,PTR_s_presentPageSheetMultilineInputWi_026ab118,&cf_n__keHh,
             &cf_tekSS_TbcLNOcbcLRbbYag,&cf_eQ_keHh_,pcVar1,&local_70);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
  }
  _objc_storeStrong(&local_48);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

