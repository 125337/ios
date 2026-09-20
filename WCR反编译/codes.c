// codes @ 0171f234

/* Function Stack Size: 0x10 bytes */

ID ThemeBoxAirDropConsumedCodesDetailViewController::codes(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *local_78;
  cfstringStruct *local_68;
  undefined *local_48;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_48 = *(undefined **)PTR____NSDictionary0___02578288;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_48;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_28;
  pcVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_themeName_026b3a68);
  _objc_retainAutoreleasedReturnValue();
  local_68 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_68 = &::cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_objectForKeyedSubscript__0269d098,local_68);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  puVar1 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar1 & 1) == 0) {
    local_78 = *(undefined **)PTR____NSArray0___02578280;
  }
  else {
    local_78 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_78;
}

