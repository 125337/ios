// loadOAImageDataWithUrl:base64: @ 00f4c5fc

/* Function Stack Size: 0x20 bytes */

ID WCRefineEmoticonToolsHelper::loadOAImageDataWithUrl_base64_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  char *local_130;
  char *local_108;
  ulong local_f0;
  ulong local_d8;
  char *local_c0;
  undefined *local_b8;
  char *local_b0;
  undefined *local_a8;
  char *local_a0;
  char *local_98;
  undefined *local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar2 = local_38;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_d8 = 0;
  }
  else {
    local_d8 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_40;
  local_48 = local_d8;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_f0 = 0;
  }
  else {
    local_f0 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_f0;
  local_58 = (char *)0x0;
  uVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (uVar2 != 0) {
    local_60 = (char *)0x0;
    local_108 = "NSURL";
    _objc_getClass(uVar2);
    if (local_108 == (char *)0x0) {
      local_108 = PTR__OBJC_CLASS___NSURL_026ce328;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_class_0269cd60);
    }
    local_68 = local_108;
    local_70 = PTR_s_safeUrlWithString__026ac468;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_108,PTR_s_respondsToSelector__026ca818,PTR_s_safeUrlWithString__026ac468);
    if (((ulong)local_108 & 1) != 0) {
      pcVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,local_70,local_48);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_60;
      local_60 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    if (local_60 == (char *)0x0) {
      pcVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_48);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_60;
      local_60 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    if (local_60 != (char *)0x0) {
      local_78 = 0;
      local_80 = 0;
      pcVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfURL_options_er_026ac470,
                 local_60,2,&local_80);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_78,local_80);
      pcVar4 = local_58;
      local_58 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      if (pcVar4 == (char *)0x0) {
        _NSLog(&cf__wcr__emoticon_oadownloadfailurl___err___);
      }
      _objc_storeStrong(&local_78,0);
    }
    pcVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if (pcVar4 != (char *)0x0) {
      pcVar3 = "WAUtility";
      _objc_getClass(pcVar4);
      local_90 = PTR_s_formatImageData__026ac478;
      local_88 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_formatImageData__026ac478);
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar4 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,local_90,local_58);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
        local_98 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
        if ((((ulong)pcVar4 & 1) != 0) &&
           (pcVar4 = local_98, (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0)
           , pcVar4 != (char *)0x0)) {
          _objc_storeStrong(pcVar4,&local_58,local_98);
        }
        _objc_storeStrong(&local_98,0);
      }
    }
    _objc_storeStrong(&local_60,0);
  }
  pcVar4 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if ((pcVar4 == (char *)0x0) &&
     (uVar2 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
     uVar2 != 0)) {
    pcVar4 = "CUtility";
    _objc_getClass(uVar2);
    local_a8 = PTR_s_DecodeStringAsDataWithBase64__026ac480;
    local_a0 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_respondsToSelector__026ca818,
               PTR_s_DecodeStringAsDataWithBase64__026ac480);
    if (((ulong)pcVar4 & 1) != 0) {
      pcVar3 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,local_a8,local_50);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_58;
      local_58 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    pcVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if (pcVar4 == (char *)0x0) {
      pcVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      pcVar4 = local_58;
      local_58 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    pcVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if (pcVar4 != (char *)0x0) {
      pcVar3 = "WAUtility";
      _objc_getClass(pcVar4);
      local_b8 = PTR_s_formatImageData__026ac478;
      local_b0 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_formatImageData__026ac478);
      if (((ulong)pcVar3 & 1) != 0) {
        pcVar4 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,local_b8,local_58);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
        local_c0 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
        if ((((ulong)pcVar4 & 1) != 0) &&
           (pcVar4 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0)
           , pcVar4 != (char *)0x0)) {
          _objc_storeStrong(pcVar4,&local_58,local_c0);
        }
        _objc_storeStrong(&local_c0,0);
      }
    }
  }
  pcVar4 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if (pcVar4 == (char *)0x0) {
    local_130 = (char *)0x0;
  }
  else {
    local_130 = local_58;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_130;
}

