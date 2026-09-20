// wcr_redeemThemeProCode:weChat:completion: @ 0172b60c

/* Function Stack Size: 0x28 bytes */

void ThemeBoxAirDropThemePickViewController::wcr_redeemThemeProCode_weChat_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  cfstringStruct *local_140;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  long local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  long local_a0;
  undefined *local_98;
  long local_90;
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
  if (lVar1 == 0) {
    if (local_70 != 0) {
      (**(code **)(local_70 + 0x10))(local_70,0,&cf_QQbcxN_Nzz);
    }
    local_84 = 1;
  }
  else {
    lVar1 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
    puVar4 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
    if (lVar1 == 0) {
      if (local_70 != 0) {
        (**(code **)(local_70 + 0x10))(local_70,0,&cf__e_gn__OSel_O_u);
      }
      local_84 = 1;
    }
    else {
      local_90 = 0;
      local_48 = &cf_code;
      local_38 = local_78;
      local_40 = &cf_weChat;
      local_30 = local_80;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_dataWithJSONObject_options_error_026a64a8,puVar3,0,&local_a0);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_90,local_a0);
      local_98 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if ((local_90 == 0) && (local_98 != (undefined *)0x0)) {
        pcVar5 = (cfstringStruct *)PTR_ThemeProRedeemService_026cef38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_ThemeProRedeemService_026cef38,
                   PTR_s_encryptedPayloadDataForPlainJSON_026b3c30,local_98);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSData_026ce1d0;
        local_a8 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
        if ((((ulong)pcVar5 & 1) == 0) ||
           (pcVar5 = local_a8, (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0)
           , pcVar5 == (cfstringStruct *)0x0)) {
          if (local_70 != 0) {
            (**(code **)(local_70 + 0x10))(local_70,0,&::cf_T);
          }
          local_84 = 1;
        }
        else {
          pcVar5 = local_a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a8,PTR_s_base64EncodedStringWithOptions__026a1df8,0);
          _objc_retainAutoreleasedReturnValue();
          local_140 = pcVar5;
          if (pcVar5 == (cfstringStruct *)0x0) {
            local_140 = &::cf___;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = local_140;
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          pcVar5 = local_b0;
          FUN_0172bd64();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf_code___)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_b8 = puVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,
                     &cf_http___www_themepro_shop_api_1092);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
          local_c0 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,PTR_s_requestWithURL__026a16e0,
                     puVar4);
          _objc_retainAutoreleasedReturnValue();
          local_c8 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x4024000000000000,puVar3,PTR_s_setTimeoutInterval__0269cae8);
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setHTTPMethod__026a64b0,&cf_POST);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_setValue_forHTTPHeaderField__026a16e8,
                     &cf_application_x_www_form_urlencoded,&cf_Content_Type);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_setValue_forHTTPHeaderField__026a16e8,
                     &cf_Mozilla_5_0_WindowsNT10_0_Win64_x64_AppleWebKit_537_36,&cf_User_Agent);
          puVar4 = local_c8;
          puVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_dataUsingEncoding__026a12e8,4);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setHTTPBody__026a64b8);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          puVar3 = PTR__OBJC_CLASS___NSURLSession_026ce498;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSURLSession_026ce498,PTR_s_sharedSession_026a64c0);
          _objc_retainAutoreleasedReturnValue();
          lVar1 = local_70;
          puVar4 = local_c8;
          local_f8 = PTR___NSConcreteStackBlock_02578660;
          local_f0 = 0xc2000000;
          local_ec = 0;
          local_e8 = FUN_0172bee0;
          local_e0 = &DAT_02581b60;
          (*(code *)PTR__objc_retain_02578638)();
          local_d8 = lVar1;
          puVar6 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_dataTaskWithRequest_completionHa_026a5f60,puVar4,&local_f8);
          _objc_retainAutoreleasedReturnValue();
          local_d0 = puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_resume_026a1720);
          _objc_storeStrong(&local_d0);
          _objc_storeStrong(&local_d8,0);
          _objc_storeStrong(&local_c8,0);
          _objc_storeStrong(&local_c0,0);
          _objc_storeStrong(&local_b8,0);
          _objc_storeStrong(&local_b0,0);
          local_84 = 0;
        }
        _objc_storeStrong(&local_a8,0);
      }
      else {
        if (local_70 != 0) {
          (**(code **)(local_70 + 0x10))(local_70,0,&cf_BlSpe);
        }
        local_84 = 1;
      }
      _objc_storeStrong(&local_98);
      _objc_storeStrong(&local_90,0);
    }
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

