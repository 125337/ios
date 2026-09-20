// chatRoomRecentAtDisplayCount @ 0206d840

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::chatRoomRecentAtDisplayCount(ID param_1,SEL param_2)

{
  undefined1 *puVar1;
  SEL SVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *local_50;
  undefined1 *local_38;
  undefined1 *local_30;
  SEL local_28;
  ID local_20;
  undefined1 *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar2 = local_28;
  local_30 = (undefined1 *)param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_38 = (undefined1 *)param_1;
  (*(code *)PTR__objc_release_02578630)(SVar2);
  if (local_38 == (undefined1 *)0x0) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_38;
    local_38 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar3 = local_30;
    puVar1 = local_38;
    SVar2 = local_28;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setObject_forKey__026ca9e8,puVar1);
    (*(code *)PTR__objc_release_02578630)(SVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    local_18 = (undefined1 *)((long)&MACH_HEADER.magic + 3);
  }
  else {
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_integerValue_026ca750);
    puVar1 = local_30;
    if ((long)puVar3 < 1) {
      local_50 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    }
    else {
      local_50 = puVar3;
      if (99 < (long)puVar3) {
        local_50 = (undefined1 *)((long)&segment_command_00000020.nsects + 3);
      }
    }
    if (puVar3 != local_50) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_50);
      _objc_retainAutoreleasedReturnValue();
      SVar2 = local_28;
      _cmdString();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setObject_forKey__026ca9e8,puVar4);
      (*(code *)PTR__objc_release_02578630)(SVar2);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    local_18 = local_50;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return (long_long)local_18;
}

