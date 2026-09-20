// editLeaveLocalNotifyFormat @ 018ad55c

/* Function Stack Size: 0x10 bytes */

void WCRefineChatRoomFunctionViewController::editLeaveLocalNotifyFormat(ID param_1,SEL param_2)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_b8;
  cfstringStruct *local_a8;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  ID local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = &::cf___;
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_a8 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_a8 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_a8;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_b8 = local_38;
  }
  else {
    local_b8 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_b8;
  (*(code *)PTR__objc_retain_02578638)();
  pcVar3 = local_38;
  pcVar2 = local_48;
  puVar4 = PTR_WCRefineHelper_026ce000;
  local_50 = &cf_Ty_;
  local_88 = PTR___NSConcreteStackBlock_02578660;
  local_80 = 0xc2000000;
  local_7c = 0;
  local_78 = FUN_018ad850;
  local_70 = &DAT_02589df8;
  (*(code *)PTR__objc_retain_02578638)();
  IVar1 = local_28;
  local_68 = pcVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (0,puVar4,PTR_s_presentPageSheetMultilineInputWi_026ab118,&cf___c_y<h_,&cf__g0W,&cf_Ty_,
             pcVar2,&local_88);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

