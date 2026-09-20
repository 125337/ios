// sendRedeemRequest @ 01754ee0

/* Function Stack Size: 0x10 bytes */

void ThemeBoxRedeemViewController::sendRedeemRequest(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined *local_a8;
  uint local_9c;
  undefined8 local_98;
  undefined *local_90;
  long local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  ID local_68;
  ID local_60;
  SEL local_58;
  ID local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  ID local_38;
  ID local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = param_2;
  local_50 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wxid_026b04e8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_50;
  local_60 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_codeTextField_026b3398);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_68 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,
             &cf_https___theme_25mao_com_index_redeem);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
  local_70 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,PTR_s_requestWithURL__026a16e0,puVar4);
  _objc_retainAutoreleasedReturnValue();
  local_78 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setHTTPMethod__026a64b0,&cf_POST);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_application_json,
             &cf_Content_Type);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_application_json,&cf_Accept);
  local_48 = &cf_wxid;
  local_38 = local_60;
  local_40 = &cf_code;
  local_30 = local_68;
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_38,&local_48,2);
  _objc_retainAutoreleasedReturnValue();
  local_88 = 0;
  local_98 = 0;
  puVar5 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
  local_80 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
             PTR_s_dataWithJSONObject_options_error_026a64a8,puVar4,0,&local_98);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_88,local_98);
  bVar1 = local_88 == 0;
  local_90 = puVar5;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setHTTPBody__026a64b8,puVar5);
    puVar5 = PTR__OBJC_CLASS___NSURLSession_026ce498;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_50;
    puVar4 = local_78;
    local_d8 = PTR___NSConcreteStackBlock_02578660;
    local_d0 = 0xc2000000;
    local_cc = 0;
    local_c8 = FUN_01755300;
    local_c0 = &DAT_02588360;
    local_a8 = puVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_b8 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar4,&local_d8);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_resume_026a1720);
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_a8,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_handleRequestError__026b41f0,local_88);
  }
  local_9c = (uint)!bVar1;
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

