// wcr_publishFishModelId:fishVisibility:completion: @ 0159c954

/* Function Stack Size: 0x28 bytes */

void WCRefineVoiceCloneHelper::wcr_publishFishModelId_fishVisibility_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  bool bVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ID IVar8;
  cfstringStruct *pcVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  undefined **local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  ID local_b0;
  uint local_a4;
  ulong local_a0;
  long local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined **local_68;
  undefined8 local_60;
  ulong local_58;
  long local_50;
  SEL local_48;
  ID local_40;
  cfstringStruct *local_38;
  ulong local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_4);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_5);
  uVar2 = local_60;
  ppuVar3 = &local_90;
  local_90 = PTR___NSConcreteStackBlock_02578660;
  local_88 = 0xc2000000;
  local_84 = 0;
  local_80 = FUN_0159d028;
  local_78 = &DAT_02581a60;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = uVar2;
  _objc_retainBlock();
  lVar4 = local_50;
  local_68 = ppuVar3;
  FUN_0159d090();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = local_58;
  puVar5 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_98 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_a0 = uVar7;
  (*(code *)PTR__objc_release_02578630)(uVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  lVar4 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
  if (lVar4 == 0) {
    (*(code *)local_68[2])(local_68,&cf____);
    local_a4 = 1;
  }
  else {
    uVar6 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_isEqualToString__0269ccc8,&cf_public);
    if ((uVar6 & 1) == 0) {
      uVar6 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_isEqualToString__0269ccc8,&cf_unlist);
      if ((uVar6 & 1) == 0) {
        (*(code *)local_68[2])(local_68,&cf_F);
        local_a4 = 1;
        goto LAB_0159cf9c;
      }
    }
    IVar8 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_wcr_requestCredential_026b09e0);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = IVar8;
    (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_length_0269cca0);
    puVar5 = PTR__OBJC_CLASS___NSURL_026ce328;
    if (IVar8 == 0) {
      (*(code *)local_68[2])(local_68,&cf__gMn_cSQelbr9eblQ);
      local_a4 = 1;
    }
    else {
      pcVar9 = &cf_https___api_fish_audio;
      (*(code *)PTR__objc_msgSend_02578628)
                (&cf_https___api_fish_audio,PTR_s_stringByAppendingFormat__026a2088,&cf__model___);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_URLWithString__026a16d8);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = puVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar9);
      puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
      bVar1 = local_b8 != (undefined *)0x0;
      if (bVar1) {
        local_38 = &cf_visibility;
        local_30 = local_a0;
        puVar10 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_dataWithJSONObject_options_error_026a64a8,puVar10,0,0);
        _objc_retainAutoreleasedReturnValue();
        local_c0 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar10);
        puVar5 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,PTR_s_requestWithURL__026a16e0,
                   local_b8);
        _objc_retainAutoreleasedReturnValue();
        local_c8 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setHTTPMethod__026a64b0,&cf_PATCH);
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setHTTPBody__026a64b8,local_c0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x4034000000000000,local_c8,PTR_s_setTimeoutInterval__0269cae8);
        puVar5 = local_c8;
        puVar10 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_Bearer__
                  );
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_setValue_forHTTPHeaderField__026a16e8,puVar10,&cf_Authorization);
        (*(code *)PTR__objc_release_02578630)(puVar10);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_application_json,
                   &cf_Content_Type);
        puVar10 = PTR__OBJC_CLASS___NSURLSession_026ce498;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar3 = local_68;
        puVar5 = local_c8;
        local_f0 = PTR___NSConcreteStackBlock_02578660;
        local_e8 = 0xc2000000;
        local_e4 = 0;
        local_e0 = FUN_0159d1ac;
        local_d8 = &DAT_02581b60;
        (*(code *)PTR__objc_retain_02578638)();
        local_d0 = ppuVar3;
        puVar11 = puVar10;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar10,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar5,&local_f0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar11);
        (*(code *)PTR__objc_release_02578630)(puVar10);
        _objc_storeStrong(&local_d0);
        _objc_storeStrong(&local_c8,0);
        _objc_storeStrong(&local_c0,0);
      }
      else {
        (*(code *)local_68[2])(local_68,&cf_F);
      }
      local_a4 = (uint)!bVar1;
      _objc_storeStrong(&local_b8,0);
    }
    _objc_storeStrong(&local_b0,0);
  }
LAB_0159cf9c:
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

