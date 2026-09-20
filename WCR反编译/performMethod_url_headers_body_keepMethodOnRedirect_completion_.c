// performMethod:url:headers:body:keepMethodOnRedirect:completion: @ 00f03038

/* Function Stack Size: 0x3c bytes */

void WCRefineCloudBackupService::performMethod_url_headers_body_keepMethodOnRedirect_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,bool param_7,
               ID param_8,undefined4 param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_110;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined4 local_7c;
  long local_78;
  byte local_69;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  cfstringStruct *local_50;
  SEL local_48;
  ID local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = (cfstringStruct *)0x0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_4);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_5);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_6);
  local_69 = (byte)param_7;
  local_78 = 0;
  _objc_storeStrong(&local_78,param_8);
  lVar1 = local_78;
  puVar3 = PTR__OBJC_CLASS___NSError_026ce470;
  if (local_58 == 0) {
    if (local_78 != 0) {
      local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_30 = &cf_0W_WeHe;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineCloudBackup,
                 0xffffffffffffffff);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))(lVar1,0,0);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    local_7c = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,PTR_s_requestWithURL__026a16e0,
               local_58);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_50;
    local_88 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_110 = &cf_GET;
    }
    else {
      local_110 = local_50;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setHTTPMethod__026a64b0,local_110);
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setTimeoutInterval__0269cae8);
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setHTTPBody__026a64b8,local_68);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_WCRefine_CloudBackup_1_0,
               &cf_User_Agent);
    uVar2 = local_60;
    puVar3 = local_88;
    local_b0 = PTR___NSConcreteGlobalBlock_02578658;
    local_a8 = 0xd0800000;
    local_a4 = 0;
    local_a0 = FUN_00f035f8;
    local_98 = &DAT_025821d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_b0);
    puVar3 = PTR_WCRCloudHTTPRun_026ceb58;
    _objc_alloc_init();
    local_b8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setDone__026a15a0,local_78);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_setKeepMethodOnRedirect__026abae0,local_69 & 1);
    puVar3 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_HTTPMethod_026abae8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setOriginalMethod__026abaf0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setOriginalBody__026abaf8,local_68);
    puVar3 = PTR__OBJC_CLASS___NSURLSessionConfiguration_026ce488;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLSessionConfiguration_026ce488,
               PTR_s_ephemeralSessionConfiguration_026aaf10);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4056800000000000,puVar3,PTR_s_setTimeoutIntervalForRequest__026a16f8);
    (*(code *)PTR__objc_msgSend_02578628)
              (0x405e000000000000,local_c0,PTR_s_setTimeoutIntervalForResource__026a1700);
    puVar3 = PTR__OBJC_CLASS___NSURLSession_026ce498;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLSession_026ce498,
               PTR_s_sessionWithConfiguration_delegat_026a1710,local_c0,local_b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_setSession__0269d2e0);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_session_0269d000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_88,0);
    local_7c = 0;
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

