// FUN_008a28c0 @ 008a28c0

byte FUN_008a28c0(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  byte local_60;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_20;
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_hasPrefix__0269d320,&cf_clicfg_gogwcs_ios_);
    if ((uVar3 & 1) == 0) {
      local_11 = 0;
    }
    else {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_containsString__0269d0b0,&cf_report_enable);
      local_60 = 1;
      if ((uVar2 & 1) == 0) {
        uVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_containsString__0269d0b0,&cf_turing_sdk_enable);
        local_60 = 1;
        if ((uVar2 & 1) == 0) {
          uVar2 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_containsString__0269d0b0,&cf_ccdata_calltrace_sample_enable);
          local_60 = 1;
          if ((uVar2 & 1) == 0) {
            uVar2 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_containsString__0269d0b0,&cf_scheme_check_enable);
            local_60 = 1;
            if ((uVar2 & 1) == 0) {
              uVar2 = local_38;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_38,PTR_s_isEqualToString__0269ccc8,
                         &cf_clicfg_gogwcs_ios_runtime_sdk_dc_dc_report_enable);
              local_60 = (byte)uVar2;
            }
          }
        }
      }
      local_11 = local_60 & 1;
    }
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

