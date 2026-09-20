// albumPathsForIconValue: @ 01109e00

/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginIconCatalog::albumPathsForIconValue_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_f8;
  cfstringStruct *local_e8;
  cfstringStruct *local_d8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b0;
  bool local_91;
  cfstringStruct *local_90;
  bool local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  SEL local_48;
  ID local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = (cfstringStruct *)0x0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  pcVar1 = local_50;
  FUN_010f4f48();
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_60 = &::cf___;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = &::cf___;
  pcVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasPrefix__0269d320,&cf_imagepair_);
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasPrefix__0269d320,&cf_image_);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasPrefix__0269d320,&cf__);
      if (((((ulong)pcVar1 & 1) != 0) ||
          (pcVar1 = local_58,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_containsString__0269d0b0,&cf__PluginIcons_),
          ((ulong)pcVar1 & 1) != 0)) ||
         (pcVar1 = local_58,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_58,PTR_s_containsString__0269d0b0,&cf__SuperFloat_icon_),
         ((ulong)pcVar1 & 1) != 0)) {
        _objc_storeStrong(&local_60,local_58);
      }
    }
    else {
      pcVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_substringFromIndex__0269d120,6);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_d8 = &::cf___;
      }
      _objc_storeStrong(&local_60,local_d8);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
  }
  else {
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_substringFromIndex__0269d120,10);
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_78 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_count_0269cfe0);
    if (pcVar1 != (cfstringStruct *)0x0) {
      pcVar1 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_objectAtIndexedSubscript__0269cc78,0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar3 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      local_81 = ((ulong)pcVar3 & 1) == 0;
      if (local_81) {
        local_b0 = &::cf___;
      }
      else {
        local_b0 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_objectAtIndexedSubscript__0269cc78,0);
        _objc_retainAutoreleasedReturnValue();
        local_80 = local_b0;
      }
      local_81 = !local_81;
      _objc_storeStrong(&local_60,local_b0);
      if (local_81) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
    if ((cfstringStruct *)0x1 < pcVar1) {
      pcVar1 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_objectAtIndexedSubscript__0269cc78,1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar3 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      local_91 = ((ulong)pcVar3 & 1) == 0;
      if (local_91) {
        local_c0 = &::cf___;
      }
      else {
        local_c0 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_objectAtIndexedSubscript__0269cc78,1);
        _objc_retainAutoreleasedReturnValue();
        local_90 = local_c0;
      }
      local_91 = !local_91;
      _objc_storeStrong(&local_68,local_c0);
      if (local_91) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
  }
  if (local_60 == (cfstringStruct *)0x0) {
    local_e8 = &::cf___;
  }
  else {
    local_e8 = local_60;
  }
  local_38 = local_e8;
  if (local_68 == (cfstringStruct *)0x0) {
    local_f8 = &::cf___;
  }
  else {
    local_f8 = local_68;
  }
  local_30 = local_f8;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

