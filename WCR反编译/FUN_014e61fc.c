// FUN_014e61fc @ 014e61fc

void FUN_014e61fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_58 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_60 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_28;
  puVar2 = local_58;
  local_88 = &local_38;
  local_80 = &local_40;
  local_78 = &local_48;
  local_70 = &local_50;
  local_68 = puVar4;
  (*(code *)PTR__objc_retain_02578638)();
  puVar3 = local_60;
  local_a0 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = local_68;
  local_98 = puVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_90 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setRosterCount__026af9f0,local_38);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setRosterMaleCount__026afe90,local_40);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setRosterFemaleCount__026afea0,local_48);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setRosterUnknownSexCount__026afeb0,local_50);
  puVar2 = local_58;
  FUN_014e3aa4(local_58,local_60);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setRosterRegionRows__026afa10);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_68;
  FUN_014fd3a8();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setRosterAgeRows__026afa18);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

