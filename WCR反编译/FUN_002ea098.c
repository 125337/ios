// FUN_002ea098 @ 002ea098

byte FUN_002ea098(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  byte local_10c;
  cfstringStruct *local_f8;
  cfstringStruct *local_c8;
  cfstringStruct *local_98;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_40;
  cfstringStruct *local_30;
  byte local_21;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_21 = 0;
    local_40 = 1;
  }
  else {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_scheme_026a1dd8);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_98 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_98 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_98;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_host_0269dc50);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_c8 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_c8 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_c8;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_absoluteString_026a1de0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_f8 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_f8 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_f8;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasPrefix__0269d320,&cf_weapp);
    local_10c = 1;
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_containsString__0269d0b0,&cf_servicewechat_com);
      local_10c = 1;
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_containsString__0269d0b0,&cf_servicewechat_com);
        local_10c = 1;
        if (((ulong)pcVar2 & 1) == 0) {
          pcVar2 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_containsString__0269d0b0,&cf_wechat_game_runtime);
          local_10c = 1;
          if (((ulong)pcVar2 & 1) == 0) {
            pcVar2 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_58,PTR_s_containsString__0269d0b0,&cf_appbrand);
            local_10c = (byte)pcVar2;
          }
        }
      }
    }
    local_21 = local_10c & 1;
    local_40 = 1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

