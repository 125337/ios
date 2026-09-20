// FUN_00015844 @ 00015844

void FUN_00015844(double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  double dVar12;
  undefined *local_340;
  cfstringStruct *local_320;
  cfstringStruct *local_300;
  undefined *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  code *local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  long local_1a8;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [15];
  byte local_189;
  undefined *local_188;
  byte local_179;
  undefined *local_178;
  undefined *local_170;
  bool local_161;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  bool local_149;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  ulong local_138;
  ulong local_130;
  ulong local_128;
  ulong local_120;
  ulong local_118;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  long local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  undefined4 local_d4;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  ulong local_b0;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined8 local_90;
  double local_88;
  double local_80;
  double local_78;
  long local_60;
  double local_58;
  double local_50;
  double local_48;
  undefined8 local_40;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_4);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_5);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_6);
  local_60 = 0;
  local_58 = param_3;
  local_50 = param_2;
  local_48 = param_1;
  local_40 = param_7;
  _objc_storeStrong(&local_60,param_8);
  puVar6 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar7 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar6 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = local_28;
    local_d0 = PTR___NSConcreteStackBlock_02578660;
    local_c8 = 0xc2000000;
    local_c4 = 0;
    local_c0 = FUN_0001d2b0;
    local_b8 = &DAT_02578ed0;
    (*(code *)PTR__objc_retain_02578638)();
    uVar5 = local_30;
    local_b0 = uVar9;
    (*(code *)PTR__objc_retain_02578638)();
    lVar4 = local_38;
    local_a8 = uVar5;
    (*(code *)PTR__objc_retain_02578638)();
    lVar8 = local_60;
    local_a0 = lVar4;
    local_90 = local_40;
    local_88 = local_48;
    local_80 = local_50;
    local_78 = local_58;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = lVar8;
    _dispatch_async(puVar7,&local_d0);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    local_d4 = 1;
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_b0,0);
  }
  else {
    local_e0 = local_50;
    local_e8 = local_58;
    if ((0.0 < local_48) && (local_50 <= 0.0)) {
      puVar7 = PTR__OBJC_CLASS___NSDate_026cdf88;
      dVar12 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_e0 = dVar12 - local_48;
      (*(code *)PTR__objc_release_02578630)(puVar7);
    }
    dVar12 = local_e0;
    if (((0.0 < local_e8) && (0.0 < local_e0)) && (local_e8 < local_e0)) {
      local_f0 = local_e0;
      local_e0 = local_e8;
      local_e8 = dVar12;
    }
    if (((0.0 < local_e8) && (0.0 < local_e0)) && (2592000.0 < local_e8 - local_e0)) {
      local_e0 = local_e8 - 2592000.0;
    }
    lVar8 = local_60;
    FUN_0001a2e4();
    _objc_retainAutoreleasedReturnValue();
    local_f8 = lVar8;
    (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_length_0269cca0);
    if (lVar8 == 0) {
      _objc_storeStrong(&local_f8,&cf__g_kb);
    }
    puVar7 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_100 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028c79f8,PTR_s_cancel_0269d1e8);
    puVar7 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_WRg_J_)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar6 = local_100;
    local_108 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_groupChatAnalysisMaxChars_0269d1f0);
    uVar9 = local_28;
    local_110 = puVar6;
    FUN_0001d3ec(local_e0,local_e8,local_28,local_30,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_118 = uVar9;
    FUN_0001d81c();
    _objc_retainAutoreleasedReturnValue();
    local_120 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_length_0269cca0);
    if (uVar9 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToast__0269cec0,local_108);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRVlgSRgveW_mo_);
      local_d4 = 1;
    }
    else {
      uVar9 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = local_118;
      local_128 = uVar9;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = local_28;
      local_130 = uVar10;
      FUN_0001de8c(local_28,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_149 = false;
      bVar1 = local_128 == 0;
      local_138 = uVar9;
      if (bVar1) {
        local_300 = &cf___;
      }
      else {
        uVar9 = local_128;
        (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_m_uiCreateTime_0269d208);
        local_300 = (cfstringStruct *)(uVar9 & 0xffffffff);
        FUN_00014db8();
        _objc_retainAutoreleasedReturnValue();
        local_148 = local_300;
      }
      local_149 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_140 = local_300;
      if ((local_149 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_148);
      }
      local_161 = false;
      bVar1 = local_130 == 0;
      if (bVar1) {
        local_320 = &cf___;
      }
      else {
        uVar9 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_m_uiCreateTime_0269d208);
        local_320 = (cfstringStruct *)(uVar9 & 0xffffffff);
        FUN_00014db8();
        _objc_retainAutoreleasedReturnValue();
        local_160 = local_320;
      }
      local_161 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_158 = local_320;
      if ((local_161 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_160);
      }
      local_179 = 0;
      local_189 = 0;
      lVar8 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      local_340 = PTR__OBJC_CLASS___NSString_026cdfe8;
      if (lVar8 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_NN_f_JeW_U_0_T_);
        _objc_retainAutoreleasedReturnValue();
        local_189 = 1;
        local_188 = local_340;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_NN_f_JeW_U_0_T_);
        _objc_retainAutoreleasedReturnValue();
        local_179 = 1;
        local_178 = local_340;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_170 = local_340;
      if ((local_189 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_188);
      }
      if ((local_179 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_178);
      }
      _objc_initWeak(auStack_198,local_28);
      puVar3 = local_110;
      uVar9 = local_120;
      puVar2 = local_170;
      puVar6 = PTR_WCRefineAIClient_026ce080;
      puVar7 = PTR_WCRefineAIStore_026ce048;
      puVar11 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,PTR_s_resolvedGroupChatAnalysisPrompt_0269d210);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_promptByApplyingMaxChars_toPromp_0269ceb8,puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_108;
      local_1d0 = PTR___NSConcreteStackBlock_02578660;
      local_1c8 = 0xc2000000;
      local_1c4 = 0;
      local_1c0 = FUN_0001e4fc;
      local_1b8 = &DAT_02578f00;
      (*(code *)PTR__objc_retain_02578638)();
      local_1b0 = puVar3;
      _objc_copyWeak(auStack_1a0,auStack_198);
      lVar8 = local_f8;
      (*(code *)PTR__objc_retain_02578638)();
      local_1a8 = lVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_generateTextWithInstruction_sour_0269d0d0,puVar2,uVar9,puVar7,
                 &local_1d0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = DAT_028c79f8;
      DAT_028c79f8 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar11);
      _objc_storeStrong(&local_1a8);
      _objc_destroyWeak(auStack_1a0);
      _objc_storeStrong(&local_1b0,0);
      _objc_destroyWeak(auStack_198);
      _objc_storeStrong(&local_170,0);
      _objc_storeStrong(&local_158,0);
      _objc_storeStrong(&local_140,0);
      _objc_storeStrong(&local_138,0);
      _objc_storeStrong(&local_130,0);
      _objc_storeStrong(&local_128,0);
      local_d4 = 0;
    }
    _objc_storeStrong(&local_120);
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_108,0);
    _objc_storeStrong(&local_100,0);
    _objc_storeStrong(&local_f8,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

