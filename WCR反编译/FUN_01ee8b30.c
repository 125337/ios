// FUN_01ee8b30 @ 01ee8b30

void FUN_01ee8b30(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_98;
  cfstringStruct *local_80;
  cfstringStruct *local_60;
  bool local_49;
  cfstringStruct *local_48;
  bool local_39;
  cfstringStruct *local_38;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_60 = &cf___;
  }
  else {
    local_60 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    local_28 = local_60;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_60;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar4 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  pcVar2 = local_20;
  if (pcVar4 != (cfstringStruct *)0x0) {
    pcVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_html)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_39 = ((ulong)pcVar5 & 1) == 0;
    if (local_39) {
      local_80 = &cf___;
    }
    else {
      local_80 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_html);
      _objc_retainAutoreleasedReturnValue();
      local_38 = local_80;
    }
    local_39 = !local_39;
    FUN_01eec144(pcVar2,local_80,0);
    if (local_39) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar2 = local_20;
    pcVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_storage);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_49 = ((ulong)pcVar5 & 1) == 0;
    if (local_49) {
      local_98 = *(cfstringStruct **)PTR____NSDictionary0___02578288;
    }
    else {
      local_98 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_storage);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_98;
    }
    local_49 = !local_49;
    FUN_01f016dc(pcVar2,local_98);
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (local_49) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar4);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

