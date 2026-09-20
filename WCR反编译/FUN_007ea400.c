// FUN_007ea400 @ 007ea400

void FUN_007ea400(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  long local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  long local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined4 local_70;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  long *plVar3;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_2);
  plVar3 = &local_60;
  local_60 = 0;
  _objc_storeStrong(plVar3,param_3);
  uVar2 = (uint)plVar3;
  FUN_007e42b4();
  if ((uVar2 & 1) == 0) {
    if (local_60 != 0) {
      (**(code **)(local_60 + 0x10))(local_60,0,&cf_RQQbc_sQ);
    }
    local_70 = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,
               &cf_https___theme_25mao_com_index_redeem);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
    local_78 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,PTR_s_requestWithURL__026a16e0,puVar4)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setHTTPMethod__026a64b0,&cf_POST);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_application_json,
               &cf_Content_Type);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_application_json,&cf_Accept)
    ;
    local_48 = &cf_wxid;
    local_38 = local_58;
    local_40 = &cf_code;
    local_30 = local_50;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
    _objc_retainAutoreleasedReturnValue();
    local_90 = 0;
    local_a0 = 0;
    puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
    local_88 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
               PTR_s_dataWithJSONObject_options_error_026a64a8,puVar4,0,&local_a0);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_90,local_a0);
    local_98 = puVar5;
    if (local_90 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setHTTPBody__026a64b8,puVar5);
      puVar5 = PTR__OBJC_CLASS___NSURLSession_026ce498;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_60;
      puVar4 = local_80;
      local_d8 = PTR___NSConcreteStackBlock_02578660;
      local_d0 = 0xc2000000;
      local_cc = 0;
      local_c8 = FUN_007ec7b4;
      local_c0 = &DAT_02580210;
      local_a8 = puVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar4,&local_d8);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_resume_026a1720);
      _objc_storeStrong(&local_b0);
      _objc_storeStrong(&local_b8,0);
      _objc_storeStrong(&local_a8,0);
      local_70 = 0;
    }
    else {
      if (local_60 != 0) {
        (**(code **)(local_60 + 0x10))(local_60,0,&cf_BlSpe);
      }
      local_70 = 1;
    }
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

