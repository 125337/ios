// FUN_0087d28c @ 0087d28c

void FUN_0087d28c(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct **local_108;
  cfstringStruct *local_90;
  undefined8 local_88;
  cfstringStruct *pcStack_80;
  undefined8 local_78;
  cfstringStruct *local_70;
  long local_68;
  undefined4 local_60;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_1);
  pcVar3 = local_50;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)pcVar3 & 1) == 0) ||
     (pcVar3 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
     pcVar3 == (cfstringStruct *)0x0)) {
    pcVar3 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = pcVar3;
    local_60 = 1;
  }
  else {
    local_68 = 0;
    local_78 = 0;
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf__s____d____,0,&local_78);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_68,local_78);
    local_48 = local_50;
    local_70 = pcVar3;
    if ((pcVar3 == (cfstringStruct *)0x0) || (local_68 != 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = 1;
    }
    else {
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      local_38 = 0;
      local_30 = 0;
      local_88 = 0;
      pcVar2 = local_70;
      pcStack_80 = pcVar3;
      local_40 = pcVar3;
      local_28 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_stringByReplacingMatchesInString_0269ef30,local_50,0,0,pcVar3,&cf___
                );
      _objc_retainAutoreleasedReturnValue();
      local_90 = pcVar2;
      if ((pcVar2 == (cfstringStruct *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0),
         pcVar2 != (cfstringStruct *)0x0)) {
        if (local_90 == (cfstringStruct *)0x0) {
          local_108 = &local_50;
        }
        else {
          local_108 = &local_90;
        }
        pcVar3 = *local_108;
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = pcVar3;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = &cf___;
      }
      local_60 = 1;
      _objc_storeStrong(&local_90,0);
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}

