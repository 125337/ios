// loadTrustedTotalForWxid:cloudGeneration: @ 01513520

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x20 bytes */

double WCRefineSponsorSecureStore::loadTrustedTotalForWxid_cloudGeneration_
                 (ID param_1,SEL param_2,ID param_3,unsigned_long_long *param_4)

{
  double dVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double local_2d8;
  cfstringStruct *local_290;
  cfstringStruct *local_1a0;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  double local_118;
  cfstringStruct *local_110;
  undefined4 local_104;
  unsigned_long_long *local_100;
  cfstringStruct *local_f8;
  SEL local_f0;
  cfstringStruct *local_e8;
  double local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  dVar1 = _DAT_0232c6f8;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f8 = (cfstringStruct *)0x0;
  local_f0 = param_2;
  local_e8 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_f8,param_3);
  pcVar7 = local_e8;
  local_100 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_resolvedWxid__026a7de8,local_f8);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_f8;
  local_f8 = pcVar7;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_f8;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    if (local_100 != (unsigned_long_long *)0x0) {
      *local_100 = 0;
    }
    local_e0 = 0.0;
    local_104 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_migrateLegacyPlaintextTotalIfNee_026b00b0,local_f8);
    local_110 = (cfstringStruct *)0x0;
    dVar8 = 0.0;
    local_118 = 0.0;
    pcVar2 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_decryptedTotalPayloadForWxid__026b00a0,local_f8);
    _objc_retainAutoreleasedReturnValue();
    local_120 = pcVar2;
    if (pcVar2 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_t);
      _objc_retainAutoreleasedReturnValue();
      local_128 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
      if (((ulong)pcVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_doubleValue_026ca608);
        local_118 = dVar8;
      }
      pcVar2 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_g)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_130 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_unsignedLongLongValue_0269d6b8);
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_unsignedLongLongValue_0269d6b8);
        local_110 = pcVar2;
      }
      pcVar2 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_objectForKeyedSubscript__0269d098,&cf_s)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_138 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)pcVar2 & 1) == 0) {
        local_1a0 = &::cf___;
      }
      else {
        local_1a0 = local_138;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_140 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_length_0269cca0);
      pcVar2 = local_e8;
      if (local_1a0 == (cfstringStruct *)0x0) {
        local_a8 = &cf_v;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,2);
        _objc_retainAutoreleasedReturnValue();
        local_a0 = &cf_t;
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        dVar8 = local_118;
        local_90 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        local_98 = &cf_g;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_88 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
                   local_110);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_80 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_90,&local_a8,3);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_writeEncryptedTotalPayload_forWx_026b00a8,puVar6,local_f8);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      else {
        dVar8 = local_118;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8,PTR_s_totalSealForWxid_amount_generati_026b0098,local_f8,local_110);
        _objc_retainAutoreleasedReturnValue();
        local_148 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
        if ((pcVar2 != (cfstringStruct *)0x0) &&
           (pcVar2 = local_140,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_140,PTR_s_isEqualToString__0269ccc8,local_148), dVar10 = local_118,
           ((ulong)pcVar2 & 1) == 0)) {
          dVar9 = local_118;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e8,PTR_s_provableDisplayTotalForWxid__026b00b8,local_f8);
          pcVar2 = local_e8;
          dVar11 = dVar9 + DAT_023242a8;
          local_58 = &cf_v;
          puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_118 = dVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,2);
          _objc_retainAutoreleasedReturnValue();
          local_50 = &cf_t;
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          dVar8 = local_118;
          local_40 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          local_48 = &cf_g;
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_38 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
                     local_110);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_30 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58,3);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_writeEncryptedTotalPayload_forWx_026b00a8,puVar6,local_f8);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          if (dVar11 < dVar10) {
            puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0)
            ;
            _objc_retainAutoreleasedReturnValue();
            local_78 = &cf_provable;
            puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (dVar9,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
            _objc_retainAutoreleasedReturnValue();
            local_70 = &cf_tampered;
            puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_68 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_60 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_68,&local_78,2);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar3,PTR_s_postNotificationName_object_user_026a1e90,
                       &cf_WCRefineSponsorTotalTamperNotification,0);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            (*(code *)PTR__objc_release_02578630)(puVar5);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            dVar8 = dVar10;
          }
        }
        _objc_storeStrong(&local_148,0);
      }
      _objc_storeStrong(&local_140);
      _objc_storeStrong(&local_138,0);
      _objc_storeStrong(&local_130,0);
      _objc_storeStrong(&local_128,0);
    }
    puVar3 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_f8;
    FUN_01513478();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_doubleForKey__026a7e60);
    pcVar7 = (cfstringStruct *)(long)dVar8;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = local_e8;
    if (local_100 != (unsigned_long_long *)0x0) {
      local_290 = pcVar7;
      if (pcVar7 <= local_110) {
        local_290 = local_110;
      }
      *local_100 = (unsigned_long_long)local_290;
    }
    if ((pcVar7 <= local_110) || (dVar1 < local_118)) {
      if ((local_110 < pcVar7) && (dVar1 < local_118)) {
        local_d8 = &cf_v;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,2);
        _objc_retainAutoreleasedReturnValue();
        local_d0 = &cf_t;
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_c0 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_118,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        local_c8 = &cf_g;
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_b8 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
                   pcVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_b0 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c0,&local_d8,3);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_writeEncryptedTotalPayload_forWx_026b00a8,puVar6,local_f8);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
    }
    else {
      local_118 = 0.0;
    }
    if (local_118 < 0.0) {
      local_2d8 = 0.0;
    }
    else {
      local_2d8 = local_118;
    }
    local_e0 = local_2d8;
    local_104 = 1;
    _objc_storeStrong(&local_120,0);
  }
  _objc_storeStrong(&local_f8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_e0;
}

