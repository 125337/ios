// wcr_mutableSendCodeFormatMapFromConfig: @ 021192f8

/* Function Stack Size: 0x18 bytes */

ID WCRefineConfig::wcr_mutableSendCodeFormatMapFromConfig_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong local_168;
  ulong local_160;
  long local_138;
  long local_130;
  ulong local_128;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  undefined *local_d0;
  ulong local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  uVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,PTR_s_objectForKey__0269e048,&cf_themeBoxAirDropSendCodeFormatsByRepo);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_c8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_c8;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_d0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar1 & 1) != 0) {
    _memset(auStack_118,0,0x40);
    uVar1 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
    if (local_160 != 0) {
      lVar5 = *local_108;
      local_168 = 0;
      do {
        do {
          if (*local_108 - lVar5 != 0) {
            _objc_enumerationMutation(*local_108 - lVar5,uVar1);
          }
          local_d8 = *(undefined8 *)(local_110 + local_168 * 8);
          uVar4 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_objectForKey__0269e048,local_d8);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_120 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
          if (((uVar4 & 1) != 0) &&
             (uVar4 = local_120,
             (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0), uVar4 != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0,PTR_s_setObject_forKeyedSubscript__0269d248,local_120,local_d8);
          }
          _objc_storeStrong(&local_120,0);
          local_168 = local_168 + 1;
        } while (local_168 < local_160);
        local_160 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_168 = 0;
      } while (local_160 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,PTR_s_objectForKey__0269e048,&cf_themeBoxAirDropSendCodeFormat);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_128 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar1 & 1) != 0) &&
     (uVar1 = local_128, (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0),
     uVar1 != 0)) {
    for (local_130 = 0; local_130 + -3 == 0 || local_130 < 3; local_130 = local_130 + 1) {
      lVar5 = local_130;
      FUN_0211986c(local_130 + -3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_d0;
      local_138 = lVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_objectForKeyedSubscript__0269d098,lVar5);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar2 == (undefined *)0x0) {
        uVar1 = local_128;
        (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_copy_0269d150);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_setObject_forKeyedSubscript__0269d248,uVar1,local_138);
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      _objc_storeStrong(&local_138,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_removeObjectForKey__0269d700,&cf_themeBoxAirDropSendCodeFormat);
    uVar1 = local_c0;
    puVar2 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_setObject_forKey__026ca9e8,puVar2,
               &cf_themeBoxAirDropSendCodeFormatsByRepo);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  puVar2 = local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_128);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

