// FUN_0041288c @ 0041288c

void FUN_0041288c(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_118;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined4 local_50;
  int local_4c;
  cfstringStruct *local_48 [3];
  undefined *local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_28;
  local_30 = puVar1;
  FUN_004055cc(local_28,&cf_sessionUserName);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_28;
  local_48[0] = pcVar2;
  FUN_0040bb14(local_28,&cf_localID);
  local_4c = (int)pcVar3;
  pcVar2 = local_28;
  FUN_0040bb14(local_28,&cf_messageType);
  local_50 = SUB84(pcVar2,0);
  pcVar2 = local_28;
  FUN_00412e78(local_28,&cf_mesSvrID);
  puVar1 = local_30;
  local_58 = pcVar2;
  if (local_4c != 0) {
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf____local__u_type__u);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  puVar1 = local_30;
  if (0 < (long)local_58) {
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____svr__lld)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
  if (puVar1 == (undefined *)0x0) {
    pcVar2 = local_28;
    FUN_0040ae9c();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_118 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_118 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_118;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_28;
    FUN_00413044(local_28,local_60);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
    if (pcVar2 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addObject__0269d180,local_68);
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
  }
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

