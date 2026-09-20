// FUN_00fba4e0 @ 00fba4e0

void FUN_00fba4e0(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_98;
  cfstringStruct *local_80;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  bool local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_80 = &cf___;
  }
  else {
    local_80 = local_20;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_80;
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
  if (local_80 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_2c = 1;
  }
  else {
    pcVar2 = local_28;
    puVar1 = PTR_s_rangeOfString_options__0269d118;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_rangeOfString_options__0269d118,&cf_<appmsg,1);
    local_51 = false;
    local_40 = pcVar2;
    local_38 = puVar1;
    if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
      local_98 = local_28;
    }
    else {
      local_98 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_substringFromIndex__0269d120,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_98;
    }
    local_51 = pcVar2 != (cfstringStruct *)0x7fffffffffffffff;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_98;
    if ((local_51 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    pcVar2 = local_48;
    puVar1 = PTR_s_rangeOfString_options__0269d118;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_rangeOfString_options__0269d118,&cf_<refermsg,1);
    local_68 = pcVar2;
    local_60 = puVar1;
    if (pcVar2 != (cfstringStruct *)0x7fffffffffffffff) {
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_substringToIndex__0269d6c0,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_48;
      local_48 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    pcVar2 = local_48;
    FUN_00fcb09c(local_48,&cf_title);
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
    if ((pcVar2 == (cfstringStruct *)0x0) ||
       (pcVar3 = local_70,
       (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_hasPrefix__0269d320,&cf_<),
       pcVar2 = local_70, ((ulong)pcVar3 & 1) != 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    local_2c = 1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

