// configDictionary @ 01fcbc74

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::configDictionary(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *local_100;
  undefined *local_c8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined8 *local_90;
  ID local_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  code *local_60;
  undefined8 local_58;
  undefined4 local_4c;
  undefined *local_48;
  ID local_40;
  SEL local_38;
  ID local_30;
  undefined *local_28;
  
  local_38 = param_2;
  local_30 = param_1;
  FUN_01fcbee4();
  _objc_retainAutoreleasedReturnValue();
  local_40 = param_1;
  if (param_1 == 0) {
    FUN_01fcb534();
    local_90 = &local_80;
    local_80 = 0;
    local_70 = 0x32000000;
    local_6c = 0x30;
    local_68 = FUN_01fcbf60;
    local_60 = FUN_01fcbfb4;
    local_58 = 0;
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_01fcc074;
    local_98 = &DAT_025841f0;
    local_88 = local_30;
    local_78 = local_90;
    FUN_01fcbfe0(&local_b0);
    local_100 = (undefined *)local_78[5];
    bVar1 = local_100 == (undefined *)0x0;
    if (bVar1) {
      local_100 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = local_100;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_100;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_c8);
    }
    local_4c = 1;
    __Block_object_dispose(&local_80,8);
    _objc_storeStrong(&local_58,0);
  }
  else {
    puVar2 = PTR_WCRConfigMutableSnapshot_026cf810;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_4c = 1;
    local_28 = puVar2;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

