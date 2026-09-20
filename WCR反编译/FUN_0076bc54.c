// FUN_0076bc54 @ 0076bc54

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0076bc54(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  
  puVar2 = DAT_028cc8b0;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = DAT_028cc8b0;
    DAT_028cc8b0 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  uVar3 = DAT_028cc8b8;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) || (DAT_028cc8f8 <= 0.0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028cc8b0,PTR_s_removeObjectForKey__0269d700,&cf_pluginSponsorFlowID);
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028cc8b0,PTR_s_removeObjectForKey__0269d700,&cf_pluginSponsorFlowStartTime);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028cc8b0,PTR_s_setObject_forKeyedSubscript__0269d248,DAT_028cc8b8,
               &cf_pluginSponsorFlowID);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028cc8f8,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028cc8b0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,
               &cf_pluginSponsorFlowStartTime);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  return;
}

