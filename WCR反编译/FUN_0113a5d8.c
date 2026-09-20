// FUN_0113a5d8 @ 0113a5d8

undefined * FUN_0113a5d8(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long local_88;
  undefined *local_60;
  long local_58;
  undefined8 local_50;
  byte local_41;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar4 = local_20;
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (uVar4 == 0) {
    local_18 = (undefined *)0x0;
    local_2c = 1;
  }
  else {
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_red_envelop);
    if ((uVar4 & 1) != 0) {
      _objc_storeStrong(&local_28,&cf_auto_function);
    }
    puVar3 = PTR_WCRefineRemoteUpdateManager_026ce600;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_updateInfo_026acf40);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
    if (((ulong)puVar3 & 1) == 0) {
      local_18 = (undefined *)0x0;
      local_2c = 1;
    }
    else {
      local_41 = 0;
      _os_unfair_lock_lock(&DAT_028e35c8);
      if ((long)DAT_028e35e0 - (long)local_40 != 0) {
        _objc_storeStrong((long)DAT_028e35e0 - (long)local_40,&DAT_028e35e0,local_40);
        puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = DAT_028e35e8;
        DAT_028e35e8 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        DAT_028e35f0 = 1;
        local_50 = 1;
        local_88 = DAT_0280e2b8;
        do {
          do {
            local_58 = DAT_0280e2b8;
            lVar6 = DAT_0280e2b8;
            if (DAT_0280e2b8 != local_88) break;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(0x280e2b8,0x10);
            if (bVar2) {
              cVar1 = ExclusiveMonitorsStatus();
              DAT_0280e2b8 = local_88 + 1;
            }
          } while (cVar1 != '\0');
          bVar2 = local_58 != local_88;
          local_88 = lVar6;
        } while (bVar2);
        local_41 = 1;
      }
      puVar3 = DAT_028e35e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e35e8,PTR_s_objectForKeyedSubscript__0269d098,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar3;
      _os_unfair_lock_unlock(&DAT_028e35c8);
      if ((local_41 & 1) != 0) {
        FUN_01139ce8();
      }
      if (local_60 == (undefined *)0x0) {
        puVar3 = local_38;
        FUN_0113cdac(local_38,local_40,local_28);
        _os_unfair_lock_lock(&DAT_028e35c8);
        if (DAT_028e35e0 == local_40) {
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,puVar3);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028e35e8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,local_28);
          (*(code *)PTR__objc_release_02578630)(puVar5);
        }
        _os_unfair_lock_unlock(&DAT_028e35c8);
        local_18 = puVar3;
      }
      else {
        puVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_integerValue_026ca750);
        local_18 = puVar3;
      }
      local_2c = 1;
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

