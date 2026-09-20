// avatarFrameSpecialUserDefaultConfigFromGlobal @ 020bf720

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::avatarFrameSpecialUserDefaultConfigFromGlobal(ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  cfstringStruct *pcVar11;
  cfstringStruct *pcVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  cfstringStruct *local_210;
  cfstringStruct *local_200;
  cfstringStruct *local_178;
  cfstringStruct *local_168;
  cfstringStruct *local_140;
  SEL local_138;
  ID local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
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
  undefined *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_128 = &cf_chatPageEnabled;
  local_140 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_avatarFrameChatPageEnabled_0269def8);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithBool__0269ce60,param_1);
  _objc_retainAutoreleasedReturnValue();
  local_120 = &cf_chatPagePath;
  pcVar2 = local_140;
  local_a8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_avatarFrameChatPageOtherPath_0269df20);
  _objc_retainAutoreleasedReturnValue();
  local_168 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_168 = &::cf___;
  }
  local_a0 = local_168;
  local_118 = &cf_chatPageNightPath;
  pcVar3 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_avatarFrameChatPageOtherNightPat_0269df28);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_178 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_178 = &::cf___;
  }
  local_98 = local_178;
  local_110 = &cf_chatPageRandomMode;
  pcVar4 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_avatarFrameChatPageOtherRandomMo_0269df48);
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_numberWithInteger__0269e080,pcVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_108 = &cf_chatPageAddMode;
  pcVar4 = local_140;
  local_90 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_avatarFrameChatPageOtherAddMode_0269df60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_numberWithInteger__0269e080,pcVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_100 = &cf_chatPageOffsetX;
  local_88 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_avatarFrameChatPageOtherOffsetX_0269df88);
  (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_f8 = &cf_chatPageOffsetY;
  local_80 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_avatarFrameChatPageOtherOffsetY_0269df90);
  (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_f0 = &cf_chatPageScale;
  local_78 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_avatarFrameChatPageOtherScale_0269df98);
  (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_e8 = &cf_chatListEnabled;
  pcVar4 = local_140;
  local_70 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_avatarFrameChatListEnabled_0269def0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_numberWithBool__0269ce60,pcVar4);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = &cf_chatListPath;
  pcVar4 = local_140;
  local_68 = puVar10;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_avatarFrameChatListPath_0269df10);
  _objc_retainAutoreleasedReturnValue();
  local_200 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_200 = &::cf___;
  }
  local_60 = local_200;
  local_d8 = &cf_chatListNightPath;
  pcVar11 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_avatarFrameChatListNightPath_0269df18);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_210 = pcVar11;
  if (pcVar11 == (cfstringStruct *)0x0) {
    local_210 = &::cf___;
  }
  local_58 = local_210;
  local_d0 = &cf_chatListRandomMode;
  pcVar12 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_avatarFrameChatListRandomMode_0269df40);
  (*(code *)PTR__objc_msgSend_02578628)(puVar13,PTR_s_numberWithInteger__0269e080,pcVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_c8 = &cf_chatListAddMode;
  pcVar12 = local_140;
  local_50 = puVar13;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_avatarFrameChatListAddMode_0269df58);
  (*(code *)PTR__objc_msgSend_02578628)(puVar14,PTR_s_numberWithInteger__0269e080,pcVar12);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_c0 = &cf_chatListOffsetX;
  local_48 = puVar14;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_avatarFrameChatListOffsetX_0269df70);
  (*(code *)PTR__objc_msgSend_02578628)(puVar15,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_b8 = &cf_chatListOffsetY;
  local_40 = puVar15;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_avatarFrameChatListOffsetY_0269df78);
  (*(code *)PTR__objc_msgSend_02578628)(puVar16,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_b0 = &cf_chatListScale;
  local_38 = puVar16;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_avatarFrameChatListScale_0269df80);
  (*(code *)PTR__objc_msgSend_02578628)(puVar17,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = puVar17;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_a8,&local_128,0x10);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar17);
  (*(code *)PTR__objc_release_02578630)(puVar16);
  (*(code *)PTR__objc_release_02578630)(puVar15);
  (*(code *)PTR__objc_release_02578630)(puVar14);
  (*(code *)PTR__objc_release_02578630)(puVar13);
  (*(code *)PTR__objc_release_02578630)(pcVar11);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(puVar10);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar18;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

