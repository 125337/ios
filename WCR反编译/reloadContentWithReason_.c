// reloadContentWithReason: @ 01e802c0

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineToDoCardView::reloadContentWithReason_
          (WCRefineToDoCardView *this,ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  undefined *puVar8;
  cfstringStruct *local_168;
  byte local_110;
  byte local_100;
  byte local_ec;
  bool local_d9;
  cfstringStruct *local_d8;
  undefined *local_d0;
  byte local_c1;
  cfstringStruct *local_c0;
  undefined4 local_b0;
  byte local_a9;
  ID local_a8;
  byte local_99;
  ID local_98;
  byte local_89;
  ID local_88;
  byte local_79;
  ID local_78;
  byte local_69;
  ID local_68;
  byte local_5b;
  byte local_5a;
  byte local_59;
  ID local_58;
  byte local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar1;
  FUN_01e80dac();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_28;
  local_48 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastAppliedContentSignature_026c70c8);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_59 = 0;
  local_ec = 0;
  if (IVar3 != 0) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastAppliedContentSignature_026c70c8);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_ec = (byte)IVar3;
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_5a = local_ec & 1;
  IVar2 = local_28;
  local_49 = local_5a;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
  _objc_retainAutoreleasedReturnValue();
  local_69 = 0;
  local_79 = 0;
  local_89 = 0;
  local_99 = 0;
  local_a9 = 0;
  local_100 = 0;
  if (IVar2 != 0) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    IVar4 = local_28;
    local_78 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cardContainer_026be658);
    _objc_retainAutoreleasedReturnValue();
    local_89 = 1;
    local_110 = 1;
    local_88 = IVar4;
    if (IVar3 != IVar4) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_webView_026a12c0);
      _objc_retainAutoreleasedReturnValue();
      local_99 = 1;
      local_98 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_a9 = 1;
      puVar5 = PTR__OBJC_CLASS___UITableView_026ce1a8;
      local_a8 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
      local_110 = (byte)IVar3;
    }
    local_100 = local_110;
  }
  if ((local_a9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a8);
  }
  if ((local_99 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_98);
  }
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_5b = local_100 & 1;
  pcVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toDoCardSourceMode_026a8828);
  if (pcVar1 == (cfstringStruct *)((long)&MACH_HEADER.magic + 2)) {
    local_5a = 0;
    if ((local_49 & 1) != 0) {
      local_5a = local_5b;
    }
    local_5a = local_5a & 1;
  }
  DAT_028e4818 = DAT_028e4818 + 1;
  FUN_01e6cacc();
  if ((local_5a & 1) == 0) {
    DAT_028e4828 = DAT_028e4828 + 1;
    _CACurrentMediaTime();
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toDoCardSourceMode_026a8828);
    if (pcVar1 != (cfstringStruct *)((long)&MACH_HEADER.magic + 2)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_detachWebViewForNonWebMode_026c70d0);
    }
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toDoCardTitle_026c70d8);
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_c1 = 0;
    if (pcVar6 != (cfstringStruct *)0x0) {
      pcVar7 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toDoCardTitle_026c70d8);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = pcVar7;
    }
    IVar2 = local_28;
    local_c1 = pcVar6 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if ((local_c1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_c0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toDoCardDateEnabled_026c6df8);
    if (((ulong)pcVar1 & 1) == 0) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dateLabel_026c09a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
      _objc_alloc_init();
      pcVar1 = local_40;
      local_d0 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toDoCardDateFormat_026c70e0);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (pcVar6 == (cfstringStruct *)0x0) {
        local_168 = &cf_yyyy_MM_ddEEE;
      }
      else {
        local_168 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toDoCardDateFormat_026c70e0);
        _objc_retainAutoreleasedReturnValue();
        local_d8 = local_168;
      }
      local_d9 = pcVar6 != (cfstringStruct *)0x0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setDateFormat__0269d1c8,local_168);
      if (local_d9) {
        (*(code *)PTR__objc_release_02578630)(local_d8);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      puVar5 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
                 &cf_zh_CN);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_setLocale__0269d1c0);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      puVar5 = local_d0;
      puVar8 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringFromDate__0269d1d8);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dateLabel_026c09a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      _objc_storeStrong(&local_d0,0);
    }
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_itemsStack_026c6eb0);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toDoCardSourceMode_026a8828);
    if (pcVar1 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_renderLocalItems_026c70e8);
    }
    else if (pcVar1 == (cfstringStruct *)((long)&MACH_HEADER.magic + 1)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_renderOfficialScheduleItems_026c70f0);
    }
    else if (pcVar1 == (cfstringStruct *)((long)&MACH_HEADER.magic + 2)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_renderWebView_026c7010);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNeedsLayout_0269deb8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setLastAppliedContentSignature__026c70f8,local_48);
    _CACurrentMediaTime();
    FUN_01e8166c();
    local_b0 = 0;
  }
  else {
    DAT_028e4820 = DAT_028e4820 + 1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_updateBackgroundMediaIfNeeded_026be698);
    FUN_01e8166c();
    local_b0 = 1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

