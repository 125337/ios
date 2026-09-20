// fetchInstagramOEmbedForURL:completion: @ 01062818

/* Function Stack Size: 0x20 bytes */

void WCRefineLinkParser::fetchInstagramOEmbedForURL_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  long lVar1;
  ID IVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ID IVar7;
  undefined8 in_d0;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  long local_90;
  ID local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  long local_68;
  undefined4 local_5c;
  long local_58;
  long local_50;
  SEL local_48;
  ID local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3,param_3,param_4,param_5);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_4);
  lVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  lVar6 = local_50;
  lVar1 = local_58;
  puVar5 = PTR__OBJC_CLASS___NSError_026ce470;
  if (lVar3 == 0) {
    if (local_58 != 0) {
      local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_30 = &cf_I;
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineLinkParser,
                 0xfffffffffffffff6);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))(lVar1,0);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    local_5c = 1;
  }
  else {
    puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_URLQueryAllowedCharacterSet_0269d8f8)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_stringByAddingPercentEncodingWit_0269d900);
    _objc_retainAutoreleasedReturnValue();
    local_68 = lVar6;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_https___www_instagram_com_api_v1_oembed__url___);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar5;
    _CFAbsoluteTimeGetCurrent();
    IVar2 = local_40;
    puVar5 = local_70;
    IVar7 = local_40;
    local_78 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_mobileUA_026adc18);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_58;
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_01062bc0;
    local_98 = &DAT_02584b10;
    local_88 = local_40;
    local_80 = local_78;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_fetchURL_allowRedirect_ua_comple_026adca0,puVar5,1,IVar7,&local_b0);
    (*(code *)PTR__objc_release_02578630)(IVar7);
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    local_5c = 0;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

