// toggleEnabledAtIndex: @ 01e323c8

/* Function Stack Size: 0x18 bytes */

void WCRefineSuperFloatURLSchemeViewController::toggleEnabledAtIndex_
               (ID param_1,SEL param_2,long_long param_3)

{
  cfstringStruct *pcVar1;
  long_long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  int local_9c;
  undefined *local_78;
  undefined *local_58;
  undefined *local_48;
  undefined4 local_40;
  byte local_39;
  undefined *local_38;
  undefined *local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  puVar3 = PTR_WCRSuperFloatProfileStore_026cee48;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_urlSchemes_026b1a10);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_39 = 0;
  local_78 = puVar4;
  if (puVar4 == (undefined *)0x0) {
    local_78 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_78;
  }
  local_39 = puVar4 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_78;
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  lVar2 = local_28;
  if (((long)local_28 < 0) ||
     (puVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0),
     (long)puVar3 <= (long)lVar2)) {
    local_40 = 1;
  }
  else {
    puVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,local_28);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      local_58 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_9c = (int)puVar4;
    }
    else {
      local_9c = 1;
    }
    if (puVar3 != (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,local_9c == 0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_enabled);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setObject_atIndexedSubscript__0269e970,local_48,local_28);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setURLSchemes__026c5b48,local_30);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
    pcVar1 = &cf___T_u;
    if (local_9c != 0) {
      pcVar1 = &cf__y_u;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
    _objc_storeStrong(&local_48,0);
    local_40 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return;
}

