// confirmValueInput: @ 018d43f8

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRChatToolbarAdjustmentViewController::confirmValueInput_
          (WCRChatToolbarAdjustmentViewController *this,ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 in_d0;
  cfstringStruct *local_f8;
  cfstringStruct *local_e0;
  undefined8 local_b0 [2];
  undefined8 local_a0;
  bool local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  bool local_79;
  cfstringStruct *local_78;
  byte local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  uint local_50;
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
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingItemIndex_026b8208);
  local_49 = 0;
  bVar1 = true;
  local_40 = pcVar2;
  if (-1 < (long)pcVar2) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = (long)pcVar3 <= (long)pcVar2;
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if (bVar1) {
    local_50 = 1;
  }
  else {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentAlert_026aa350);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_69 = 0;
    local_79 = false;
    bVar1 = ((ulong)pcVar3 & 1) == 0;
    if (bVar1) {
      local_e0 = local_38;
    }
    else {
      local_e0 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentAlert_026aa350);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_e0;
    }
    local_79 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_e0;
    if ((local_79 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
    local_91 = false;
    bVar1 = ((ulong)pcVar2 & 1) == 0;
    if (bVar1) {
      local_f8 = &::cf___;
    }
    else {
      local_f8 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_90 = local_f8;
    }
    local_91 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = local_f8;
    if ((local_91 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    pcVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_min);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_58;
    local_a0 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_max);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_b0[0] = 0;
    pcVar2 = local_88;
    FUN_018ce530(local_a0,in_d0,local_88,local_b0);
    puVar4 = PTR_WCRefineHelper_026ce000;
    bVar1 = ((ulong)pcVar2 & 1) != 0;
    if (bVar1) {
      puVar4 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0[0],PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setValue_forKey__0269d300,puVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setPendingItemIndex__026b8180,DAT_02339d98);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCurrentAlert__026aa348,0);
      FUN_018ca37c();
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadTableData_0269dca8);
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf_eQ);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_showModernToast__0269ce78);
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    local_50 = (uint)!bVar1;
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

