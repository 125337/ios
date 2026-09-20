// FUN_0219d7bc @ 0219d7bc

void FUN_0219d7bc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  puVar3 = PTR__OBJC_CLASS___NSSet_026ce150;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_118 = &cf_toDoCardEnabled;
  local_110 = &cf_toDoCardSourceMode;
  local_108 = &cf_toDoCardPosition;
  local_100 = &cf_toDoCardCustomSectionOffset;
  local_f8 = &cf_toDoCardLayoutStyle;
  local_f0 = &cf_toDoCardBasicSettingsExpanded;
  local_e8 = &cf_toDoCardAutoDeleteCompleted;
  local_e0 = &cf_toDoCardContentSettingsExpanded;
  local_d8 = &cf_toDoCardStyleSettingsExpanded;
  local_d0 = &cf_toDoCardTitleSettingsExpanded;
  local_c8 = &cf_toDoCardBackgroundSettingsExpanded;
  local_c0 = &cf_toDoCardLocalItems;
  local_b8 = &cf_toDoCardHistoryItems;
  local_b0 = &cf_toDoCardMarkdownText;
  local_a8 = &cf_toDoCardMarkdownFileName;
  local_a0 = &cf_toDoCardOfficialTargetUserName;
  local_98 = &cf_toDoCardOfficialMeta;
  local_90 = &cf_toDoCardDailyOnly;
  local_88 = &cf_toDoCardWebURL;
  local_80 = &cf_toDoCardWebHTML;
  local_78 = &cf_toDoCardWebHTMLEnabled;
  local_70 = &cf_toDoCardWebJavaScriptEnabled;
  local_68 = &cf_toDoCardWebURLHistory;
  local_60 = &cf_toDoCardWebRuntimeStorage;
  local_58 = &cf_toDoCardWebHTMLRepositoryItems;
  local_50 = &cf_toDoCardWebContentOffsetX;
  local_48 = &cf_toDoCardWebContentOffsetY;
  local_40 = &cf_toDoCardWebContentScale;
  local_38 = &cf_toDoCardWebOverallScale;
  local_30 = &cf_toDoCardWebConfigInitialized;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_118,
             0x1e);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setWithArray__0269d9a0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e4988;
  DAT_028e4988 = puVar3;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

