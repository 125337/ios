// muteManageGroupsSummaryText @ 018a3ed8

/* Function Stack Size: 0x10 bytes */

ID WCRefineChatRoomFunctionViewController::muteManageGroupsSummaryText(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined1 *local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_muteManageGroupsForCurrentRule_026b76a0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_30 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  if (local_30 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_chatRoomMuteManageRule_026ab770);
    local_18 = &cf__gb;
    if (puVar2 != (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      local_18 = &cf__gbhQ_;
    }
    (*(code *)PTR__objc_retain_02578638)();
  }
  else {
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar3;
  }
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

