// FUN_0202f3fc @ 0202f3fc

ulong FUN_0202f3fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong local_108;
  ulong local_f0;
  bool local_99;
  ulong local_98;
  ulong local_90;
  bool local_81;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  undefined4 local_64;
  ulong local_60;
  ulong local_58;
  long local_50;
  byte local_41;
  long local_40;
  undefined8 local_38;
  ulong local_30;
  ulong local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  local_50 = 0;
  local_41 = param_4;
  _objc_storeStrong(&local_50,param_5);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKey__0269e048,local_38);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_58 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) == 0) {
    local_70 = 0;
    lVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    local_81 = false;
    if (lVar4 == 0) {
      local_f0 = 0;
    }
    else {
      local_f0 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKey__0269e048,local_50);
      _objc_retainAutoreleasedReturnValue();
      local_80 = local_f0;
    }
    local_81 = lVar4 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = local_f0;
    if ((local_81 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    uVar1 = local_78;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar1 & 1) == 0) ||
       (uVar1 = local_78, (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_boolValue_026ca540),
       (uVar1 & 1) == 0)) {
      lVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if (lVar4 == 0) {
        local_108 = 0;
      }
      else {
        local_108 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKey__0269e048,local_40);
        _objc_retainAutoreleasedReturnValue();
        local_98 = local_108;
      }
      local_99 = lVar4 != 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_90 = local_108;
      if (local_99) {
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      uVar1 = local_90;
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if ((((uVar1 & 1) != 0) &&
          (uVar1 = local_90,
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_boolValue_026ca540),
          (local_41 & 1) == 0)) && ((uVar1 & 1) != 0)) {
        local_70 = 1;
      }
      _objc_storeStrong(&local_90,0);
    }
    else {
      local_70 = 2;
    }
    uVar1 = local_30;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setObject_forKey__026ca9e8,puVar2,local_38);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    lVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (lVar4 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeObjectForKey__0269d700,local_40);
    }
    lVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (lVar4 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeObjectForKey__0269d700,local_50);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_30);
    local_28 = local_70;
    local_64 = 1;
    _objc_storeStrong(&local_78,0);
  }
  else {
    uVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_integerValue_026ca750);
    FUN_02030270();
    uVar3 = local_58;
    local_60 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_integerValue_026ca750);
    uVar1 = local_30;
    if (uVar3 != local_60) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_60);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setObject_forKey__026ca9e8,puVar2,local_38);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_30);
    }
    local_28 = local_60;
    local_64 = 1;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_28;
}

