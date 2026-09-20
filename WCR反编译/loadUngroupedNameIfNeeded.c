// loadUngroupedNameIfNeeded @ 0107ef3c

/* Function Stack Size: 0x10 bytes */

void WCRefineLocalEmoticonStore::loadUngroupedNameIfNeeded(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  if ((DAT_028e3278 & 1) == 0) {
    DAT_028e3278 = 1;
    local_20 = param_2;
    local_18 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_indexPath_026ae250);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_dictionaryWithContentsOfFile__026a3348);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar1;
    (*(code *)PTR__objc_release_02578630)(param_1);
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_ungroupedName);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_30 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((((ulong)puVar1 & 1) != 0) &&
        (puVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
        puVar1 != (undefined *)0x0)) &&
       (puVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf__gR_),
       ((ulong)puVar1 & 1) == 0)) {
      puVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
      puVar1 = DAT_028e3280;
      DAT_028e3280 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_allName);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((((ulong)puVar1 & 1) != 0) &&
        (puVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
        puVar1 != (undefined *)0x0)) &&
       (puVar1 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_hQ),
       ((ulong)puVar1 & 1) == 0)) {
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
      puVar1 = DAT_028e3288;
      DAT_028e3288 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

