// themeBoxConsecutiveErrorCount @ 0211787c

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::themeBoxConsecutiveErrorCount(ID param_1,SEL param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = (undefined1 *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_objectForKey__0269e048,&cf_themeBoxConsecutiveErrorCount);
  _objc_retainAutoreleasedReturnValue();
  local_30 = (undefined1 *)param_1;
  if ((undefined1 *)param_1 == (undefined1 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_30;
    local_30 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setObject_forKey__026ca9e8,local_30,&cf_themeBoxConsecutiveErrorCount)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  local_38 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
  if ((long)local_38 < 1) {
    local_38 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
  }
  if (10 < (long)local_38) {
    local_38 = (undefined1 *)((long)&MACH_HEADER.cpusubtype + 2);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return (long_long)local_38;
}

