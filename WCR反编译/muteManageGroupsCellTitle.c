// muteManageGroupsCellTitle @ 018a3e38

/* Function Stack Size: 0x10 bytes */

ID WCRefineChatRoomFunctionViewController::muteManageGroupsCellTitle(ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined1 *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_chatRoomMuteManageRule_026ab770);
  pcVar2 = &::cf__;
  if (puVar1 != (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    pcVar2 = &::cf__;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)pcVar2;
}

