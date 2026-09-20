// setEnabled:actionId: @ 01e12acc

/* Function Stack Size: 0x1c bytes */

void WCRefineSuperFloatButtonConfigViewController::setEnabled_actionId_
               (ID param_1,SEL param_2,bool param_3,ID param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_78;
  undefined *local_60;
  long local_58;
  byte local_49;
  undefined *local_48;
  undefined *local_40;
  int local_34;
  undefined *local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_30 = (undefined *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  puVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    local_34 = 1;
  }
  else {
    _WCRSuperFloatRefreshActions();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_49 = 0;
    local_78 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_78 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_78;
    }
    local_49 = puVar3 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_78;
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    for (local_58 = 0; lVar1 = local_58, puVar2 = local_40,
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0), lVar1 < (long)puVar2;
        local_58 = local_58 + 1) {
      puVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_58);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_60 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_objectForKeyedSubscript__0269d098,_WCRSuperFloatActionKey);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      FUN_01e0d320();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (((ulong)puVar4 & 1) == 0) {
        local_34 = 0;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_21 & 1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,
                   _WCRSuperFloatEnabledKey);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_setObject_atIndexedSubscript__0269e970,local_60,local_58);
        local_34 = 2;
      }
      _objc_storeStrong(&local_60,0);
      if (local_34 != 0) break;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setProfileActions__026b1a08,local_40);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
    _objc_storeStrong(&local_40,0);
    local_34 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

