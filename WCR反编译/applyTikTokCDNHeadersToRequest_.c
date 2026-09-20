// applyTikTokCDNHeadersToRequest: @ 010190f8

/* Function Stack Size: 0x18 bytes */

void WCRefineLinkParser::applyTikTokCDNHeadersToRequest_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *local_48;
  undefined *local_40;
  ID local_38;
  undefined4 local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_desktopUA_026adc48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_setValue_forHTTPHeaderField__026a16e8,IVar2,&cf_User_Agent);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_https___www_tiktok_com_,
               &cf_Referer);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_https___www_tiktok_com,
               &cf_Origin);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf____,&cf_Accept);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tikTokCookies_026adc50);
    _objc_retainAutoreleasedReturnValue();
    local_38 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_count_0269cfe0);
    if (IVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSHTTPCookie_026cec90;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSHTTPCookie_026cec90,
                 PTR_s_requestHeaderFieldsWithCookies__026adc58,local_38);
      _objc_retainAutoreleasedReturnValue();
      local_40 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_objectForKeyedSubscript__0269d098,&cf_Cookie);
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
      if (puVar3 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_setValue_forHTTPHeaderField__026a16e8,local_48,&cf_Cookie);
      }
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

