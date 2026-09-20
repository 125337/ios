// pickMuteManageGroups @ 018a4968

/* Function Stack Size: 0x10 bytes */

void WCRefineChatRoomFunctionViewController::pickMuteManageGroups(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined1 auStack_50 [8];
  byte local_48;
  undefined1 auStack_40 [8];
  ID local_38;
  byte local_29;
  undefined1 *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_chatRoomMuteManageRule_026ab770);
  local_29 = puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1);
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_muteManageGroupsForCurrentRule_026b76a0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar4;
  _objc_initWeak(auStack_40,local_18);
  IVar2 = local_18;
  IVar4 = local_38;
  puVar3 = PTR_WCRefineChatRoomPicker_026cef60;
  pcVar1 = &cf_b_J;
  if ((local_29 & 1) == 0) {
    pcVar1 = &cf_cd_J;
  }
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_018a4b40;
  local_58 = &DAT_02589cd8;
  local_48 = local_29 & 1;
  _objc_copyWeak(auStack_50,auStack_40);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_presentFromViewController_title__026ab898,IVar2,pcVar1,IVar4,&local_70);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

