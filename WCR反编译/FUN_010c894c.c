// FUN_010c894c @ 010c894c

void FUN_010c894c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_d8;
  bool local_81;
  ulong local_80;
  ulong local_78;
  long local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined4 local_24;
  ulong local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 == 0) ||
     (uVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0),
     uVar1 == 0)) {
    local_24 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_30 = puVar2;
    _objc_alloc_init();
    uVar1 = local_20;
    local_68 = PTR___NSConcreteGlobalBlock_02578658;
    local_60 = 0xd0800000;
    local_5c = 0;
    local_58 = FUN_010cc974;
    local_50 = &DAT_025853c8;
    local_38 = puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = local_30;
    local_48 = puVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_68);
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0);
    if (puVar2 == (undefined *)0x0) {
      _objc_setAssociatedObject(local_18,DAT_0280e1b0,0,1);
    }
    else {
      _objc_setAssociatedObject(local_18,DAT_0280e1b0,local_30,1);
    }
    lVar4 = local_18;
    FUN_010ca3c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_20;
    local_70 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_live)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    uVar5 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_81 = (uVar5 & 1) == 0;
    if (local_81) {
      local_d8 = 0;
    }
    else {
      local_d8 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_live);
      _objc_retainAutoreleasedReturnValue();
      local_80 = local_d8;
    }
    local_81 = !local_81;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = local_d8;
    if (local_81) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((local_70 != 0) &&
       (uVar1 = local_78, (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0),
       uVar1 != 0)) {
      FUN_010c894c(uVar1,local_70,local_78);
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_30,0);
    local_24 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

