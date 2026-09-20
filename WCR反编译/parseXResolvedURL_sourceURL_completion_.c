// parseXResolvedURL:sourceURL:completion: @ 0105550c

/* Function Stack Size: 0x28 bytes */

void WCRefineLinkParser::parseXResolvedURL_sourceURL_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  ID IVar6;
  ID local_f8;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  ID local_a0;
  cfstringStruct *local_98;
  undefined4 local_8c;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  byte local_59;
  ID local_58;
  ID local_50;
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
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_xStatusIDFromURL__026ae090,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_59 = 0;
  local_f8 = IVar3;
  if (IVar3 == 0) {
    local_f8 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_xStatusIDFromURL__026ae090,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_f8;
  }
  local_59 = IVar3 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_f8;
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  puVar4 = PTR___dispatch_main_q_02578680;
  if (IVar3 == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_48;
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_010558e4;
    local_70 = &DAT_025814c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = uVar1;
    _dispatch_async(puVar4,&local_88);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_8c = 1;
    _objc_storeStrong(&local_68,0);
  }
  else {
    pcVar5 = &cf_https___api_fxtwitter_com_status_;
    (*(code *)PTR__objc_msgSend_02578628)
              (&cf_https___api_fxtwitter_com_status_,PTR_s_stringByAppendingString__0269d398,
               local_50);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    IVar6 = local_28;
    local_98 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_desktopUA_026adc48);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_48;
    local_d8 = PTR___NSConcreteStackBlock_02578660;
    local_d0 = 0xc2000000;
    local_cc = 0;
    local_c8 = FUN_01055a08;
    local_c0 = &DAT_025849b0;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_40;
    local_a8 = uVar1;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_38;
    local_b8 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar1;
    local_a0 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_fetchURL_allowRedirect_ua_comple_026adca0,pcVar5,1,IVar6,&local_d8);
    (*(code *)PTR__objc_release_02578630)(IVar6);
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_98,0);
    local_8c = 0;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

