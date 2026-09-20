// floatBarRename @ 01f966e8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackPickerViewController::floatBarRename(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_110;
  cfstringStruct *local_100;
  cfstringStruct *local_f0;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [15];
  byte local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  byte local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_selectedItems_026c9980);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_count_0269cfe0);
  puVar2 = PTR_WCRefineHelper_026ce000;
  if (pcVar3 == (cfstringStruct *)((long)&MACH_HEADER.magic + 1)) {
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_name_0269d828);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_f0 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_f0;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isDirectory_026b0ba0);
    local_61 = 0;
    bVar1 = ((ulong)pcVar3 & 1) == 0;
    if (bVar1) {
      local_100 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_pathExtension_0269e090);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_100;
    }
    else {
      local_100 = &::cf___;
    }
    local_61 = bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_100;
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    pcVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isDirectory_026b0ba0);
    local_79 = 0;
    bVar1 = ((ulong)pcVar3 & 1) == 0;
    if (bVar1) {
      local_110 = (cfstringStruct *)PTR_WCRefineVoicePackStore_026cea20;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineVoicePackStore_026cea20,PTR_s_listTitleForItem__026c97e8,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_110;
    }
    else {
      local_110 = local_50;
    }
    local_79 = bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_110;
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    _objc_initWeak(auStack_88,local_28);
    pcVar3 = local_70;
    local_c0 = PTR___NSConcreteStackBlock_02578660;
    local_b8 = 0xc2000000;
    local_b4 = 0;
    local_b0 = FUN_01f96e88;
    local_a8 = &DAT_02589188;
    pcVar5 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar4 = local_58;
    local_a0 = pcVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = pcVar4;
    _objc_copyWeak(auStack_90,auStack_88);
    FUN_01f96b94(&cf__TT,&::cf_newline_s_,pcVar3,0x3c,&cf_nx_,&local_c0);
    _objc_destroyWeak(auStack_90);
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_a0,0);
    _objc_destroyWeak(auStack_88);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  else {
    pcVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
    pcVar3 = &cf_HQb;
    if (pcVar4 != (cfstringStruct *)0x0) {
      pcVar3 = &cf__TTN_ecUS;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_showModernToast__0269ce78,pcVar3);
    local_3c = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

