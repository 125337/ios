// tryXHSCandidates:index:noteID:token:xsecSource:resolved:source:completion: @ 0104a250

/* Function Stack Size: 0x50 bytes */

void WCRefineLinkParser::tryXHSCandidates_index_noteID_token_xsecSource_resolved_source_completion_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5,ID param_6,
               ID param_7,ID param_8,ID param_9,ID param_10,undefined4 param_11)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  unsigned_long_long uVar4;
  ID IVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined **ppuVar13;
  ID local_220;
  long local_1f8;
  undefined *local_190;
  undefined4 local_188;
  undefined4 local_184;
  code *local_180;
  undefined *local_178;
  ulong local_170;
  undefined8 local_168;
  undefined *local_160;
  undefined **local_158;
  undefined8 local_150;
  ulong local_148;
  ID local_140;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  ulong local_118;
  long local_110;
  long local_108;
  undefined8 local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  ID local_e0;
  ulong local_d8;
  undefined **local_d0;
  byte local_c1;
  ID local_c0;
  byte local_b1;
  ID local_b0;
  ID local_a8;
  undefined1 local_99;
  ulong local_98;
  ulong local_90;
  undefined4 local_84;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  unsigned_long_long local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_48 = 0;
  local_40 = param_4;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  local_60 = (undefined *)0x0;
  _objc_storeStrong(&local_60,param_8);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_9);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_10);
  uVar4 = local_40;
  uVar6 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  puVar9 = local_60;
  if (uVar4 < uVar6) {
    uVar11 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = local_40 + 1;
    uVar12 = local_38;
    local_98 = uVar6;
    local_90 = uVar11;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
    local_99 = uVar6 == uVar12;
    local_b1 = 0;
    local_c1 = 0;
    local_220 = local_28;
    if ((bool)local_99) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_desktopUA_026adc48);
      _objc_retainAutoreleasedReturnValue();
      local_b1 = 1;
      local_b0 = local_220;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mobileUA_026adc18);
      _objc_retainAutoreleasedReturnValue();
      local_c1 = 1;
      local_c0 = local_220;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = local_220;
    if ((local_c1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_c0);
    }
    if ((local_b1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b0);
    }
    uVar6 = local_38;
    puVar9 = PTR___NSConcreteStackBlock_02578660;
    ppuVar13 = &local_138;
    local_138 = PTR___NSConcreteStackBlock_02578660;
    local_130 = 0xc2000000;
    local_12c = 0;
    local_128 = FUN_0104aa8c;
    local_120 = &DAT_02584870;
    local_e0 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    lVar8 = local_48;
    local_118 = uVar6;
    local_d8 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    lVar7 = local_50;
    local_110 = lVar8;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_58;
    local_108 = lVar7;
    (*(code *)PTR__objc_retain_02578638)();
    puVar10 = local_60;
    local_100 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_68;
    local_f8 = puVar10;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_70;
    local_f0 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = uVar2;
    _objc_retainBlock();
    IVar5 = local_28;
    uVar6 = local_90;
    IVar1 = local_a8;
    local_190 = puVar9;
    local_188 = 0xc2000000;
    local_184 = 0;
    local_180 = FUN_0104abd0;
    local_178 = &DAT_025848a0;
    local_d0 = ppuVar13;
    (*(code *)PTR__objc_retain_02578638)();
    ppuVar13 = local_d0;
    local_170 = uVar6;
    local_148 = local_98;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_68;
    local_158 = ppuVar13;
    local_140 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    puVar9 = local_60;
    local_168 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_70;
    local_160 = puVar9;
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar5,PTR_s_fetchURL_allowRedirect_ua_comple_026adca0,uVar6,1,IVar1,&local_190);
    _objc_storeStrong(&local_150);
    _objc_storeStrong(&local_160,0);
    _objc_storeStrong(&local_168,0);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_170,0);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_100,0);
    _objc_storeStrong(&local_108,0);
    _objc_storeStrong(&local_110,0);
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_90,0);
    local_84 = 0;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = puVar9;
    lVar7 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if ((lVar7 != 0) &&
       (lVar8 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
       lVar7 = local_50, lVar8 != 0)) {
      puVar9 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_URLQueryAllowedCharacterSet_0269d8f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_stringByAddingPercentEncodingWit_0269d900);
      _objc_retainAutoreleasedReturnValue();
      local_1f8 = lVar7;
      if (lVar7 == 0) {
        local_1f8 = local_50;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = local_1f8;
      (*(code *)PTR__objc_release_02578630)(lVar7);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      puVar10 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_https___www_xiaohongshu_com_explore____xsec_token____xsec_source___);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = local_78;
      local_78 = puVar10;
      (*(code *)PTR__objc_release_02578630)(puVar9);
      _objc_storeStrong(&local_80,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_extractXHSViaWebViewURL_sourceUR_026ae038,local_78,local_68,local_70);
    local_84 = 1;
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  return;
}

