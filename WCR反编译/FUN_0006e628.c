// FUN_0006e628 @ 0006e628

void FUN_0006e628(double param_1)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  double dVar7;
  cfstringStruct *local_440;
  cfstringStruct *local_3f0;
  cfstringStruct *local_3e8;
  cfstringStruct *local_3a8;
  cfstringStruct *local_388;
  cfstringStruct *local_368;
  cfstringStruct *local_348;
  cfstringStruct *local_308;
  cfstringStruct *local_2e8;
  cfstringStruct *local_238;
  cfstringStruct *local_220;
  cfstringStruct *local_208;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1c0;
  undefined *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188;
  undefined *local_180;
  undefined *local_178;
  undefined *local_170;
  cfstringStruct *local_168;
  long local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  long local_118;
  undefined *local_110;
  cfstringStruct *local_108;
  byte local_f9;
  cfstringStruct *local_f8;
  byte local_e9;
  cfstringStruct *local_e8;
  byte local_d9;
  cfstringStruct *local_d8;
  byte local_c9;
  cfstringStruct *local_c8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_avatarFrameChatListEnabled_0269def0);
  DAT_028c7e79 = SUB81(pcVar2,0);
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameChatPageEnabled_0269def8);
  DAT_028c7e7a = SUB81(pcVar2,0);
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameChatPageDistinguishSe_0269df00);
  DAT_028c7e7b = SUB81(pcVar2,0);
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameMyPageEnabled_0269df08);
  DAT_028c7e7c = SUB81(pcVar2,0);
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameChatListPath_0269df10);
  _objc_retainAutoreleasedReturnValue();
  local_1c0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_1c0 = &cf___;
  }
  _objc_storeStrong(&DAT_028c7d08,local_1c0);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameChatListNightPath_0269df18);
  _objc_retainAutoreleasedReturnValue();
  local_1d8 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_1d8 = &cf___;
  }
  _objc_storeStrong(&DAT_028c7d10,local_1d8);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameChatPageOtherPath_0269df20);
  _objc_retainAutoreleasedReturnValue();
  local_1f0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_1f0 = &cf___;
  }
  _objc_storeStrong(&DAT_028c7d18,local_1f0);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameChatPageOtherNightPat_0269df28);
  _objc_retainAutoreleasedReturnValue();
  local_208 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_208 = &cf___;
  }
  _objc_storeStrong(&DAT_028c7d20,local_208);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameChatPageSelfPath_0269df30);
  _objc_retainAutoreleasedReturnValue();
  local_220 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_220 = &cf___;
  }
  _objc_storeStrong(&DAT_028c7d28,local_220);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameChatPageSelfNightPath_0269df38);
  _objc_retainAutoreleasedReturnValue();
  local_238 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_238 = &cf___;
  }
  _objc_storeStrong(&DAT_028c7d30,local_238);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameChatListRandomMode_0269df40);
  pcVar3 = local_b0;
  DAT_028c7e80 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameChatPageOtherRandomMo_0269df48);
  pcVar2 = local_b0;
  DAT_028c7e88 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameChatPageSelfRandomMod_0269df50);
  if (((long)DAT_028c7e80 < 0) || (2 < (long)DAT_028c7e80)) {
    DAT_028c7e80 = (cfstringStruct *)0x0;
  }
  if (((long)DAT_028c7e88 < 0) || (2 < (long)DAT_028c7e88)) {
    DAT_028c7e88 = (cfstringStruct *)0x0;
  }
  if (((long)pcVar2 < 0) || (DAT_028c7e90 = pcVar2, 2 < (long)pcVar2)) {
    DAT_028c7e90 = (cfstringStruct *)0x0;
  }
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameChatListAddMode_0269df58);
  DAT_028c7e98 = SUB84(pcVar2,0);
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameChatPageOtherAddMode_0269df60);
  DAT_028c7e9c = SUB84(pcVar2,0);
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameChatPageSelfAddMode_0269df68);
  DAT_028c7ea0 = SUB84(pcVar2,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameChatListOffsetX_0269df70);
  DAT_028c7ea8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameChatListOffsetY_0269df78);
  DAT_028c7eb0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameChatListScale_0269df80);
  DAT_028c7eb8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameChatPageOtherOffsetX_0269df88);
  DAT_028c7ec0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameChatPageOtherOffsetY_0269df90);
  DAT_028c7ec8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameChatPageOtherScale_0269df98);
  DAT_028c7ed0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameChatPageSelfOffsetX_0269dfa0);
  DAT_028c7ed8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameChatPageSelfOffsetY_0269dfa8);
  DAT_028c7ee0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameChatPageScale_0269dfb0);
  pcVar2 = local_b0;
  DAT_028c7ee8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarCornerEnabled_0269dfb8);
  DAT_028c7ef0 = SUB81(pcVar2,0);
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarCornerRadius_0269dfc0);
  DAT_028c7ef8 = pcVar2;
  if ((long)pcVar2 < 0) {
    DAT_028c7ef8 = (cfstringStruct *)0x0;
  }
  if (100 < (long)DAT_028c7ef8) {
    DAT_028c7ef8 = (cfstringStruct *)&segment_command_00000020.flags;
  }
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarCornerBorderEnabled_0269dfc8);
  DAT_028c7f00 = SUB81(pcVar2,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarCornerBorderSize_0269dfd0);
  DAT_028c7f08 = param_1;
  if (param_1 < 0.0) {
    DAT_028c7f08 = 0.0;
  }
  if (5.0 < DAT_028c7f08) {
    DAT_028c7f08 = 5.0;
  }
  pcVar2 = local_b0;
  dVar7 = DAT_028c7f08;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarCornerBorderColorLight_0269dfd8);
  _objc_retainAutoreleasedReturnValue();
  local_c9 = 0;
  local_2e8 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_2e8 = (cfstringStruct *)PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = local_2e8;
  }
  local_c9 = pcVar2 == (cfstringStruct *)0x0;
  _objc_storeStrong(&DAT_028c7d50,local_2e8);
  if ((local_c9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarCornerBorderColorDark_0269dfe8);
  _objc_retainAutoreleasedReturnValue();
  local_d9 = 0;
  local_308 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_308 = (cfstringStruct *)PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = local_308;
  }
  local_d9 = pcVar2 == (cfstringStruct *)0x0;
  _objc_storeStrong(&DAT_028c7d58,local_308);
  if ((local_d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarCornerChatPageEnabled_0269dff0);
  DAT_028c7f10 = SUB81(pcVar2,0);
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarCornerChatPageRadius_0269dff8);
  DAT_028c7f18 = pcVar2;
  if ((long)pcVar2 < 0) {
    DAT_028c7f18 = (cfstringStruct *)0x0;
  }
  if (100 < (long)DAT_028c7f18) {
    DAT_028c7f18 = (cfstringStruct *)&segment_command_00000020.flags;
  }
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarCornerChatPageBorderEnable_0269e000);
  DAT_028c7f20 = SUB81(pcVar2,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarCornerChatPageBorderSize_0269e008);
  DAT_028c7f28 = dVar7;
  if (dVar7 < 0.0) {
    DAT_028c7f28 = 0.0;
  }
  if (5.0 < DAT_028c7f28) {
    DAT_028c7f28 = 5.0;
  }
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarCornerChatPageBorderColorL_0269e010);
  _objc_retainAutoreleasedReturnValue();
  local_e9 = 0;
  local_348 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_348 = (cfstringStruct *)PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = local_348;
  }
  local_e9 = pcVar2 == (cfstringStruct *)0x0;
  _objc_storeStrong(&DAT_028c7d60,local_348);
  if ((local_e9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarCornerChatPageBorderColorD_0269e018);
  _objc_retainAutoreleasedReturnValue();
  local_f9 = 0;
  local_368 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_368 = (cfstringStruct *)PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = local_368;
  }
  local_f9 = pcVar2 == (cfstringStruct *)0x0;
  _objc_storeStrong(&DAT_028c7d68,local_368);
  if ((local_f9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f8);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameToppedList_0269e020);
  _objc_retainAutoreleasedReturnValue();
  local_388 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_388 = *(cfstringStruct **)PTR____NSArray0___02578280;
  }
  _objc_storeStrong(&DAT_028c7d38,local_388);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameSpecialUserEnabled_0269e028);
  DAT_028c7f30 = SUB81(pcVar2,0);
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameSpecialUserList_0269e030);
  _objc_retainAutoreleasedReturnValue();
  local_3a8 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_3a8 = *(cfstringStruct **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_108 = local_3a8;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  pcVar2 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setWithCapacity__0269e038,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  local_110 = puVar4;
  _memset(auStack_158,0,0x40);
  pcVar2 = local_108;
  (*(code *)PTR__objc_retain_02578638)();
  local_3e8 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10);
  if (local_3e8 != (cfstringStruct *)0x0) {
    lVar5 = *local_148;
    local_3f0 = (cfstringStruct *)0x0;
    do {
      do {
        if (*local_148 - lVar5 != 0) {
          _objc_enumerationMutation(*local_148 - lVar5,pcVar2);
        }
        lVar6 = *(long *)(local_150 + (long)local_3f0 * 8);
        local_118 = lVar6;
        FUN_00071d98();
        _objc_retainAutoreleasedReturnValue();
        local_160 = lVar6;
        (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
        if (lVar6 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_addObject__0269d180,local_160);
        }
        _objc_storeStrong(&local_160,0);
        local_3f0 = (cfstringStruct *)((long)&local_3f0->field0_0x0 + 1);
      } while (local_3f0 < local_3e8);
      local_3e8 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10)
      ;
      local_3f0 = (cfstringStruct *)0x0;
    } while (local_3e8 != (cfstringStruct *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar4 = local_110;
  (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_copy_0269d150);
  uVar1 = DAT_028c7d40;
  DAT_028c7d40 = puVar4;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  pcVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_avatarFrameSpecialUserConfigs_0269e040);
  _objc_retainAutoreleasedReturnValue();
  local_440 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_440 = *(cfstringStruct **)PTR____NSDictionary0___02578288;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_168 = local_440;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_168;
  local_198 = PTR___NSConcreteGlobalBlock_02578658;
  local_190 = 0xd0800000;
  local_18c = 0;
  local_188 = FUN_0007234c;
  local_180 = &DAT_02579a30;
  local_170 = puVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_178 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_198);
  puVar4 = local_170;
  (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_copy_0269d150);
  uVar1 = DAT_028c7d48;
  DAT_028c7d48 = puVar4;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_178);
  _objc_storeStrong(&local_170,0);
  _objc_storeStrong(&local_168,0);
  _objc_storeStrong(&local_110,0);
  _objc_storeStrong(&local_108,0);
  DAT_028c7e78 = 1;
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

