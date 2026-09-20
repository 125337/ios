// FUN_02184590 @ 02184590

void FUN_02184590(void)

{
  undefined *puVar1;
  void *pvVar2;
  undefined *puVar3;
  long lVar4;
  void *local_138;
  void *local_130;
  undefined *local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  byte local_b9;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_b0 = puVar1;
  FUN_0219da0c();
  _objc_retainAutoreleasedReturnValue();
  local_b9 = 0;
  local_b8 = puVar1;
  pvVar2 = _memset(auStack_108,0,0x40);
  FUN_0219dd5c();
  _objc_retainAutoreleasedReturnValue();
  local_130 = pvVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_130 != (void *)0x0) {
    lVar4 = *local_f8;
    local_138 = (void *)0x0;
    do {
      do {
        if (*local_f8 - lVar4 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar4,pvVar2);
        }
        local_c8 = *(undefined8 *)(local_100 + (long)local_138 * 8);
        puVar1 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_containsObject__0269cbb8,local_c8);
        if (((ulong)puVar1 & 1) == 0) {
          puVar1 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_objectForKey__0269e048,local_c8);
          _objc_retainAutoreleasedReturnValue();
          local_110 = puVar1;
          if ((puVar1 == (undefined *)0x0) ||
             ((*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_boolValue_026ca540),
             ((ulong)puVar1 & 1) == 0)) {
            puVar1 = local_b0;
            puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar1,PTR_s_setObject_forKey__026ca9e8,puVar3,local_c8);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            local_b9 = 1;
          }
          _objc_storeStrong(&local_110,0);
        }
        local_138 = (void *)((long)local_138 + 1);
      } while (local_138 < local_130);
      local_130 = pvVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pvVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10)
      ;
      local_138 = (void *)0x0;
    } while (local_130 != (void *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pvVar2);
  if ((local_b9 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_b0);
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

