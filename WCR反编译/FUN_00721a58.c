// FUN_00721a58 @ 00721a58

void FUN_00721a58(undefined8 param_1,byte param_2)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  cfstringStruct *local_d0;
  char *local_88;
  char *local_80;
  char *local_78;
  char *local_70;
  char *local_68;
  long local_60;
  char *local_58;
  cfstringStruct *local_50;
  uint local_48;
  byte local_31;
  cfstringStruct *local_30;
  char *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
  local_31 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    local_28 = (char *)0x0;
    local_48 = 1;
    goto LAB_00722170;
  }
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_absoluteString_026a1de0);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_d0 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_d0;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_28 = (char *)0x0;
    local_48 = 1;
  }
  else {
    pcVar4 = "MMScreenShotService";
    _objc_getClass();
    FUN_00722634();
    _objc_retainAutoreleasedReturnValue();
    local_60 = 0;
    local_58 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_getScreenShotForUrl__026a7828);
    if (((ulong)pcVar4 & 1) != 0) {
      pcVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_getScreenShotForUrl__026a7828,local_30);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      local_68 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)pcVar4 & 1) != 0) {
        _objc_storeStrong(&local_60,local_68);
      }
      _objc_storeStrong(&local_68,0);
    }
    pcVar4 = "MMAssetForFakeFastSend";
    _objc_getClass();
    local_70 = pcVar4;
    if (((local_60 == 0) || (pcVar4 == (char *)0x0)) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_instancesRespondToSelector__0269da90,
                   PTR_s_initWithUrl_withImg_IsNeedOrigin_026a7830), ((ulong)pcVar4 & 1) == 0)) {
LAB_00721e64:
      pcVar4 = "MMAssetForAllVersion";
      _objc_getClass();
      local_88 = (char *)0x0;
      local_80 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_AssetWithUrl__026a7838);
      if (((ulong)pcVar4 & 1) != 0) {
        pcVar5 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_AssetWithUrl__026a7838,local_50);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_88;
        local_88 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
      if (local_88 == (char *)0x0) {
        pcVar4 = "MMAssetForPHAssetFramework";
        _objc_getClass();
        pcVar5 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_instancesRespondToSelector__0269da90,
                   PTR_s_initWithUrl_IsNeedOrigin__026a7840);
        if (((ulong)pcVar5 & 1) != 0) {
          _objc_alloc();
          pcVar6 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_initWithUrl_IsNeedOrigin__026a7840,local_50,local_31 & 1);
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = local_88;
          local_88 = pcVar6;
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          (*(code *)PTR__objc_release_02578630)(pcVar4);
        }
      }
      pcVar4 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_respondsToSelector__026ca818,PTR_s_setM_isNeedOriginImage__026a7848)
      ;
      if (((ulong)pcVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_setM_isNeedOriginImage__026a7848,local_31 & 1);
      }
      pcVar4 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_respondsToSelector__026ca818,PTR_s_setIsNeedOrigin__026a7850);
      if (((ulong)pcVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setIsNeedOrigin__026a7850,local_31 & 1)
        ;
      }
      pcVar4 = local_88;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar4;
      local_48 = 1;
      _objc_storeStrong(&local_88,0);
    }
    else {
      pcVar4 = local_70;
      _objc_alloc();
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_initWithUrl_withImg_IsNeedOrigin_026a7830,local_50,local_60,
                 local_31 & 1);
      _objc_retainAutoreleasedReturnValue();
      local_78 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = local_78;
      bVar1 = local_78 != (char *)0x0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar4;
      }
      local_48 = (uint)bVar1;
      _objc_storeStrong(&local_78,0);
      if (local_48 == 0) goto LAB_00721e64;
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_50,0);
LAB_00722170:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

