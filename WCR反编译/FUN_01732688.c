// FUN_01732688 @ 01732688

void FUN_01732688(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_98;
  undefined *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  bool local_39;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar2 = local_18;
  local_20 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_codes);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_28 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)pcVar2 & 1) == 0) {
    _objc_storeStrong(&local_28,&cf___);
  }
  pcVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_39 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_98 = &cf___;
  }
  else {
    local_98 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_name)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_98;
  }
  local_39 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_98;
  if ((local_39 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__N_);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_30;
    local_30 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_18;
  FUN_0172eae8();
  pcVar4 = local_28;
  local_48 = pcVar2;
  FUN_017376c0();
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_50 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar5;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_58;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
  if (((ulong)puVar3 & 1) == 0) {
    _objc_storeStrong(&local_58,*(undefined8 *)PTR____NSDictionary0___02578288);
  }
  puVar3 = local_58;
  pcVar2 = local_30;
  FUN_0172ec34(local_30,local_48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  puVar3 = local_60;
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
  if ((((ulong)puVar3 & 1) == 0) && (local_48 == (cfstringStruct *)0x0)) {
    puVar5 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_objectForKeyedSubscript__0269d098,local_30)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_60;
    local_60 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  puVar3 = local_60;
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
  if (((ulong)puVar3 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
  }
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld__ld);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar3);
  return;
}

