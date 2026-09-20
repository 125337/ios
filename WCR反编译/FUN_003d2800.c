// FUN_003d2800 @ 003d2800

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_003d2800(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *local_278;
  undefined *local_248;
  cfstringStruct *local_228;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_170;
  cfstringStruct *local_160;
  undefined *local_128;
  undefined *local_120;
  byte local_111;
  undefined *local_110;
  undefined *local_108;
  cfstringStruct *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  bool local_d1;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  bool local_b9;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  bool local_a1;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  byte local_81;
  undefined8 local_80;
  byte local_71;
  cfstringStruct *local_70;
  byte local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  if ((local_28 == (cfstringStruct *)0x0) || (local_30 == (cfstringStruct *)0x0)) {
    local_34 = 1;
  }
  else {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCount__026a30f0,pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
    pcVar2 = local_28;
    local_40 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_totalCount_026a3130);
    local_160 = pcVar2;
    if (pcVar2 <= local_40) {
      local_160 = local_40;
    }
    local_50 = local_160;
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTotalCount__026a30f8,local_160);
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    FUN_003a1fd4();
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    local_61 = 0;
    local_71 = 0;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_170 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_groupId_0269ea88);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = local_170;
      FUN_003d3bd8();
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_170;
    }
    else {
      local_170 = local_58;
    }
    local_71 = pcVar1 == (cfstringStruct *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTimeText__026a2d88,local_170);
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    local_80 = 0;
    local_81 = 0;
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    FUN_0039842c();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setUnreadCount__026a2cc0,local_80);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHasRedDotUnread__026a2cc8,local_81 & 1);
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    FUN_003d3c38();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_30;
    local_90 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_name_0269d828);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a1 = false;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_1b8 = &cf__g_TTR_;
    }
    else {
      local_1b8 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_name_0269d828);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = local_1b8;
    }
    local_a1 = pcVar2 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = local_1b8;
    if ((local_a1 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_detailTemplate_026a2dc0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_b9 = false;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_1d0 = &cf__N__T;
    }
    else {
      local_1d0 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_detailTemplate_026a2dc0);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = local_1d0;
    }
    local_b9 = pcVar2 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = local_1d0;
    if ((local_b9 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b8);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_inlineDetailTemplate_026a2dd0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_d1 = false;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_1e8 = &cf__N__T;
    }
    else {
      local_1e8 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_inlineDetailTemplate_026a2dd0);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = local_1e8;
    }
    local_d1 = pcVar2 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = local_1e8;
    if ((local_d1 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    local_e0 = 0;
    local_e8 = 0;
    pcVar1 = local_98;
    FUN_003d3eac();
    if (((((ulong)pcVar1 & 1) != 0) || (pcVar1 = local_b0, FUN_003d3eac(), ((ulong)pcVar1 & 1) != 0)
        ) || (pcVar1 = local_c8, FUN_003d3eac(), ((ulong)pcVar1 & 1) != 0)) {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_items_0269e4b0);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = local_e0;
      local_f8 = local_e8;
      FUN_003d4050();
      _objc_storeStrong(&local_e0,local_f0);
      _objc_storeStrong(&local_e8,local_f8);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar2 = local_98;
    pcVar1 = (cfstringStruct *)PTR_WCRefineGroup_026ce630;
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
    pcVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_totalCount_026a3130);
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_renderTemplate_count_totalCount__026a3138,pcVar2,pcVar3,pcVar4,local_90,
               local_e0,local_e8);
    _objc_retainAutoreleasedReturnValue();
    local_100 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_228 = &cf__g_TTR_;
    }
    else {
      local_228 = local_100;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTitle__0269cef0,local_228);
    pcVar1 = local_b0;
    puVar5 = PTR_WCRefineGroup_026ce630;
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_totalCount_026a3130);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_renderTemplate_count_totalCount__026a3138,pcVar1,pcVar2,pcVar3,local_90,
               local_e0,local_e8);
    _objc_retainAutoreleasedReturnValue();
    local_108 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
    local_248 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_111 = 0;
    if (puVar5 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_totalCount_026a3130);
      (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_stringWithFormat__0269cca8,&cf__lu__lu);
      _objc_retainAutoreleasedReturnValue();
      local_110 = local_248;
    }
    else {
      local_248 = local_108;
    }
    local_111 = puVar5 == (undefined *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDetailText__026a3140,local_248);
    if ((local_111 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_110);
    }
    pcVar1 = local_c8;
    puVar5 = PTR_WCRefineGroup_026ce630;
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_totalCount_026a3130);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_renderTemplate_count_totalCount__026a3138,pcVar1,pcVar2,pcVar3,local_90,
               local_e0,local_e8);
    _objc_retainAutoreleasedReturnValue();
    local_120 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
    local_278 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (puVar5 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_totalCount_026a3130);
      (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_stringWithFormat__0269cca8,&cf__lu__lu);
      _objc_retainAutoreleasedReturnValue();
      local_128 = local_278;
    }
    else {
      local_278 = local_120;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setInlineDetailText__026a3148,local_278);
    if (puVar5 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_128);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCachedNativeCellData__026a3150);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setCachedNativeCellDataSignature_026a3158,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCachedFakeCellData__026a3160,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCachedFakeCellDataSignature__026a3168,0)
    ;
    _objc_storeStrong(&local_120,0);
    _objc_storeStrong(&local_108,0);
    _objc_storeStrong(&local_100,0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_58,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

