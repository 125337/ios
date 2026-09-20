// emoticonLocalRepositoryItemsPerRow @ 02195150

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::emoticonLocalRepositoryItemsPerRow(ID param_1,SEL param_2)

{
  SEL SVar1;
  dword *pdVar2;
  dword *pdVar3;
  dword *local_38;
  dword *local_30;
  SEL local_28;
  ID local_20;
  dword *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_28;
  local_30 = (dword *)param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_38 = (dword *)param_1;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  if (local_38 == (dword *)0x0) {
    pdVar2 = (dword *)PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,5);
    _objc_retainAutoreleasedReturnValue();
    pdVar3 = local_38;
    local_38 = pdVar2;
    (*(code *)PTR__objc_release_02578630)(pdVar3);
    pdVar2 = local_30;
    pdVar3 = local_38;
    SVar1 = local_28;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pdVar2,PTR_s_setObject_forKey__026ca9e8,pdVar3);
    (*(code *)PTR__objc_release_02578630)(SVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  pdVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_integerValue_026ca750);
  if (pdVar3 == (dword *)0x0) {
    local_18 = (dword *)((long)&MACH_HEADER.cputype + 1);
  }
  else if ((long)pdVar3 < 4) {
    local_18 = &MACH_HEADER.cputype;
  }
  else {
    local_18 = pdVar3;
    if (7 < (long)pdVar3) {
      local_18 = (dword *)((long)&MACH_HEADER.cputype + 3);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return (long_long)local_18;
}

