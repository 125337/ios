// saveTapped @ 01ead100

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoItemEditViewController::saveTapped(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID local_168;
  ID local_130;
  undefined *local_e0;
  ID local_90;
  ID local_88;
  bool local_79;
  undefined *local_78;
  byte local_69;
  ID local_68;
  byte local_59;
  ID local_58;
  undefined *local_50;
  ID local_48;
  undefined4 local_3c;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_titleView_0269ea50);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = IVar6;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (IVar3 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQ_RQ_);
    local_3c = 1;
    goto LAB_01eadad4;
  }
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_noteView_026c7610);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar6;
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dateSwitch_026c7558);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_e0 = PTR_WCRefineToDoStore_026cf6a0;
  local_59 = 0;
  local_69 = 0;
  local_79 = false;
  bVar1 = (IVar4 & 1) == 0;
  if (bVar1) {
    local_e0 = (undefined *)0x0;
  }
  else {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_datePicker_026c7588);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_startOfDay__026c7648);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_e0;
  }
  local_79 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_e0;
  if ((local_79 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_combinedStartTime_026c7670);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_28;
  local_88 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_combinedEndTime_026c7678);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  local_90 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isNew_026c74c8);
  if ((IVar3 & 1) == 0) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_entry_026c7530);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_entry_026c7530);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_entry_026c7530);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_entry_026c7530);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_entry_026c7530);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editingDaily_026c75f8);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_entry_026c7530);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar5 = PTR_WCRefineToDoStore_026cf6a0;
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_entry_026c7530);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_updateEntry__026c76a8);
    (*(code *)PTR__objc_release_02578630)(IVar3);
LAB_01eada00:
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_onSaved_026c76b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar3 != 0) {
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_onSaved_026c76b0);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(IVar3 + 0x10))();
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_popSelf_026c76b8);
    local_3c = 0;
  }
  else {
    IVar7 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backend_026c7148);
    IVar6 = local_38;
    puVar2 = local_50;
    IVar4 = local_88;
    IVar3 = local_90;
    puVar5 = PTR_WCRefineToDoStore_026cf6a0;
    if (IVar7 != 1) {
      IVar7 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editingDaily_026c75f8);
      IVar8 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      if (IVar8 == 0) {
        local_168 = 0;
      }
      else {
        local_168 = local_48;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_addLocalEntryWithText_dueDate_st_026c7248,IVar6,puVar2,IVar4,IVar3,
                 IVar7 & 0xffffffff,local_168);
      _objc_unsafeClaimAutoreleasedReturnValue();
      goto LAB_01eada00;
    }
    IVar7 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editingDaily_026c75f8);
    IVar8 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (IVar8 == 0) {
      local_130 = 0;
    }
    else {
      local_130 = local_48;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_addOfficialEntryWithText_dueDate_026c7250,IVar6,puVar2,IVar4,IVar3,
               IVar7 & 0xffffffff,local_130);
    if (((ulong)puVar5 & 1) != 0) goto LAB_01eada00;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ_Wn_kXQ_e_Rvbub);
    local_3c = 1;
  }
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
LAB_01eadad4:
  _objc_storeStrong(&local_38,0);
  return;
}

