// FUN_0073a30c @ 0073a30c

void FUN_0073a30c(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  char *pcVar6;
  ulong uVar7;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  undefined4 local_40;
  ulong local_30;
  char *local_28;
  
  FUN_0073a94c();
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
  if (param_1 == 0) {
    _objc_storeStrong(&DAT_028cc528);
    _objc_storeStrong(&DAT_028cc530,0);
    local_28 = (char *)0x0;
    local_40 = 1;
  }
  else {
    if (DAT_028cc528 != (char *)0x0) {
      uVar2 = DAT_028cc530;
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cc530,PTR_s_isEqualToString__0269ccc8,local_30);
      pcVar3 = DAT_028cc528;
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar3;
        local_40 = 1;
        goto LAB_0073a83c;
      }
    }
    pcVar3 = "LSBundleProxy";
    _objc_getClass();
    pcVar4 = "bundleProxyForCurrentProcess";
    local_48 = pcVar3;
    _sel_registerName();
    local_58 = (char *)0x0;
    local_50 = pcVar4;
    if (local_48 != (char *)0x0) {
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar4);
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,local_50);
        _objc_retainAutoreleasedReturnValue();
        local_60 = pcVar3;
        if (pcVar3 != (char *)0x0) {
          pcVar4 = "groupContainerURLs";
          _sel_registerName();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,pcVar4);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_68 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
          if (((ulong)pcVar3 & 1) != 0) {
            pcVar4 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_68,PTR_s_objectForKeyedSubscript__0269d098,local_30);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = local_58;
            local_58 = pcVar4;
            (*(code *)PTR__objc_release_02578630)(pcVar3);
          }
          _objc_storeStrong(&local_68,0);
        }
        _objc_storeStrong(&local_60,0);
      }
    }
    pcVar3 = local_58;
    puVar5 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
    pcVar1 = DAT_028cc550;
    if ((((ulong)pcVar3 & 1) == 0) && (DAT_028cc550 != (code *)0x0)) {
      pcVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar4;
      (*pcVar1)();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_58;
      local_58 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    pcVar3 = local_58;
    puVar5 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
    if (((ulong)pcVar3 & 1) == 0) {
      local_28 = (char *)0x0;
    }
    else {
      uVar7 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
      uVar2 = DAT_028cc530;
      DAT_028cc530 = uVar7;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      _objc_storeStrong(&DAT_028cc528,local_58);
      pcVar3 = local_58;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar3;
    }
    local_40 = 1;
    _objc_storeStrong(&local_58,0);
  }
LAB_0073a83c:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

