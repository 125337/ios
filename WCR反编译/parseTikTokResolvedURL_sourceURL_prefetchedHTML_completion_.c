// parseTikTokResolvedURL:sourceURL:prefetchedHTML:completion: @ 0105c89c

/* Function Stack Size: 0x30 bytes */

void WCRefineLinkParser::parseTikTokResolvedURL_sourceURL_prefetchedHTML_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ID local_98;
  undefined4 local_8c;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  ID local_68;
  undefined8 local_60;
  ID local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_tikTokResultFromHTMLData_resolve_026ae0d0,local_48,local_38,local_40);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_28;
  uVar2 = local_38;
  puVar6 = PTR___dispatch_main_q_02578680;
  local_58 = IVar5;
  if (IVar5 == 0) {
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_desktopUA_026adc48);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_38;
    local_d0 = PTR___NSConcreteStackBlock_02578660;
    local_c8 = 0xc2000000;
    local_c4 = 0;
    local_c0 = FUN_0105cc24;
    local_b8 = &DAT_025849b0;
    local_98 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = local_40;
    local_b0 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_50;
    local_a8 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_fetchURL_allowRedirect_ua_comple_026adca0,uVar2,1,IVar5,&local_d0);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_b0,0);
    local_8c = 0;
  }
  else {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_50;
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_0105cbe4;
    local_70 = &DAT_0257ca68;
    (*(code *)PTR__objc_retain_02578638)();
    IVar1 = local_58;
    local_60 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = IVar1;
    _dispatch_async(puVar6,&local_88);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    local_8c = 1;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

