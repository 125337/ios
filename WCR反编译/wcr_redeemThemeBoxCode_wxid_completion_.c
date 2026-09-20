// wcr_redeemThemeBoxCode:wxid:completion: @ 0172ab64

/* Function Stack Size: 0x28 bytes */

void ThemeBoxAirDropThemePickViewController::wcr_redeemThemeBoxCode_wxid_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  long local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined4 local_84;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  SEL local_58;
  ID local_50;
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
  lVar1 = local_60;
  FUN_01725ed0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_68;
  local_78 = lVar1;
  FUN_01725ed0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_78;
  local_80 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (lVar1 = local_80, (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    if (local_70 != 0) {
      (**(code **)(local_70 + 0x10))(local_70,0,&cf_Spe_Nzz);
    }
    local_84 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,
               &cf_https___theme_25mao_com_index_redeem);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
    local_90 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,PTR_s_requestWithURL__026a16e0,puVar3)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_98 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setHTTPMethod__026a64b0,&cf_POST);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_98,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_application_json,
               &cf_Content_Type);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_98,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_application_json,&cf_Accept)
    ;
    local_48 = &cf_wxid;
    local_38 = local_80;
    local_40 = &cf_code;
    local_30 = local_78;
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = 0;
    local_b8 = 0;
    puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
    local_a0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
               PTR_s_dataWithJSONObject_options_error_026a64a8,puVar3,0,&local_b8);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_a8,local_b8);
    local_b0 = puVar4;
    if ((local_a8 == 0) && (puVar4 != (undefined *)0x0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setHTTPBody__026a64b8,puVar4);
      puVar4 = PTR__OBJC_CLASS___NSURLSession_026ce498;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_70;
      puVar3 = local_98;
      local_e8 = PTR___NSConcreteStackBlock_02578660;
      local_e0 = 0xc2000000;
      local_dc = 0;
      local_d8 = FUN_0172b024;
      local_d0 = &DAT_02581b60;
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = lVar1;
      puVar5 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar3,&local_e8);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_resume_026a1720);
      _objc_storeStrong(&local_c0);
      _objc_storeStrong(&local_c8,0);
      local_84 = 0;
    }
    else {
      if (local_70 != 0) {
        (**(code **)(local_70 + 0x10))(local_70,0,&cf_BlSpe);
      }
      local_84 = 1;
    }
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_90,0);
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

