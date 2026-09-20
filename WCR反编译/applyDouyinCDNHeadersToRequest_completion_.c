// applyDouyinCDNHeadersToRequest:completion: @ 01019348

/* Function Stack Size: 0x20 bytes */

void WCRefineLinkParser::applyDouyinCDNHeadersToRequest_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  long local_90;
  undefined **local_88;
  undefined *local_80;
  uint local_74;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined **local_48;
  undefined8 local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3,param_3,param_4,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar2 = local_40;
  ppuVar4 = &local_70;
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_0101966c;
  local_58 = &DAT_025814c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = uVar2;
  _objc_retainBlock();
  lVar3 = local_38;
  bVar1 = local_38 != 0;
  local_48 = ppuVar4;
  if (bVar1) {
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_desktopUA_026adc48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar3,PTR_s_setValue_forHTTPHeaderField__026a16e8,IVar5,&cf_User_Agent);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_https___www_douyin_com_,
               &cf_Referer);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf_https___www_douyin_com,
               &cf_Origin);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setValue_forHTTPHeaderField__026a16e8,&cf____,&cf_Accept);
    puVar6 = PTR__OBJC_CLASS___WKWebsiteDataStore_026cec98;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___WKWebsiteDataStore_026cec98,PTR_s_defaultDataStore_026adc60);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    lVar3 = local_38;
    puVar6 = local_80;
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_010196b8;
    local_98 = &DAT_025842e0;
    (*(code *)PTR__objc_retain_02578638)();
    ppuVar4 = local_48;
    local_90 = lVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = ppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_getAllCookies__026adc70,&local_b0);
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_80,0);
  }
  else {
    (*(code *)ppuVar4[2])();
  }
  local_74 = (uint)!bVar1;
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

