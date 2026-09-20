// FUN_0005d4c8 @ 0005d4c8

byte FUN_0005d4c8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_98;
  ulong local_90;
  undefined *puStack_88;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  undefined *puStack_60;
  ulong local_58;
  undefined4 local_50;
  ulong local_40;
  byte local_31;
  ulong local_30;
  undefined *local_28;
  
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  uVar2 = local_40;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_40;
  if ((uVar2 & 1) == 0) {
    local_31 = 0;
    local_50 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar2 = local_58;
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_s_rangeOfCharacterFromSet__0269db68;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_68 = uVar2;
    puStack_60 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_68 == 0x7fffffffffffffff) {
      local_31 = 0;
      local_50 = 1;
    }
    else {
      uVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_substringToIndex__0269d6c0,local_68);
      _objc_retainAutoreleasedReturnValue();
      local_70 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_caseInsensitiveCompare__0269db48,&cf__wcrsn)
      ;
      if (uVar2 == 0) {
        puStack_88 = puStack_60;
        local_90 = local_68;
        local_30 = local_68;
        local_28 = puStack_60;
        uVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_substringFromIndex__0269d120,puStack_60 + local_68);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_78 = uVar3;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_release_02578630)(uVar2);
        puVar1 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        local_98 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isWCRefinePluginHubEntryHidden_0269db70);
        if (((ulong)puVar1 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_cN6e_eQS_>f_y);
        }
        else {
          uVar2 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
          if (uVar2 == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQ_x);
          }
          else {
            uVar2 = local_78;
            _WCRefineTryUnlockPluginHubEntryWithPassword();
            if ((uVar2 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__x);
            }
          }
        }
        local_31 = 1;
        local_50 = 1;
        _objc_storeStrong(&local_98);
        _objc_storeStrong(&local_78,0);
      }
      else {
        local_31 = 0;
        local_50 = 1;
      }
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40,0);
  return local_31 & 1;
}

