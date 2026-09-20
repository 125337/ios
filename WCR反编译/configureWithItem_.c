// configureWithItem: @ 018e2170

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRClipHistoryManageCell::configureWithItem_
          (WCRClipHistoryManageCell *this,ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  cfstringStruct *pcVar7;
  double in_d0;
  double local_218;
  ulong local_110;
  byte local_ec;
  undefined *local_e8;
  byte local_d9;
  ulong local_d8;
  double local_d0;
  byte local_c1;
  cfstringStruct *local_c0;
  byte local_b1;
  cfstringStruct *local_b0;
  undefined *local_a8;
  byte local_99;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  byte local_63;
  byte local_62;
  bool local_61;
  ulong local_60;
  ulong local_58;
  byte local_49;
  ulong local_48;
  byte local_39;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,_WCRClipboardItemPinnedKey);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_49 = 0;
  local_ec = 0;
  if ((uVar3 & 1) != 0) {
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,_WCRClipboardItemPinnedKey);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_ec = (byte)uVar3;
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  local_39 = local_ec & 1;
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,_WCRClipboardItemTypeKey);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  local_61 = false;
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    local_110 = _WCRClipboardItemTypeText;
  }
  else {
    local_110 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,_WCRClipboardItemTypeKey);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_110;
  }
  local_61 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_110;
  if ((local_61 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_isEqualToString__0269ccc8,_WCRClipboardItemTypeImage);
  local_62 = (byte)uVar2;
  uVar2 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_isEqualToString__0269ccc8,_WCRClipboardItemTypeMessage);
  local_63 = (byte)uVar2;
  puVar4 = PTR_WCRClipboardHistoryStore_026ce680;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_kindTitleForItem__026b8280,local_38);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_WCRClipboardHistoryStore_026ce680;
  local_70 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_typeColorForItem__026b8288,local_38);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_WCRClipboardHistoryStore_026ce680;
  local_78 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_noteForItem__026b8290,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_88 = (undefined *)0x0;
  local_80 = puVar4;
  if (((local_62 & 1) != 0) || ((local_63 & 1) != 0)) {
    puVar5 = PTR_WCRClipboardHistoryStore_026ce680;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_thumbForItem__026aaab0,local_38);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_88;
    local_88 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (local_88 == (undefined *)0x0) {
      puVar5 = PTR_WCRClipboardHistoryStore_026ce680;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_imageForItem__026aa848,local_38);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_88;
      local_88 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
  }
  puVar4 = local_88;
  FUN_018e2e48();
  _objc_retainAutoreleasedReturnValue();
  IVar6 = local_28;
  local_90 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_thumbView_026aa820);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar6);
  IVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_thumbView_026aa820);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar6);
  IVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_thumbView_026aa820);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar6);
  IVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_badgeLabel_026aa858);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar6);
  IVar6 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_badgeLabel_026aa858);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar6);
  puVar4 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  local_99 = 0;
  if (puVar4 != (undefined *)0x0) {
    puVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_substringToIndex__0269d6c0,1);
    _objc_retainAutoreleasedReturnValue();
    local_98 = puVar5;
  }
  IVar6 = local_28;
  local_99 = puVar4 != (undefined *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_badgeLabel_026aa858);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar6);
  if ((local_99 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_98);
  }
  puVar4 = PTR_WCRClipboardHistoryStore_026ce680;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRClipboardHistoryStore_026ce680,PTR_s_previewTitleForItem__026aa840,local_38);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  FUN_018e32d8();
  _objc_retainAutoreleasedReturnValue();
  local_a8 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar4 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
  if (puVar4 == (undefined *)0x0) {
    local_c1 = 0;
    bVar1 = (local_39 & 1) != 0;
    if (bVar1) {
      pcVar7 = &cf__;
      (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_stringByAppendingString__0269d398,local_70);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = pcVar7;
    }
    IVar6 = local_28;
    local_c1 = bVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar6);
    if ((local_c1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_c0);
    }
    IVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewLabel_026aa860);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar6);
  }
  else {
    local_b1 = 0;
    bVar1 = (local_39 & 1) != 0;
    if (bVar1) {
      pcVar7 = &cf__;
      (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_stringByAppendingString__0269d398,local_80);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = pcVar7;
    }
    IVar6 = local_28;
    local_b1 = bVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleLabel_026caba0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar6);
    if ((local_b1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b0);
    }
    IVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewLabel_026aa860);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar6);
  }
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,_WCRClipboardItemTimeKey);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_d9 = 0;
  if ((uVar3 & 1) == 0) {
    local_218 = 0.0;
  }
  else {
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,_WCRClipboardItemTimeKey);
    _objc_retainAutoreleasedReturnValue();
    local_d9 = 1;
    local_d8 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_218 = in_d0;
  }
  if ((local_d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  local_d0 = local_218;
  if (local_218 <= 0.0) {
    IVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_timeLabel_026aa818);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar6);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDateFormatter_026ce098,PTR_s_new_0269d288);
    local_e8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setDateFormat__0269d1c8,&cf_MM_ddHH_mm);
    puVar4 = local_e8;
    puVar5 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR__OBJC_CLASS___NSDate_026cdf88,
               PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringFromDate__0269d1d8);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_timeLabel_026aa818);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar6);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_e8,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setNeedsLayout_0269deb8);
  _objc_storeStrong(&local_a8);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_38,0);
  return;
}

