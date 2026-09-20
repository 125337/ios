// fetchBilibiliStreamsForBVID:cid:result:completion: @ 010520e0

/* Function Stack Size: 0x30 bytes */

void WCRefineLinkParser::fetchBilibiliStreamsForBVID_cid_result_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ID IVar13;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ID local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
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
  local_88 = 0;
  _objc_storeStrong(&local_88,param_4);
  local_90 = 0;
  _objc_storeStrong(&local_90,param_5);
  local_98 = 0;
  _objc_storeStrong(&local_98,param_6);
  puVar4 = PTR__OBJC_CLASS___NSURLComponents_026ce130;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURLComponents_026ce130,PTR_s_componentsWithString__0269d818,
             &cf_https___api_bilibili_com_x_player_playurl);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0;
  local_a0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0,PTR_s_queryItemWithName_value__026aaf20,
             &cf_bvid,local_80);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0;
  local_68 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0,PTR_s_queryItemWithName_value__026aaf20,
             &cf_cid,local_88);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0;
  local_60 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0,PTR_s_queryItemWithName_value__026aaf20,
             &cf_qn,&cf_80);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0;
  local_58 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0,PTR_s_queryItemWithName_value__026aaf20,
             &cf_fnval,&cf_4048);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0;
  local_50 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0,PTR_s_queryItemWithName_value__026aaf20,
             &cf_fnver,&::cf_0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0;
  local_48 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0,PTR_s_queryItemWithName_value__026aaf20,
             &cf_fourk);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0;
  local_40 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0,PTR_s_queryItemWithName_value__026aaf20,
             &cf_high_quality,&cf_1);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0;
  local_38 = puVar10;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0,PTR_s_queryItemWithName_value__026aaf20,
             &cf_try_look,&cf_1);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setQueryItems__026aaf28);
  (*(code *)PTR__objc_release_02578630)(puVar12);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  (*(code *)PTR__objc_release_02578630)(puVar10);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  IVar3 = local_70;
  puVar4 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_URL_026a1c90);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar13 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_desktopUA_026adc48);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_80;
  local_a8 = local_70;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_88;
  local_c8 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_90;
  local_c0 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_98;
  local_b8 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_fetchURL_allowRedirect_ua_comple_026adca0,puVar5,1,IVar13);
  (*(code *)PTR__objc_release_02578630)(IVar13);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

