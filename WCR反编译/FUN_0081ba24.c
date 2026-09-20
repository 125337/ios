// FUN_0081ba24 @ 0081ba24

void FUN_0081ba24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *local_290;
  undefined *local_288;
  undefined *local_228;
  undefined *local_220;
  undefined *local_1f8;
  undefined1 local_1e9;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  undefined8 local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  undefined8 local_160;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRGlobalPageBackgroundStore_026ce9b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRGlobalPageBackgroundStore_026ce9b0,PTR_s_configuration_026a1de8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  local_140 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  local_148 = puVar2;
  _memset(auStack_1a0,0,0x40);
  puVar1 = PTR_WCRGlobalPageBackgroundStore_026ce9b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRGlobalPageBackgroundStore_026ce9b0,PTR_s_supportedScenes_026a8e20);
  _objc_retainAutoreleasedReturnValue();
  local_220 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_220 != (undefined *)0x0) {
    lVar6 = *local_190;
    local_228 = (undefined *)0x0;
    do {
      do {
        if (*local_190 - lVar6 != 0) {
          _objc_enumerationMutation(*local_190 - lVar6,puVar1);
        }
        local_160 = *(undefined8 *)(local_198 + (long)local_228 * 8);
        _memset(auStack_1e8,0,0x40);
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_138 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_130 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_138,2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_288 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,auStack_128,
                   0x10);
        if (local_288 != (undefined *)0x0) {
          lVar7 = *local_1d8;
          local_290 = (undefined *)0x0;
          do {
            do {
              if (*local_1d8 - lVar7 != 0) {
                _objc_enumerationMutation(*local_1d8 - lVar7,puVar4);
              }
              uVar8 = *(undefined8 *)(local_1e0 + (long)local_290 * 8);
              local_1a8 = uVar8;
              (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_boolValue_026ca540);
              local_1e9 = (undefined1)uVar8;
              puVar5 = PTR_WCRGlobalPageBackgroundStore_026ce9b0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRGlobalPageBackgroundStore_026ce9b0,
                         PTR_s_resolvedMediaPathForScene_dark_c_026a8e28,local_160,(uint)uVar8 & 1,
                         local_140);
              _objc_retainAutoreleasedReturnValue();
              local_1f8 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
              puVar3 = local_148;
              puVar2 = local_1f8;
              if (puVar5 != (undefined *)0x0) {
                puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                           &cf_____d);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar3,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2);
                (*(code *)PTR__objc_release_02578630)(puVar5);
              }
              _objc_storeStrong(&local_1f8,0);
              local_290 = local_290 + 1;
            } while (local_290 < local_288);
            local_288 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,
                       auStack_128,0x10);
            local_290 = (undefined *)0x0;
          } while (local_288 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_228 = local_228 + 1;
      } while (local_228 < local_220);
      local_220 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10)
      ;
      local_228 = (undefined *)0x0;
    } while (local_220 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&DAT_028ccfc8,local_140);
  puVar1 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_copy_0269d150);
  uVar8 = DAT_028ccfd0;
  DAT_028ccfd0 = puVar1;
  (*(code *)PTR__objc_release_02578630)(uVar8);
  FUN_0083fbf4();
  puVar1 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _dispatch_async();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_148);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

