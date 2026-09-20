// reloadDouyinIfStuckOnBlank: @ 010718ac

/* Function Stack Size: 0x18 bytes */

bool WCRXHSWebExtractSession::reloadDouyinIfStuckOnBlank_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint local_e4;
  cfstringStruct *local_d8;
  cfstringStruct *local_c0;
  undefined *local_b0;
  undefined *local_a8;
  cfstringStruct *local_a0;
  byte local_92;
  byte local_91;
  cfstringStruct *local_90;
  byte local_81;
  cfstringStruct *local_80;
  byte local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined4 local_60;
  byte local_59;
  cfstringStruct *local_58;
  byte local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  SEL local_38;
  cfstringStruct *local_30;
  byte local_21;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_40,param_3);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_finished_026a15b0);
  local_49 = 0;
  local_59 = 0;
  bVar1 = true;
  if (((ulong)pcVar2 & 1) == 0) {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pageURL_026ae148);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = true;
    if (pcVar2 != (cfstringStruct *)0x0) {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_webView_026a12c0);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      bVar1 = pcVar2 == (cfstringStruct *)0x0;
      local_58 = pcVar2;
    }
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if (bVar1) {
    local_21 = 0;
    local_60 = 1;
  }
  else {
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    local_71 = 0;
    local_81 = 0;
    local_91 = 0;
    if (pcVar2 == (cfstringStruct *)0x0) {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_webView_026a12c0);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_81 = 1;
      local_80 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_91 = 1;
      local_d8 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_d8 = &::cf___;
      }
      local_c0 = local_d8;
      local_90 = pcVar2;
    }
    else {
      local_c0 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_c0;
    if ((local_91 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    pcVar2 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_hasPrefix__0269d320,&cf_about_);
    local_e4 = 1;
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_containsString__0269d0b0,&cf_about_blank)
      ;
      local_e4 = (uint)pcVar2;
    }
    local_92 = (byte)local_e4 & 1;
    if ((local_e4 & 1) == 0) {
      local_21 = 0;
      local_60 = 1;
    }
    else {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_webView_026a12c0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pollCount_026ae170);
        if ((long)pcVar2 < 6) {
          local_21 = 0;
          local_60 = 1;
        }
        else {
          pcVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_blankReloads_026ae190);
          pcVar2 = local_30;
          if ((long)pcVar3 < 2) {
            pcVar3 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_blankReloads_026ae190);
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_setBlankReloads__026ae198,
                       (undefined1 *)((long)&pcVar3->field0_0x0 + 1));
            pcVar2 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_blankReloads_026ae190);
            puVar4 = PTR_WCRefineLinkParser_026ce168;
            local_a0 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineLinkParser_026ce168,PTR_s_desktopUA_026adc48);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
            puVar5 = PTR__OBJC_CLASS___NSURL_026ce328;
            pcVar2 = local_30;
            local_a8 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pageURL_026ae148);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_URLWithString__026a16d8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_requestWithURL__026a16e0);
            _objc_retainAutoreleasedReturnValue();
            local_b0 = puVar6;
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_setValue_forHTTPHeaderField__026a16e8,local_a8,&cf_User_Agent)
            ;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_setValue_forHTTPHeaderField__026a16e8,
                       &cf_https___www_douyin_com_,&cf_Referer);
            pcVar2 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_webView_026a12c0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_unsafeClaimAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_pollCount_026ae170);
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_stringWithFormat__0269cca8,&cf_poll__ldreload_blank__ldpage___);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setLastDiag__026ae180);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            local_21 = 1;
            local_60 = 1;
            _objc_storeStrong(&local_b0);
            _objc_storeStrong(&local_a8,0);
          }
          else {
            local_21 = 0;
            local_60 = 1;
          }
        }
      }
      else {
        local_21 = 0;
        local_60 = 1;
      }
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

