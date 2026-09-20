// setRepositoryCode:sendOrder:forRelativePath: @ 015b39b8

/* Function Stack Size: 0x28 bytes */

void WCRefineVoicePackStore::setRepositoryCode_sendOrder_forRelativePath_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_c0;
  undefined *local_a8;
  undefined *local_78;
  undefined *local_70;
  undefined4 local_64;
  long local_60;
  long_long local_58;
  cfstringStruct *local_50;
  SEL local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = (cfstringStruct *)0x0;
  local_48 = param_2;
  local_40 = (undefined *)param_1;
  _objc_storeStrong(&local_50,param_3);
  local_60 = 0;
  local_58 = param_4;
  _objc_storeStrong(&local_60,param_5);
  lVar1 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_64 = 1;
  }
  else {
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_loadIndexDictionary_026b0c78);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a8 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_78 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = local_78;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_a8;
    if (puVar3 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (pcVar4 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_removeObjectForKey__0269d700,local_60);
    }
    else {
      local_38 = &cf_repositoryCode;
      if (local_50 == (cfstringStruct *)0x0) {
        local_c0 = &::cf___;
      }
      else {
        local_c0 = local_50;
      }
      local_28 = local_c0;
      local_30 = &cf_sendOrder;
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_58);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_20 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_28,&local_38,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,local_60);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_saveIndexDictionary__026b0c80,local_70);
    _objc_storeStrong(&local_70,0);
    local_64 = 0;
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

