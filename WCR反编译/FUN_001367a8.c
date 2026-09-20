// FUN_001367a8 @ 001367a8

void FUN_001367a8(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_a0;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_nil;
  }
  else {
    local_38 = 0;
    local_40 = 0;
    local_48 = 0;
    local_50 = 0;
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_getRed_green_blue_alpha__026ca660,&local_38,&local_40,&local_48,
               &local_50);
    if (((ulong)pcVar2 & 1) == 0) {
      local_58 = 0;
      pcVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_getWhite_alpha__026ca668,&local_58,&local_50);
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_description_026ca5f8);
        _objc_retainAutoreleasedReturnValue();
        local_a0 = pcVar2;
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_a0 = &cf_color;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = local_a0;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      else {
        pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_w___3f___3f);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar2;
      }
    }
    else {
      pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf___3f___3f___3f___3f);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
    }
  }
  local_30 = 1;
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

