// momentsAutoEngageRefreshInterval @ 0205f818

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::momentsAutoEngageRefreshInterval(ID param_1,SEL param_2)

{
  dword *pdVar1;
  SEL SVar2;
  dword *pdVar3;
  dword *local_a0;
  dword *local_98;
  dword *local_30;
  dword *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar2 = local_20;
  local_28 = (dword *)param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_30 = (dword *)param_1;
  (*(code *)PTR__objc_release_02578630)(SVar2);
  if (local_30 == (dword *)0x0) {
    pdVar3 = (dword *)PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0xb4);
    _objc_retainAutoreleasedReturnValue();
    pdVar1 = local_30;
    local_30 = pdVar3;
    (*(code *)PTR__objc_release_02578630)(pdVar1);
    pdVar3 = local_28;
    pdVar1 = local_30;
    SVar2 = local_20;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pdVar3,PTR_s_setObject_forKey__026ca9e8,pdVar1);
    (*(code *)PTR__objc_release_02578630)(SVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  local_98 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
  if (0xe10 < (long)local_98) {
    local_98 = &section_00000dc8.reserved2;
  }
  if ((long)local_98 < 0x3d) {
    local_a0 = (dword *)((long)&segment_command_00000020.vmaddr + 4);
  }
  else {
    local_a0 = local_98;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return (long_long)local_a0;
}

