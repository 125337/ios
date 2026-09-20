// commitPlainTextRepositoryItem: @ 01bae8b0

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineMessageRepositoryViewController::commitPlainTextRepositoryItem_
          (WCRefineMessageRepositoryViewController *this,ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  double in_d0;
  cfstringStruct *local_b0;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *local_60;
  undefined *local_58;
  long local_50;
  uint local_44;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar2 = local_38;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_b0 = &::cf___;
  }
  else {
    local_b0 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
  if (local_b0 != (cfstringStruct *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_50 = (long)(in_d0 * 1000.0);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____lld);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    local_58 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_setObject_forKeyedSubscript__0269d248,local_58,&cf_id);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_text,&cf_type);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,&::cf___,&cf_remark);
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_valid);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,&::cf___,&cf_sessionUserName);
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithLongLong__0269d808,local_50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_addedAt);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf_msgType);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,local_40,&cf_content);
    _objc_initWeak(auStack_68,local_28);
    puVar3 = local_60;
    puVar1 = PTR_WCRefineMessageRepositoryStore_026ce120;
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_01baed70;
    local_78 = &DAT_0258b540;
    _objc_copyWeak(auStack_70,auStack_68);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_addItem_completion__026ae5b0,puVar3,&local_90);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  local_44 = (uint)(local_b0 == (cfstringStruct *)0x0);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

