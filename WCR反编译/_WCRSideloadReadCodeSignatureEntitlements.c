// _WCRSideloadReadCodeSignatureEntitlements @ 0150580c

void _WCRSideloadReadCodeSignatureEntitlements(undefined *param_1)

{
  code *pcVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long local_60;
  ulong local_58;
  undefined *local_50;
  long local_48;
  code *local_40;
  code *local_38;
  undefined4 local_2c;
  undefined *local_28;
  undefined *local_20;
  long local_18;
  
  _WCRSideloadReadExecutableEntitlements();
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  puVar3 = local_28;
  if (param_1 == (undefined *)0x0) {
    pcVar1 = (code *)0xfffffffffffffffe;
    _dlsym(0,0xfffffffffffffffe,"SecTaskCreateFromSelf");
    pcVar2 = (code *)0xfffffffffffffffe;
    local_38 = pcVar1;
    _dlsym(0xfffffffffffffffe,"SecTaskCopyValueForEntitlement");
    local_40 = pcVar2;
    if ((local_38 == (code *)0x0) || (pcVar2 == (code *)0x0)) {
      puVar3 = *(undefined **)PTR____NSDictionary0___02578288;
      (*(code *)PTR__objc_retain_02578638)();
      local_2c = 1;
      local_20 = puVar3;
    }
    else {
      lVar4 = 0;
      (*local_38)();
      local_48 = lVar4;
      if (lVar4 == 0) {
        puVar3 = *(undefined **)PTR____NSDictionary0___02578288;
        (*(code *)PTR__objc_retain_02578638)();
        local_2c = 1;
        local_20 = puVar3;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        local_50 = puVar3;
        for (local_58 = 0; local_58 < 9; local_58 = local_58 + 1) {
          local_60 = 0;
          lVar4 = local_48;
          (*local_40)(local_48,*(undefined8 *)(&DAT_02586418 + local_58 * 8),&local_60);
          if (local_60 != 0) {
            _CFRelease(local_60);
          }
          if (lVar4 != 0) {
            local_18 = lVar4;
            _objc_autoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,lVar4,
                       *(undefined8 *)(&DAT_02586418 + local_58 * 8));
            (*(code *)PTR__objc_release_02578630)(lVar4);
          }
        }
        _CFRelease(local_58 - 9,local_48);
        puVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_copy_0269d150);
        local_2c = 1;
        local_20 = puVar3;
        _objc_storeStrong(&local_50,0);
      }
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_20 = puVar3;
    local_2c = 1;
  }
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_20);
  return;
}

