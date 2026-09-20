// tryDouyinCandidates:index:resolved:source:cardPlaybackEnough:completion: @ 0103b6a4

/* Function Stack Size: 0x3c bytes */

void WCRefineLinkParser::tryDouyinCandidates_index_resolved_source_cardPlaybackEnough_completion_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5,ID param_6,
               bool param_7,ID param_8,undefined4 param_9)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  unsigned_long_long uVar4;
  ulong uVar5;
  ID IVar6;
  ulong uVar7;
  ulong uVar8;
  ID IVar9;
  undefined8 in_d0;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  ulong local_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  ID local_98;
  ulong local_90;
  byte local_88;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  uint local_64;
  undefined8 local_60;
  byte local_51;
  undefined8 local_50;
  undefined8 local_48;
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
  local_51 = (byte)param_7;
  local_60 = 0;
  _objc_storeStrong(&local_60,param_8);
  uVar4 = local_40;
  uVar7 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
  if (uVar4 < uVar7) {
    uVar8 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_40 + 1;
    local_70 = uVar8;
    _CFAbsoluteTimeGetCurrent();
    IVar6 = local_28;
    uVar8 = local_70;
    IVar9 = local_28;
    local_80 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_desktopUA_026adc48);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_38;
    local_f0 = PTR___NSConcreteStackBlock_02578660;
    local_e8 = 0xc2000000;
    local_e4 = 0;
    local_e0 = FUN_0103ba40;
    local_d8 = &DAT_02584820;
    local_a8 = local_80;
    local_a0 = local_78;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_70;
    local_d0 = uVar5;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_48;
    local_c8 = uVar1;
    local_98 = local_28;
    local_90 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_50;
    local_c0 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_60;
    local_b8 = uVar3;
    local_88 = local_51 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar6,PTR_s_fetchURL_allowRedirect_ua_comple_026adca0,uVar8,1,IVar9,&local_f0);
    (*(code *)PTR__objc_release_02578630)(IVar9);
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_70,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_extractDouyinViaWebViewURL_sourc_026adfa0,local_48,local_50,
               local_51 & 1,local_60);
  }
  local_64 = (uint)(uVar4 >= uVar7);
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  return;
}

