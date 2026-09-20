// FUN_007707ec @ 007707ec

void FUN_007707ec(double param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  dispatch_queue_t pdVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  undefined *local_2a8;
  undefined *local_2a0;
  double local_280;
  double local_278;
  cfstringStruct *local_1e8;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  long *local_1a0;
  ulong local_170;
  double local_168;
  long local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined8 local_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined *local_f8;
  undefined *local_f0;
  double local_e8;
  undefined *local_e0;
  cfstringStruct *local_d8 [3];
  undefined4 local_bc;
  cfstringStruct *local_b8;
  double local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (cfstringStruct *)0x0;
  local_b0 = param_1;
  _objc_storeStrong(&local_b8,param_2);
  if (0.0 < local_b0) {
    pcVar1 = local_b8;
    FUN_00771264(local_b0);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_b8;
      FUN_00771368();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      local_d8[0] = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      if (local_b8 == (cfstringStruct *)0x0) {
        local_1e8 = &cf___;
      }
      else {
        local_1e8 = local_b8;
      }
      local_e0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_setObject_forKeyedSubscript__0269d248,local_1e8,&cf_wxid);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_setObject_forKeyedSubscript__0269d248,local_d8[0],&cf_nickname);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      dVar8 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_amount);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_e8 = dVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar8,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_timestamp);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
      puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_localizedStringFromDate_dateStyl_026a7e10,puVar3,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_timeString);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar2 = PTR_WCRefineSponsorSecureStore_026ce918;
      dVar8 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,local_e8,PTR_WCRefineSponsorSecureStore_026ce918,
                 PTR_s_sealRecordForPayment_amount_wxid_026a7e18,local_e0,local_b8);
      FUN_007717b8();
      _objc_retainAutoreleasedReturnValue();
      local_f0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0);
      local_f8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,local_e0);
      FUN_00771864(local_f0);
      FUN_00771954();
      local_100 = dVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineSponsorSecureStore_026ce918,
                 PTR_s_cloudSyncedTotalMarkerForWxid__026a7e20,local_b8);
      local_108 = dVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineSponsorSecureStore_026ce918,
                 PTR_s_sumVerifiedAmountsForRecords__026a7e28,local_f0);
      local_120 = 0;
      local_128 = dVar8 - local_b0;
      local_278 = local_128;
      if (local_128 <= 0.0) {
        local_278 = 0.0;
      }
      local_130 = local_278;
      local_118 = local_278;
      local_140 = local_108;
      local_148 = local_278;
      if (local_278 <= local_108) {
        local_280 = local_108;
      }
      else {
        local_280 = local_278;
      }
      local_150 = local_280;
      local_138 = local_280;
      local_158 = local_280 + local_b0;
      local_160 = 0;
      dVar9 = 0.0;
      local_168 = 0.0;
      local_110 = dVar8;
      _memset(auStack_1b0,0,0x40);
      puVar2 = local_f0;
      (*(code *)PTR__objc_retain_02578638)();
      local_2a0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,0x10)
      ;
      if (local_2a0 != (undefined *)0x0) {
        lVar6 = *local_1a0;
        local_2a8 = (undefined *)0x0;
        do {
          do {
            if (*local_1a0 - lVar6 != 0) {
              _objc_enumerationMutation(*local_1a0 - lVar6,puVar2);
            }
            uVar7 = *(ulong *)(local_1a8 + (long)local_2a8 * 8);
            puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_170 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
            if ((uVar7 & 1) != 0) {
              uVar7 = local_170;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_170,PTR_s_objectForKeyedSubscript__0269d098,&cf_synced);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar7);
              if (((uVar4 & 1) == 0) &&
                 ((*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineSponsorSecureStore_026ce918,
                             PTR_s_verifiedAmountForRecord__026a7e30,local_170), 0.0 < dVar9)) {
                local_160 = local_160 + 1;
                dVar9 = local_168 + dVar9;
                local_168 = dVar9;
              }
            }
            local_2a8 = local_2a8 + 1;
          } while (local_2a8 < local_2a0);
          local_2a0 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b0,auStack_a8,
                     0x10);
          local_2a8 = (undefined *)0x0;
        } while (local_2a0 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      FUN_007719f0();
      FUN_00771954();
      DAT_028cc950 = local_b0;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = DAT_028cc8a8;
      DAT_028cc8a8 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      pdVar5 = _dispatch_get_global_queue(0x11,0);
      _objc_retainAutoreleasedReturnValue();
      _dispatch_async();
      (*(code *)PTR__objc_release_02578630)(pdVar5);
      _objc_storeStrong(&local_f0);
      _objc_storeStrong(&local_e0,0);
      _objc_storeStrong(local_d8,0);
      local_bc = 0;
    }
    else {
      local_bc = 1;
    }
  }
  else {
    local_bc = 1;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

