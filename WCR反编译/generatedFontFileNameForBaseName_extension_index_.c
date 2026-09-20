// generatedFontFileNameForBaseName:extension:index: @ 019de578

/* Function Stack Size: 0x28 bytes */

ID WCRefineFontBeautifyViewController::generatedFontFileNameForBaseName_extension_index_
             (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_90;
  undefined4 local_84;
  ID local_80;
  undefined *local_78;
  ID local_70;
  long local_68;
  undefined *local_60;
  long local_58;
  unsigned_long_long local_50;
  undefined8 local_48;
  long local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  lVar1 = local_40;
  local_50 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_stringByDeletingPathExtension_0269fd18);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = lVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    _objc_storeStrong(&local_58,&cf_font);
  }
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf______<>__);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = local_58;
  local_60 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_58,PTR_s_componentsSeparatedByCharactersI_0269d1a8,puVar2);
  _objc_retainAutoreleasedReturnValue();
  local_68 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_componentsJoinedByString__0269d140,&cf__);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_58;
  local_58 = lVar3;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  IVar4 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_safeFontExtension__026bb010,local_48);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_70 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_30;
  local_78 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_fontBasePath_026baec0);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_80 = IVar5;
  (*(code *)PTR__objc_release_02578630)(IVar4);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_78;
  if (((ulong)puVar6 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar2;
    local_84 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
    _objc_alloc_init();
    local_90 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setDateFormat__0269d1c8,&cf_yyyyMMdd_HHmmss);
    puVar6 = local_90;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar7 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_stringFromDate__0269d1d8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf________lu___);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    local_84 = 1;
    _objc_storeStrong(&local_90,0);
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

