// avatarFrameChatListRandomMode @ 020b88ac

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::avatarFrameChatListRandomMode(ID param_1,SEL param_2)

{
  SEL SVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  uint local_5c;
  undefined *local_48;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_20;
  local_28 = (undefined *)param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_30 = (undefined *)param_1;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  if (local_30 == (undefined *)0x0) {
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_objectForKey__0269e048,&cf_avatarFrameChatListRandom);
    _objc_retainAutoreleasedReturnValue();
    local_5c = 0;
    local_38 = puVar2;
    if (puVar2 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_boolValue_026ca540);
      local_5c = (uint)puVar2;
    }
    uVar4 = 2;
    if ((local_5c & 1) == 0) {
      uVar4 = 0;
    }
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_30;
    local_30 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = local_28;
    puVar2 = local_30;
    SVar1 = local_20;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setObject_forKey__026ca9e8,puVar2);
    (*(code *)PTR__objc_release_02578630)(SVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_storeStrong(&local_38,0);
  }
  local_48 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
  if (((long)local_48 < 0) || (2 < (long)local_48)) {
    local_48 = (undefined *)0x0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return (long_long)local_48;
}

