// muteManageGroupsForCurrentRule @ 018a3cb4

/* Function Stack Size: 0x10 bytes */

ID WCRefineChatRoomFunctionViewController::muteManageGroupsForCurrentRule(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *local_60;
  undefined1 *local_48;
  undefined1 *local_30;
  SEL local_28;
  ID local_20;
  undefined1 *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_chatRoomMuteManageRule_026ab770);
  if (puVar1 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_chatRoomMuteManageIncludeGroups_026ab760);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    if (puVar2 == (undefined1 *)0x0) {
      local_48 = *(undefined1 **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_48;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_chatRoomMuteManageExcludeGroups_026ab768);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar2;
    if (puVar2 == (undefined1 *)0x0) {
      local_60 = *(undefined1 **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_60;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

