// detailTextWithTemplate:count:totalCount: @ 01ad1834

/* Function Stack Size: 0x28 bytes */

ID WCRefineGroup::detailTextWithTemplate_count_totalCount_
             (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,
             unsigned_long_long param_5)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_78;
  undefined *local_50;
  cfstringStruct *local_48;
  unsigned_long_long local_40;
  unsigned_long_long local_38;
  cfstringStruct *local_30;
  SEL local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = (undefined *)param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_40 = param_5;
  local_38 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_78 = &::cf___;
  }
  else {
    local_78 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
  if (local_78 == (cfstringStruct *)0x0) {
    _objc_storeStrong(&local_48,&cf__N__T);
  }
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_renderTemplate_count_totalCount__026a3138,local_48,local_38,local_40,0,0
            );
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  local_18 = local_50;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__lu__lu);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

