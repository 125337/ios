// chatAssistantToolCenterFirstPageCount @ 0210bdf0

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::chatAssistantToolCenterFirstPageCount(ID param_1,SEL param_2)

{
  dword *pdVar1;
  dword *pdVar2;
  dword *local_38;
  dword *local_30;
  dword *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = (dword *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_objectForKey__0269e048,&cf_chatAssistantToolCenterFirstPageCount);
  _objc_retainAutoreleasedReturnValue();
  local_30 = (dword *)param_1;
  if ((dword *)param_1 == (dword *)0x0) {
    pdVar2 = (dword *)PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,5);
    _objc_retainAutoreleasedReturnValue();
    pdVar1 = local_30;
    local_30 = pdVar2;
    (*(code *)PTR__objc_release_02578630)(pdVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setObject_forKey__026ca9e8,local_30,
               &cf_chatAssistantToolCenterFirstPageCount);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  local_38 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
  if ((long)local_38 < 1) {
    local_38 = (dword *)((long)&MACH_HEADER.magic + 1);
  }
  if (0x14 < (long)local_38) {
    local_38 = &MACH_HEADER.sizeofcmds;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return (long_long)local_38;
}

