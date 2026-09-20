// FUN_003d4f28 @ 003d4f28

void FUN_003d4f28(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_80;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined8 local_40;
  long *local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  undefined8 local_20;
  cfstringStruct *local_18;
  
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_1);
  pcVar2 = local_50;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (pcVar2 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
     pcVar2 == (cfstringStruct *)0x0)) {
    if (local_50 == (cfstringStruct *)0x0) {
      local_80 = &cf___;
    }
    else {
      local_80 = local_50;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_80;
  }
  else {
    local_38 = &DAT_028ca318;
    local_40 = 0;
    _objc_storeStrong(&local_40,&PTR___NSConcreteGlobalBlock_0257cd98);
    if (*local_38 + 1 != 0) {
      _dispatch_once(*local_38 + 1,local_38,local_40);
    }
    _objc_storeStrong(&local_40,0);
    pcVar2 = local_50;
    local_48 = DAT_028ca310;
    if (DAT_028ca310 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = pcVar2;
    }
    else {
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      local_28 = 0;
      local_20 = 0;
      local_30 = pcVar3;
      local_18 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_stringByReplacingMatchesInString_0269ef30,pcVar2,0,0,pcVar3,&cf___);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}

