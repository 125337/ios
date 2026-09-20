// FUN_0171a6b8 @ 0171a6b8

void FUN_0171a6b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined4 local_80;
  long local_70;
  long local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = 0;
  local_58 = param_2;
  local_50 = param_1;
  _objc_storeStrong(&local_60,param_3);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_4);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_5);
  if ((local_60 == 0) ||
     (lVar2 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_showToast__026b3a18,&cf_QQbcxN_Nzz);
    if (local_70 != 0) {
      (**(code **)(local_70 + 0x10))(local_70,0);
    }
    local_80 = 1;
  }
  else if ((local_68 == 0) ||
          (lVar2 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0),
          uVar1 = local_50, lVar2 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_showToast__026b3a18,&cf_elS_u7bOo_);
    if (local_70 != 0) {
      (**(code **)(local_70 + 0x10))(local_70,0);
    }
    local_80 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_ck_WQQbc_);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_showToast_isLoading__026b3968,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,
               &cf_https___theme_25mao_com_index_redeem);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
    local_88 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,PTR_s_requestWithURL__026a16e0,puVar3)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_90 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setHTTPMethod__026a64b0,&cf_POST);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_application_json,
               &cf_Content_Type);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_application_json,&cf_Accept)
    ;
    local_48 = &cf_wxid;
    local_38 = local_68;
    local_40 = &cf_code;
    local_30 = local_60;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = 0;
    local_b0 = 0;
    puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
    local_98 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
               PTR_s_dataWithJSONObject_options_error_026a64a8,puVar3,0,&local_b0);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_a0,local_b0);
    local_a8 = puVar4;
    if (local_a0 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setHTTPBody__026a64b8,puVar4);
      puVar4 = PTR__OBJC_CLASS___NSURLSession_026ce498;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_70;
      puVar3 = local_90;
      local_f0 = PTR___NSConcreteStackBlock_02578660;
      local_e8 = 0xc2000000;
      local_e4 = 0;
      local_e0 = FUN_0171c610;
      local_d8 = &DAT_025886a0;
      local_c8 = local_50;
      local_b8 = puVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_d0 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar3,&local_f0);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_resume_026a1720);
      _objc_storeStrong(&local_c0);
      _objc_storeStrong(&local_d0,0);
      _objc_storeStrong(&local_b8,0);
      local_80 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_showToast__026b3a18,&cf_BlSpe);
      if (local_70 != 0) {
        (**(code **)(local_70 + 0x10))(local_70,0);
      }
      local_80 = 1;
    }
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

