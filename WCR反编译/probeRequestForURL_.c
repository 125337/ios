// probeRequestForURL: @ 0102cfc4

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::probeRequestForURL_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  uint local_a4;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_78;
  cfstringStruct *local_50;
  undefined4 local_44;
  cfstringStruct *local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,PTR_s_requestWithURL__026a16e0,local_30)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4018000000000000,puVar1,PTR_s_setTimeoutInterval__0269cae8);
  puVar1 = local_38;
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_mobileUA_026adc18);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setValue_forHTTPHeaderField__026a16e8,IVar2,&cf_User_Agent);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_host_0269dc50);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_78 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_78 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_78;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hostNeedsTikTokSession__026adc78,local_40);
  if ((IVar2 & 1) == 0) {
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf_bilibili);
    if (((((ulong)pcVar3 & 1) == 0) &&
        (pcVar3 = local_40,
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf_bilivideo)
        , ((ulong)pcVar3 & 1) == 0)) &&
       (pcVar3 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf_hdslb),
       ((ulong)pcVar3 & 1) == 0)) {
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf_xhscdn);
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf_instagram)
        ;
        if (((ulong)pcVar3 & 1) == 0) {
          pcVar3 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf_kwai);
          local_a4 = 1;
          if (((ulong)pcVar3 & 1) == 0) {
            pcVar3 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_containsString__0269d0b0,&cf_yximgs);
            local_a4 = (uint)pcVar3;
          }
          local_a0 = &cf_https___www_kuaishou_com_;
          if ((local_a4 & 1) == 0) {
            local_a0 = &cf_https___www_douyin_com_;
          }
        }
        else {
          local_a0 = &cf_https___www_instagram_com_;
        }
        local_98 = local_a0;
      }
      else {
        local_98 = &cf_https___www_xiaohongshu_com_;
      }
      local_90 = local_98;
    }
    else {
      local_90 = &cf_https___www_bilibili_com_;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setValue_forHTTPHeaderField__026a16e8,local_90,&cf_Referer);
    puVar1 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_applyTikTokCDNHeadersToRequest__026ad8e8,local_38);
    puVar1 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
    local_44 = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

