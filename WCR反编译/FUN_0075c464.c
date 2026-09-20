// FUN_0075c464 @ 0075c464

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0075c464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong local_120;
  uint local_10c;
  byte local_ec;
  cfstringStruct *local_e0;
  bool local_a9;
  ulong local_a8;
  ulong local_a0;
  cfstringStruct *local_98;
  byte local_89;
  long local_88;
  ulong local_80;
  ulong local_78;
  long local_70;
  ulong local_68;
  ulong local_60;
  byte local_54;
  byte local_53;
  byte local_52;
  bool local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_38 = 0;
  local_30 = param_2;
  _objc_storeStrong(&local_38,param_3);
  pcVar2 = _WCRefineTextStyleSearchPlaceholder;
  FUN_0075ede8();
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_51 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_e0 = &cf___;
  }
  else {
    local_e0 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_text)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_e0;
  }
  local_51 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_e0;
  if ((local_51 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  local_52 = (byte)pcVar4;
  uVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_d__);
  local_ec = 1;
  if ((uVar5 & 1) == 0) {
    uVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_Search);
    local_ec = (byte)uVar5;
  }
  local_53 = local_ec & 1;
  uVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,local_48);
  local_54 = (byte)uVar5;
  uVar5 = local_28;
  _objc_getAssociatedObject(local_28,DAT_026f4638);
  _objc_retainAutoreleasedReturnValue();
  local_60 = uVar5;
  if ((local_53 & 1) != 0) {
    _objc_storeStrong(&local_60,local_38);
    _objc_setAssociatedObject(local_28,DAT_026f4638,local_60,3);
  }
  uVar5 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = uVar5;
  if (((local_52 & 1) == 0) ||
     ((((local_53 & 1) == 0 && ((local_54 & 1) == 0)) ||
      (pcVar2 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
      pcVar2 == (cfstringStruct *)0x0)))) {
    if ((((local_52 & 1) == 0) && ((local_54 & 1) != 0)) &&
       (uVar5 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
       uVar5 != 0)) {
      _objc_storeStrong(uVar5,&local_68,local_60);
    }
  }
  else {
    _objc_storeStrong(pcVar2,&local_68,local_48);
  }
  local_70 = 0;
  uVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_placeHolderLabel_026a7d60);
  if ((uVar5 & 1) != 0) {
    uVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_placeHolderLabel_026a7d60);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    local_78 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar5 & 1) != 0) {
      _objc_storeStrong(&local_70,local_78);
    }
    _objc_storeStrong(&local_78,0);
  }
  local_80 = 0;
  uVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_placeholder_026a7d98);
  if ((uVar5 & 1) != 0) {
    uVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_placeholder_026a7d98);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_80;
    local_80 = uVar6;
    (*(code *)PTR__objc_release_02578630)(uVar5);
  }
  uVar5 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,local_68);
  local_89 = 0;
  local_10c = 1;
  if ((uVar5 & 1) != 0) {
    lVar7 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_89 = 1;
    local_88 = lVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_10c = (uint)lVar7 ^ 1;
  }
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  if ((local_10c & 1) != 0) {
    pcVar2 = &cf_wcr_special_original_setPlaceholder_;
    _NSSelectorFromString();
    local_98 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,pcVar2,local_68);
    uVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_placeHolderLabel_026a7d60);
    local_a9 = (uVar5 & 1) == 0;
    if (local_a9) {
      local_120 = 0;
    }
    else {
      local_120 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_placeHolderLabel_026a7d60);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = local_120;
    }
    local_a9 = !local_a9;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = local_120;
    if (local_a9) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    uVar5 = local_a0;
    puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar5 & 1) != 0) {
      _objc_storeStrong(&local_70,local_a0);
    }
    _objc_storeStrong(&local_a0,0);
  }
  if (local_70 != 0) {
    uVar5 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    if (uVar5 != 0) {
      _objc_setAssociatedObject(local_70,DAT_026f4610,local_60,3);
    }
    FUN_007602b4(local_28,local_70,0);
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

