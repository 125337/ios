// wcr_durationCacheKeyForPath:attrs: @ 015af574

/* Function Stack Size: 0x20 bytes */

ID WCRefineVoicePackStore::wcr_durationCacheKeyForPath_attrs_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  uVar3 = local_38;
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_18 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if ((uVar3 & 1) != 0) {
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_fileModificationDate_026b0c18);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_fileSize_026a1640);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_stringWithFormat__0269cca8,&cf______0f__llu);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      goto LAB_015af6f8;
    }
  }
  local_18 = (undefined *)0x0;
LAB_015af6f8:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

