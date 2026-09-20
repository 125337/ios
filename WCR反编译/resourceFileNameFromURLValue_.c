// resourceFileNameFromURLValue: @ 00fe01a8

/* Function Stack Size: 0x18 bytes */

ID WCRefineIconNameCaptureSupport::resourceFileNameFromURLValue_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_100;
  undefined *local_e8;
  undefined *local_d0;
  undefined *local_b8;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined4 local_54;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  
  local_40 = (undefined *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  puVar2 = local_40;
  local_48 = (undefined *)0x0;
  local_50 = (undefined *)0x0;
  puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  puVar1 = local_40;
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    puVar2 = local_40;
    if (((ulong)puVar1 & 1) == 0) {
      local_28 = (undefined *)0x0;
      local_54 = 1;
      goto LAB_00fe0810;
    }
    puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_50;
    local_50 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      local_28 = (undefined *)0x0;
      local_54 = 1;
      goto LAB_00fe0810;
    }
    puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_50);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_48;
    local_48 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_scheme_026a1dd8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (puVar1 == (undefined *)0x0) {
      puVar2 = local_50;
      puVar1 = PTR_s_rangeOfString__0269d838;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_rangeOfString__0269d838,&cf__);
      local_68 = puVar2;
      local_60 = puVar1;
      if (puVar2 != (undefined *)0x7fffffffffffffff) {
        puVar1 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_substringToIndex__0269d6c0,puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_50;
        local_50 = puVar1;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      puVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringByRemovingPercentEncoding_0269d840);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        local_b8 = local_70;
      }
      _objc_storeStrong(&local_70,local_b8);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      if (puVar2 == (undefined *)0x0) {
        local_28 = (undefined *)0x0;
      }
      else {
        puVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_pathExtension_0269e090);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (puVar1 == (undefined *)0x0) {
          puVar1 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_stringByAppendingPathExtension__026a4580,&cf_png);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_70;
          local_70 = puVar1;
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        puVar2 = local_70;
        FUN_00fddfb0();
        if (((ulong)puVar2 & 1) == 0) {
          local_d0 = (undefined *)0x0;
        }
        else {
          local_d0 = local_70;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = local_d0;
      }
      local_54 = 1;
      _objc_storeStrong(&local_70,0);
      goto LAB_00fe0810;
    }
  }
  else {
    _objc_storeStrong(&local_48,local_40);
  }
  puVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_lastPathComponent_026ca780);
  _objc_retainAutoreleasedReturnValue();
  local_78 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringByRemovingPercentEncoding_0269d840);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_e8 = local_78;
  }
  _objc_storeStrong(&local_78,local_e8);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
  if (((puVar2 == (undefined *)0x0) ||
      (puVar2 = local_78,
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isEqualToString__0269ccc8,&cf__),
      ((ulong)puVar2 & 1) != 0)) ||
     (puVar2 = local_78,
     (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isEqualToString__0269ccc8,&::cf__),
     ((ulong)puVar2 & 1) != 0)) {
    local_28 = (undefined *)0x0;
  }
  else {
    puVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (puVar1 == (undefined *)0x0) {
      puVar1 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_stringByAppendingPathExtension__026a4580,&cf_png);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_78;
      local_78 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = local_78;
    FUN_00fddfb0();
    if (((ulong)puVar2 & 1) == 0) {
      local_100 = (undefined *)0x0;
    }
    else {
      local_100 = local_78;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_100;
  }
  local_54 = 1;
  _objc_storeStrong(&local_78,0);
LAB_00fe0810:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

