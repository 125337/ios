// confirmLayoutEdit: @ 018ce040

/* Function Stack Size: 0x18 bytes */

void WCRefineChatToolbarViewController::confirmLayoutEdit_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  cfstringStruct *local_b0;
  cfstringStruct *local_98;
  undefined8 local_80;
  bool local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  bool local_59;
  cfstringStruct *local_58;
  byte local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layoutAlert_026b80d0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_49 = 0;
  local_59 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_98 = local_38;
  }
  else {
    local_98 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layoutAlert_026b80d0);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_98;
  }
  local_59 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_98;
  if ((local_59 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
  local_71 = false;
  bVar1 = ((ulong)pcVar2 & 1) == 0;
  if (bVar1) {
    local_b0 = &::cf___;
  }
  else {
    local_b0 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_b0;
  }
  local_71 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_b0;
  if ((local_71 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  pcVar2 = local_68;
  uVar6 = 0;
  local_80 = 0;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingLayoutMin_026b80a8);
  uVar7 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingLayoutMax_026b80b0);
  FUN_018ce530(uVar6,uVar7,pcVar2,&local_80);
  puVar5 = PTR_WCRefineHelper_026ce000;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (((ulong)pcVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingLayoutMin_026b80a8);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingLayoutMax_026b80b0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&::cf_eQ);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_showModernToast__0269ce78);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  else {
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingLayoutKey_026b80d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setValue_forKey__0269d300,puVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingLayoutKey__026b8090);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setPendingLayoutItemIndex__026b7e58,DAT_02339d98);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLayoutAlert__026b80c8,0);
    FUN_018ca37c();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

