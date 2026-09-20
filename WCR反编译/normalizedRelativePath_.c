// normalizedRelativePath: @ 010d6f58

/* Function Stack Size: 0x18 bytes */

ID WCRefineNameplateHelper::normalizedRelativePath_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_98;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  bool local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (pcVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     pcVar2 = local_30, pcVar3 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &::cf___;
    local_34 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &::cf___;
      local_34 = 1;
    }
    else {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf__);
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&::cf_W);
        if (((ulong)pcVar2 & 1) == 0) {
          pcVar3 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&::cf_W);
          pcVar2 = local_40;
          local_18 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          if (((ulong)pcVar3 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_lastPathComponent_026ca780);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_18,PTR_s_stringWithFormat__0269cca8,&cf______);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            local_34 = 1;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = pcVar2;
            local_34 = 1;
          }
        }
        else {
          pcVar2 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          local_48 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
          local_51 = false;
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_98 = &::cf___;
          }
          else {
            local_98 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                       &cf______);
            _objc_retainAutoreleasedReturnValue();
            local_50 = local_98;
          }
          local_51 = pcVar2 != (cfstringStruct *)0x0;
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = local_98;
          if ((local_51 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_50);
          }
          local_34 = 1;
          _objc_storeStrong(&local_48,0);
        }
      }
      else {
        FUN_010d6dfc();
        _objc_retainAutoreleasedReturnValue();
        local_60 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
        if ((pcVar2 == (cfstringStruct *)0x0) ||
           (pcVar3 = local_40,
           (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,local_60),
           pcVar2 = local_40, ((ulong)pcVar3 & 1) == 0)) {
          pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          pcVar3 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringWithFormat__0269cca8,&cf______);
          _objc_retainAutoreleasedReturnValue();
          local_18 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          local_34 = 1;
        }
        else {
          pcVar3 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_substringFromIndex__0269d120,pcVar3);
          _objc_retainAutoreleasedReturnValue();
          local_68 = pcVar2;
          while (pcVar2 = local_68,
                (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_hasPrefix__0269d320,&cf__),
                ((ulong)pcVar2 & 1) != 0) {
            pcVar3 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_substringFromIndex__0269d120,1);
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = local_68;
            local_68 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
          pcVar2 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_normalizedRelativePath__026ae7b8,local_68);
          _objc_retainAutoreleasedReturnValue();
          local_34 = 1;
          local_18 = pcVar2;
          _objc_storeStrong(&local_68,0);
        }
        _objc_storeStrong(&local_60,0);
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

