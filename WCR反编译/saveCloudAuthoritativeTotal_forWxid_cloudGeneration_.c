// saveCloudAuthoritativeTotal:forWxid:cloudGeneration: @ 01514424

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x28 bytes */

bool WCRefineSponsorSecureStore::saveCloudAuthoritativeTotal_forWxid_cloudGeneration_
               (ID param_1,SEL param_2,double param_3,ID param_4,unsigned_long_long param_5)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  ulong local_1a8;
  ulong local_1a0;
  undefined1 auStack_170 [8];
  long local_168;
  long *local_160;
  ulong local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined4 local_10c;
  unsigned_long_long local_108;
  ID local_100;
  double local_f8;
  SEL local_f0;
  ID local_e8;
  byte local_d9;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_100 = 0;
  local_f8 = param_3;
  local_f0 = param_2;
  local_e8 = param_1;
  _objc_storeStrong(&local_100,param_4);
  IVar1 = local_e8;
  local_108 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_resolvedWxid__026a7de8,local_100);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_100;
  local_100 = IVar1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
  if (IVar2 == 0) {
    local_d9 = 0;
  }
  else {
    local_118 = local_f8;
    if (local_f8 < 0.0) {
      local_118 = 0.0;
    }
    dVar10 = local_118;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_loadTrustedTotalForWxid_cloudGen_026b00c0,local_100,0);
    dVar11 = 0.0;
    local_128 = 0.0;
    local_120 = dVar10;
    _memset(auStack_170,0,0x40);
    IVar2 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_loadRecordsForWxid__026a7e48,local_100);
    _objc_retainAutoreleasedReturnValue();
    local_1a0 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1a0 != 0) {
      lVar8 = *local_160;
      local_1a8 = 0;
      do {
        do {
          if (*local_160 - lVar8 != 0) {
            _objc_enumerationMutation(*local_160 - lVar8,IVar2);
          }
          uVar9 = *(ulong *)(local_168 + local_1a8 * 8);
          puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_130 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((uVar9 & 1) != 0) {
            uVar9 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_130,PTR_s_objectForKeyedSubscript__0269d098,&cf_synced);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar9;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar9);
            if (((uVar4 & 1) == 0) &&
               ((*(code *)PTR__objc_msgSend_02578628)
                          (local_e8,PTR_s_verifiedAmountForRecord__026a7e30,local_130), 0.0 < dVar11
               )) {
              dVar11 = local_128 + dVar11;
              local_128 = dVar11;
            }
          }
          local_1a8 = local_1a8 + 1;
        } while (local_1a8 < local_1a0);
        local_1a0 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_a8,0x10
                  );
        local_1a8 = 0;
      } while (local_1a0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_e8;
    if ((local_128 <= _DAT_0232c6f8) || (local_120 <= local_118 + DAT_023242a8)) {
      local_d8 = &cf_v;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,2);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = &cf_t;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_c0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_118,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = &cf_g;
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_b8 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
                 local_108);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_b0 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_c0,&local_d8,3);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_writeEncryptedTotalPayload_forWx_026b00a8,puVar7,local_100);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
      _objc_retainAutoreleasedReturnValue();
      uVar12 = NEON_ucvtf(local_108);
      IVar2 = local_100;
      FUN_01513478();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar12,puVar3,PTR_s_setDouble_forKey__026a0790);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_d9 = 1;
    }
    else {
      local_d9 = 0;
    }
  }
  local_10c = 1;
  _objc_storeStrong(&local_100,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_d9 & 1;
}

