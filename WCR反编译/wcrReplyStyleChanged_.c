// wcrReplyStyleChanged: @ 017cfd3c

/* Function Stack Size: 0x18 bytes */

void WCRefineAISessionSettingsViewController::wcrReplyStyleChanged_
               (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  long local_70;
  long local_68;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_68 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
  IVar1 = local_18;
  if (2 < local_68) {
    local_68 = 2;
  }
  if (local_68 < 1) {
    local_70 = 0;
  }
  else {
    local_70 = local_68;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_70);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_wcrSet_key__026b5108,puVar2,_WCRAISessionReplyStyle);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar1 = local_18;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,local_70 != 2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar1,PTR_s_wcrSet_key__026b5108,puVar2,_WCRAISessionQuoteReplyEnabled);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_28,0);
  return;
}

