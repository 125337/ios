// fetchBilibiliMP4Qualities:index:bvid:cid:result:variants:completion: @ 01050a6c

/* Function Stack Size: 0x48 bytes */

void WCRefineLinkParser::fetchBilibiliMP4Qualities_index_bvid_cid_result_variants_completion_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5,ID param_6,
               ID param_7,ID param_8,ID param_9,undefined4 param_10)

{
  unsigned_long_long uVar1;
  ID IVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  ID IVar17;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  undefined *local_148;
  undefined8 local_140;
  ulong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  ulong local_110;
  ID local_108;
  ulong local_100;
  undefined *local_f8;
  ulong local_f0;
  undefined4 local_e4;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  unsigned_long_long local_88;
  ulong local_80;
  SEL local_78;
  ID local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_80 = 0;
  local_78 = param_2;
  local_70 = param_1;
  _objc_storeStrong(&local_80,param_3);
  local_90 = 0;
  local_88 = param_4;
  _objc_storeStrong(&local_90,param_5);
  local_98 = 0;
  _objc_storeStrong(&local_98,param_6);
  local_a0 = 0;
  _objc_storeStrong(&local_a0,param_7);
  local_a8 = 0;
  _objc_storeStrong(&local_a8,param_8);
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_9);
  uVar1 = local_88;
  uVar3 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0);
  if (uVar1 < uVar3) {
    uVar3 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_objectAtIndexedSubscript__0269cc78,local_88);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    puVar7 = PTR__OBJC_CLASS___NSURLComponents_026ce130;
    local_f0 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLComponents_026ce130,PTR_s_componentsWithString__0269d818,
               &cf_https___api_bilibili_com_x_player_playurl);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0;
    local_f8 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0,PTR_s_queryItemWithName_value__026aaf20,
               &cf_bvid,local_90);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0;
    local_68 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0,PTR_s_queryItemWithName_value__026aaf20,
               &cf_cid,local_98);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0;
    puVar10 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_60 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_queryItemWithName_value__026aaf20,&cf_qn);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0;
    local_58 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0,PTR_s_queryItemWithName_value__026aaf20,
               &cf_fnval);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0;
    local_50 = puVar11;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0,PTR_s_queryItemWithName_value__026aaf20,
               &cf_fnver,&::cf_0);
    _objc_retainAutoreleasedReturnValue();
    puVar13 = PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0;
    local_48 = puVar12;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0,PTR_s_queryItemWithName_value__026aaf20,
               &cf_fourk);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0;
    local_40 = puVar13;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0,PTR_s_queryItemWithName_value__026aaf20,
               &cf_platform,&cf_html5);
    _objc_retainAutoreleasedReturnValue();
    puVar15 = PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0;
    local_38 = puVar14;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0,PTR_s_queryItemWithName_value__026aaf20,
               &cf_high_quality,&cf_1);
    _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar15;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,8
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setQueryItems__026aaf28);
    (*(code *)PTR__objc_release_02578630)(puVar16);
    (*(code *)PTR__objc_release_02578630)(puVar15);
    (*(code *)PTR__objc_release_02578630)(puVar14);
    (*(code *)PTR__objc_release_02578630)(puVar13);
    (*(code *)PTR__objc_release_02578630)(puVar12);
    (*(code *)PTR__objc_release_02578630)(puVar11);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar10);
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    IVar2 = local_70;
    puVar7 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_URL_026a1c90);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar17 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_desktopUA_026adc48);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_a8;
    local_160 = PTR___NSConcreteStackBlock_02578660;
    local_158 = 0xc2000000;
    local_154 = 0;
    local_150 = FUN_010516a8;
    local_148 = &DAT_02584910;
    local_110 = local_f0;
    local_108 = local_70;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_80;
    local_140 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    uVar5 = local_90;
    local_138 = uVar3;
    local_100 = local_88;
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = local_98;
    local_130 = uVar5;
    (*(code *)PTR__objc_retain_02578638)();
    uVar5 = local_a0;
    local_128 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = local_b0;
    local_120 = uVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_118 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_fetchURL_allowRedirect_ua_comple_026adca0,puVar8,1,IVar17,&local_160);
    (*(code *)PTR__objc_release_02578630)(IVar17);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    _objc_storeStrong(&local_118);
    _objc_storeStrong(&local_120,0);
    _objc_storeStrong(&local_128,0);
    _objc_storeStrong(&local_130,0);
    _objc_storeStrong(&local_138,0);
    _objc_storeStrong(&local_140,0);
    _objc_storeStrong(&local_f8,0);
    local_e4 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_sortUsingComparator__0269d168,&PTR___NSConcreteGlobalBlock_025848f0);
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setVideoVariants__026add50,local_a8);
    uVar4 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setVideoURL__026adbb0);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    puVar7 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_b0;
    local_e0 = PTR___NSConcreteStackBlock_02578660;
    local_d8 = 0xc2000000;
    local_d4 = 0;
    local_d0 = FUN_01051498;
    local_c8 = &DAT_0257ca68;
    (*(code *)PTR__objc_retain_02578638)();
    uVar5 = local_a0;
    local_b8 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = uVar5;
    _dispatch_async(puVar7,&local_e0);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    local_e4 = 1;
    _objc_storeStrong(&local_c0);
    _objc_storeStrong(&local_b8,0);
  }
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

