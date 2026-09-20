// downloadLinkCardCover:completion: @ 01005708

/* Function Stack Size: 0x20 bytes */

void WCRefineLinkMediaSender::downloadLinkCardCover_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined **ppuVar6;
  byte local_114;
  cfstringStruct *local_110;
  cfstringStruct *local_d8;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  undefined *local_98;
  long local_90;
  undefined **local_88;
  byte local_79;
  cfstringStruct *local_78;
  undefined *local_70;
  uint local_64;
  undefined *local_60;
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
  _objc_storeStrong(&local_50,param_3,param_3,param_4,param_5);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_4);
  if (local_50 == (cfstringStruct *)0x0) {
    local_d8 = &::cf___;
  }
  else {
    local_d8 = local_50;
  }
  puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_d8);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_58;
  puVar4 = PTR__OBJC_CLASS___NSError_026ce470;
  local_60 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    if (local_58 != 0) {
      local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_30 = &cf_eHe_b0W_W;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_errorWithDomain_code_userInfo__026a1648,&cf_WCRefineLinkMediaSender,
                 0xffffffffffffffff);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))(lVar2,0);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    local_64 = 1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableURLRequest_026ce480,PTR_s_requestWithURL__026a16e0,puVar3)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4020000000000000,puVar4,PTR_s_setTimeoutInterval__0269cae8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_setValue_forHTTPHeaderField__026a16e8,
               &
               cf_Mozilla_5_0_Macintosh_IntelMacOSX10_15_7_AppleWebKit_537_36_KHTML_likeGecko_Chrome_120_0_0_0Safari_537_36
               ,&cf_User_Agent);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf____,&cf_Accept);
    pcVar5 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_110 = pcVar5;
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_110 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = local_110;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    pcVar5 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_containsString__0269d0b0,&cf_douyinpic);
    local_114 = 1;
    if (((ulong)pcVar5 & 1) == 0) {
      pcVar5 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_containsString__0269d0b0,&cf_byteimg);
      local_114 = 1;
      if (((ulong)pcVar5 & 1) == 0) {
        pcVar5 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_containsString__0269d0b0,&cf_ibyteimg);
        local_114 = (byte)pcVar5;
      }
    }
    puVar4 = local_70;
    local_79 = local_114 & 1;
    ppuVar6 = &local_b8;
    local_b8 = PTR___NSConcreteStackBlock_02578660;
    local_b0 = 0xc2000000;
    local_ac = 0;
    local_a8 = FUN_01005bd0;
    local_a0 = &DAT_0257ca68;
    (*(code *)PTR__objc_retain_02578638)();
    lVar2 = local_58;
    local_98 = puVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = lVar2;
    _objc_retainBlock();
    bVar1 = (local_79 & 1) == 0;
    local_88 = ppuVar6;
    if (bVar1) {
      (*(code *)ppuVar6[2])();
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLinkParser_026ce168,PTR_s_applyDouyinCDNHeadersToRequest_c_026ad900,
                 local_70,ppuVar6);
    }
    local_64 = (uint)!bVar1;
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

