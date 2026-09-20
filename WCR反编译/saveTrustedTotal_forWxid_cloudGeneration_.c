// saveTrustedTotal:forWxid:cloudGeneration: @ 01514a2c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x28 bytes */

void WCRefineSponsorSecureStore::saveTrustedTotal_forWxid_cloudGeneration_
               (ID param_1,SEL param_2,double param_3,ID param_4,unsigned_long_long param_5)

{
  double dVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  double local_100;
  cfstringStruct *local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined4 local_84;
  unsigned_long_long local_80;
  ID local_78;
  double local_70;
  SEL local_68;
  ID local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  dVar1 = _DAT_0232c6f8;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_78 = 0;
  local_70 = param_3;
  local_68 = param_2;
  local_60 = param_1;
  _objc_storeStrong(&local_78,param_4);
  IVar3 = local_60;
  local_80 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_resolvedWxid__026a7de8,local_78);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_78;
  local_78 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar3 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
  IVar2 = local_60;
  if (IVar3 == 0) {
    local_84 = 1;
  }
  else {
    IVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_loadRecordsForWxid__026a7e48,local_78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_sumVerifiedAmountsForRecords__026a7e28);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    local_90 = param_3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_cloudSyncedTotalMarkerForWxid__026a7e20,local_78);
    local_b0 = local_90;
    local_100 = param_3;
    if (param_3 < local_90) {
      local_100 = local_90;
    }
    local_b8 = local_100;
    local_a0 = local_100;
    local_c0 = local_70;
    local_a8 = param_3;
    local_98 = param_3;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = &cf_none;
    if (local_a0 - DAT_02324140 <= local_c0) {
      if (local_90 + dVar1 < local_98) {
        if (local_98 + 250.0 + dVar1 < local_c0) {
          local_c0 = local_a0;
          _objc_storeStrong(&local_c8,&cf_cap_synced_plus_250);
        }
      }
      else if ((dVar1 < local_90) && (local_90 + dVar1 < local_c0)) {
        local_c0 = local_90;
        _objc_storeStrong(&local_c8,&cf_cap_to_verifiedSum);
      }
    }
    else {
      local_c0 = local_a0;
      _objc_storeStrong(&local_c8,&cf_raise_to_floor);
    }
    if (local_c0 < 0.0) {
      local_c0 = 0.0;
      _objc_storeStrong(&local_c8,&cf_neg_to_zero);
    }
    IVar2 = local_60;
    local_58 = &cf_v;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,2);
    _objc_retainAutoreleasedReturnValue();
    local_50 = &cf_t;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = &cf_g;
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
               local_80);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58,3);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_writeEncryptedTotalPayload_forWx_026b00a8,puVar7,local_78);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_c8,0);
    local_84 = 0;
  }
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

