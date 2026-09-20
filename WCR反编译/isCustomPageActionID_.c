// isCustomPageActionID: @ 01cc45f0

/* Function Stack Size: 0x18 bytes */

bool WCRefineProfileCardActionCatalog::isCustomPageActionID_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  uint local_2c;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  local_2c = 0;
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    pcVar2 = &cf_custom_page_;
    (*(code *)PTR__objc_msgSend_02578628)(&cf_custom_page_,PTR_s_length_0269cca0);
    local_2c = 0;
    if (pcVar2 < pcVar3) {
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf_custom_page_);
      local_2c = (uint)pcVar2;
    }
  }
  _objc_storeStrong(&local_28,0);
  return local_2c & 1;
}

