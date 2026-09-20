// parseBilibiliResolvedURL:sourceURL:completion: @ 01053df8

/* Function Stack Size: 0x28 bytes */

void WCRefineLinkParser::parseBilibiliResolvedURL_sourceURL_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  ID local_110;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  ID local_c0;
  undefined8 local_b8;
  ID local_b0;
  undefined *local_a8;
  undefined4 local_9c;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  byte local_69;
  ID local_68;
  ID local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  SEL local_40;
  ID local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_4);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_5);
  IVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bilibiliBVFromURL__026ae080,local_48);
  _objc_retainAutoreleasedReturnValue();
  local_69 = 0;
  local_110 = IVar4;
  if (IVar4 == 0) {
    local_110 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bilibiliBVFromURL__026ae080,local_50);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_110;
  }
  local_69 = IVar4 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = local_110;
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  puVar5 = PTR___dispatch_main_q_02578680;
  if (IVar4 == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_58;
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_01054338;
    local_80 = &DAT_025814c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = uVar1;
    _dispatch_async(puVar5,&local_98);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_9c = 1;
    _objc_storeStrong(&local_78,0);
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSURLComponents_026ce130;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLComponents_026ce130,PTR_s_componentsWithString__0269d818,
               &cf_https___api_bilibili_com_x_web_interface_view);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0;
    local_a8 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLQueryItem_026ceaf0,PTR_s_queryItemWithName_value__026aaf20,
               &cf_bvid,local_60);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setQueryItems__026aaf28);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    IVar3 = local_38;
    puVar5 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_URL_026a1c90);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar7 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_desktopUA_026adc48);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_58;
    local_f0 = PTR___NSConcreteStackBlock_02578660;
    local_e8 = 0xc2000000;
    local_e4 = 0;
    local_e0 = FUN_0105445c;
    local_d8 = &DAT_02584960;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_50;
    local_b8 = uVar1;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_48;
    local_d0 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    IVar4 = local_60;
    local_c8 = uVar1;
    local_b0 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_fetchURL_allowRedirect_ua_comple_026adca0,puVar6,1,IVar7,&local_f0);
    (*(code *)PTR__objc_release_02578630)(IVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_c0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_a8,0);
    local_9c = 0;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

