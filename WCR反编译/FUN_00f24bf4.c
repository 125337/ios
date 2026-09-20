// FUN_00f24bf4 @ 00f24bf4

byte FUN_00f24bf4(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  byte local_134;
  cfstringStruct *local_120;
  cfstringStruct *local_e0;
  cfstringStruct *local_90;
  cfstringStruct *local_88 [2];
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68 [3];
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  int local_38;
  undefined4 local_34;
  cfstringStruct *local_30;
  byte local_21;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == (cfstringStruct *)0x0) {
    local_21 = 0;
    local_34 = 1;
  }
  else {
    local_38 = 0;
    local_40 = (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = &cf___;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = &cf___;
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_uiMessageType);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = (int)pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_oWCPayInfoItem)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_68[0] = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_valueForKey__0269d128,&cf_m_c2cNativeUrl);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_70 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar1 & 1) == 0) {
      local_e0 = &cf___;
    }
    else {
      local_e0 = local_70;
    }
    _objc_storeStrong(&local_48,local_e0);
    pcVar1 = local_68[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68[0],PTR_s_valueForKey__0269d128,&cf_m_uiPaySubType);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_nsContent);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_78 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar1 & 1) == 0) {
      local_120 = &cf___;
    }
    else {
      local_120 = local_78;
    }
    _objc_storeStrong(&local_50,local_120);
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(local_68,0);
    if (local_38 == 0x31) {
      pcVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_50;
      local_88[0] = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_88[0];
      local_90 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88[0],PTR_s_hasPrefix__0269d320,&cf_wxpay___c2cbizmessagehandler_hongbao_);
      local_134 = 1;
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar1 = local_88[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88[0],PTR_s_hasPrefix__0269d320,&cf_wxpay___c2ctransfer);
        local_134 = 1;
        if ((((ulong)pcVar1 & 1) == 0) && (local_134 = 1, local_40 != (cfstringStruct *)0x1)) {
          pcVar1 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_90,PTR_s_containsString__0269d0b0,&cf_receivehongbao);
          local_134 = 1;
          if (((ulong)pcVar1 & 1) == 0) {
            pcVar1 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_90,PTR_s_containsString__0269d0b0,&cf_transfer_id);
            local_134 = 1;
            if (((ulong)pcVar1 & 1) == 0) {
              pcVar1 = local_90;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_90,PTR_s_containsString__0269d0b0,&cf_<transfer);
              local_134 = (byte)pcVar1;
            }
          }
        }
      }
      local_21 = local_134 & 1;
      local_34 = 1;
      _objc_storeStrong(&local_90);
      _objc_storeStrong(local_88,0);
    }
    else {
      local_21 = 0;
      local_34 = 1;
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

