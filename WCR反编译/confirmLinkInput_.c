// confirmLinkInput: @ 01b7f308

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRLongPressMenuPickerViewController::confirmLinkInput_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_138;
  cfstringStruct *local_e8;
  cfstringStruct *local_d0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_7a;
  bool local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  bool local_61;
  cfstringStruct *local_60;
  byte local_51;
  cfstringStruct *local_50;
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
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingCustomKind_026b70d0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_28;
  local_40 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_customAlert_026b70d8);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_51 = 0;
  local_61 = false;
  bVar1 = ((ulong)pcVar2 & 1) == 0;
  if (bVar1) {
    local_d0 = local_38;
  }
  else {
    local_d0 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_customAlert_026b70d8);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_d0;
  }
  local_61 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_d0;
  if ((local_61 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
  local_79 = false;
  bVar1 = ((ulong)pcVar2 & 1) == 0;
  if (bVar1) {
    local_e8 = &::cf___;
  }
  else {
    local_e8 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_e8;
  }
  local_79 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_e8;
  if ((local_79 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingCustomKind__026b70a8);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCustomAlert__026b70c0,0);
  pcVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_miniprogram);
  local_7a = SUB81(pcVar3,0);
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  pcVar2 = &cf_icons_outlined_miniprogram;
  if (((ulong)pcVar3 & 1) == 0) {
    pcVar2 = &cf_icons_outlined_link;
  }
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  pcVar3 = local_70;
  FUN_01b7f7ec(local_70,pcVar2,&local_a0,&local_a8,&local_b0);
  _objc_storeStrong(&local_88,local_a0);
  _objc_storeStrong(&local_90,local_a8);
  _objc_storeStrong(&local_98,local_b0);
  if (((ulong)pcVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_cTy_);
  }
  else {
    if (local_40 == (cfstringStruct *)0x0) {
      local_138 = &cf_url;
    }
    else {
      local_138 = local_40;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePluginIconCatalog_026ce4e0,
               PTR_s_addLongPressCustomItemWithTitle__026bfc10,local_88,local_138,local_90,local_98)
    ;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__mR0R_cUS);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,0);
  }
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

