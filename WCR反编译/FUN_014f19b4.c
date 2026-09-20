// FUN_014f19b4 @ 014f19b4

void FUN_014f19b4(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_80;
  uint local_74;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  bool local_39;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  byte local_25;
  undefined4 local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((((ulong)pcVar3 & 1) == 0) ||
     (pcVar3 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     pcVar3 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_24 = 1;
  }
  else {
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf__lt_);
    local_74 = 1;
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf__gt_);
      local_74 = (uint)pcVar3;
    }
    local_25 = (byte)local_74 & 1;
    local_39 = false;
    bVar1 = (local_74 & 1) == 0;
    if (bVar1) {
      local_80 = local_20;
    }
    else {
      local_80 = local_20;
      FUN_014fda68();
      _objc_retainAutoreleasedReturnValue();
      local_38 = local_80;
    }
    local_39 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = local_80;
    if ((local_39 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    pcVar3 = local_20;
    FUN_01502298();
    if ((((ulong)pcVar3 & 1) == 0) && (pcVar3 = local_30, FUN_01502298(), ((ulong)pcVar3 & 1) == 0))
    {
      pcVar3 = local_30;
      FUN_014fda68();
      _objc_retainAutoreleasedReturnValue();
      local_24 = 1;
      local_18 = pcVar3;
    }
    else {
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableString_026cdfb0;
      local_48 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_48;
      local_50 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_<refermsg);
      if ((((ulong)pcVar3 & 1) != 0) ||
         ((pcVar3 = local_48,
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_<appmsg)
          , ((ulong)pcVar3 & 1) != 0 ||
          (pcVar3 = local_48,
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_<title>)
          , ((ulong)pcVar3 & 1) != 0)))) {
        pcVar3 = local_30;
        FUN_01500174(local_30,&cf_title);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        FUN_01502668();
        _objc_retainAutoreleasedReturnValue();
        local_58 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
        if (pcVar3 != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_appendString__0269ccb0,local_58);
        }
        pcVar3 = local_30;
        FUN_01500174(local_30,&cf_refermsg);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar3;
        FUN_01500174();
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar4;
        FUN_01502668();
        _objc_retainAutoreleasedReturnValue();
        local_60 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
        if (pcVar3 != (cfstringStruct *)0x0) {
          pcVar3 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
          if (pcVar3 != (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_appendString__0269ccb0,&cf_space_s_);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_appendString__0269ccb0,local_60);
        }
        _objc_storeStrong(&local_60);
        _objc_storeStrong(&local_58,0);
      }
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_copy_0269d150);
      local_24 = 1;
      local_18 = pcVar3;
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

