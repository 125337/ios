// setAllEnabled: @ 01e0e0ac

/* Function Stack Size: 0x14 bytes */

void WCRefineSuperFloatButtonConfigViewController::setAllEnabled_
               (ID param_1,SEL param_2,bool param_3)

{
  cfstringStruct *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined *local_50;
  long local_48;
  byte local_39;
  undefined *local_38;
  undefined *local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_20 = param_2;
  local_18 = param_1;
  _WCRSuperFloatRefreshActions();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_39 = 0;
  local_68 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    local_68 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_68;
  }
  local_39 = puVar3 == (undefined *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_68;
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(param_1);
  for (local_48 = 0; lVar2 = local_48, puVar3 = local_30,
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0), lVar2 < (long)puVar3;
      local_48 = local_48 + 1) {
    puVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectAtIndexedSubscript__0269cc78,local_48);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_21 & 1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,_WCRSuperFloatEnabledKey)
    ;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setObject_atIndexedSubscript__0269e970,local_50,local_48);
    _objc_storeStrong(&local_50,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setProfileActions__026b1a08,local_30);
  pcVar1 = &cf__hQmR;
  if ((local_21 & 1) == 0) {
    pcVar1 = &cf__hQRd;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
  _objc_storeStrong(&local_30,0);
  return;
}

