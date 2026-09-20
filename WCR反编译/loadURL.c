// loadURL @ 01fc8af8

/* Function Stack Size: 0x10 bytes */

void WebViewController::loadURL(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  uint local_90;
  ID local_70;
  undefined *local_68;
  byte local_59;
  ID local_58;
  byte local_49;
  ID local_48;
  byte local_39;
  ID local_38;
  byte local_29;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_url_026a5a28);
  _objc_retainAutoreleasedReturnValue();
  local_29 = 0;
  local_39 = 0;
  local_49 = 0;
  local_59 = 0;
  bVar1 = true;
  if (param_1 != 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_url_026a5a28);
    _objc_retainAutoreleasedReturnValue();
    local_29 = 1;
    local_28 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    bVar1 = true;
    local_38 = IVar2;
    if (IVar2 != 0) {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_url_026a5a28);
      _objc_retainAutoreleasedReturnValue();
      local_49 = 1;
      local_48 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      local_58 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = IVar2 == 0;
    }
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if ((local_29 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (!bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setIsLoading__026c06f8,1);
    puVar3 = PTR__OBJC_CLASS___NSMutableURLRequest_026ce480;
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_url_026a5a28);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_requestWithURL__026a16e0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = puVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_url_026a5a28);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_70 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_containsString__0269d0b0,&cf_sutuplus_vip);
    local_90 = 1;
    if ((IVar2 & 1) == 0) {
      IVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_containsString__0269d0b0,&cf_themepro_ca)
      ;
      local_90 = 1;
      if ((IVar2 & 1) == 0) {
        IVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_containsString__0269d0b0,&cf_w277_com);
        local_90 = 1;
        if ((IVar2 & 1) == 0) {
          IVar2 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_containsString__0269d0b0,&cf_25mao_com);
          local_90 = (uint)IVar2;
        }
      }
    }
    if ((local_90 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setCachePolicy__026ca250,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setCachePolicy__026ca250,2);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402e000000000000,local_68,PTR_s_setTimeoutInterval__0269cae8);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_offlineView_026ca220);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
  }
  return;
}

