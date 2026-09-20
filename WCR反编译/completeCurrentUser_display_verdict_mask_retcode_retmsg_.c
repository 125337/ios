// completeCurrentUser:display:verdict:mask:retcode:retmsg: @ 00f7ae28

/* Function Stack Size: 0x40 bytes */

void WCRefineFriendRelationChecker::completeCurrentUser_display_verdict_mask_retcode_retmsg_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,long_long param_7
               ,ID param_8)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ID IVar11;
  ID IVar12;
  undefined8 uVar13;
  dispatch_time_t dVar14;
  undefined *local_250;
  undefined *local_230;
  double local_178;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  undefined1 auStack_138 [8];
  ID local_130;
  undefined8 local_128 [3];
  ID local_110;
  undefined1 auStack_108 [12];
  undefined4 local_fc;
  undefined *local_f8;
  undefined *local_f0;
  int local_e4;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  long_long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  SEL local_98;
  ID local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_a0 = 0;
  local_98 = param_2;
  local_90 = param_1;
  _objc_storeStrong(&local_a0,param_3);
  local_a8 = 0;
  _objc_storeStrong(&local_a8,param_4);
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_5);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_6);
  local_c8 = 0;
  local_c0 = param_7;
  _objc_storeStrong(&local_c8,param_8);
  puVar2 = PTR_WCRefineFriendRelationStore_026cebd0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineFriendRelationStore_026cebd0,PTR_s_mutableSnapshot_026aca58);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineFriendRelationStore_026cebd0;
  local_d0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineFriendRelationStore_026cebd0,PTR_s_resultsFromSnapshot__026acb00,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_d8 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_88 = &cf_verdict;
  uVar13 = local_b0;
  FUN_00f73814();
  _objc_retainAutoreleasedReturnValue();
  local_80 = &cf_displayName;
  uVar4 = local_a8;
  local_58 = uVar13;
  FUN_00f73814();
  _objc_retainAutoreleasedReturnValue();
  local_78 = &cf_maskTruename;
  uVar5 = local_b8;
  local_50 = uVar4;
  FUN_00f73814();
  _objc_retainAutoreleasedReturnValue();
  local_70 = &cf_retcode;
  puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_48 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_c0);
  _objc_retainAutoreleasedReturnValue();
  local_68 = &cf_retmsg;
  uVar7 = local_c8;
  local_40 = puVar6;
  FUN_00f73814();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_60 = &cf_checkedAt;
  puVar8 = PTR__OBJC_CLASS___NSDate_026cdf88;
  local_38 = uVar7;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_58,&local_88,6);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_d8;
  uVar10 = local_a0;
  FUN_00f73814();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setObject_forKeyedSubscript__0269d248,puVar9);
  (*(code *)PTR__objc_release_02578630)(uVar10);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(uVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(uVar5);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  (*(code *)PTR__objc_release_02578630)(uVar13);
  puVar2 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_copy_0269d150);
  local_230 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_230 = *(undefined **)PTR____NSDictionary0___02578288;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d0,PTR_s_setObject_forKeyedSubscript__0269d248,local_230,&cf_results);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar11 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_rechecking_026aca80);
  IVar12 = local_90;
  if ((IVar11 & 1) == 0) {
    local_e4 = 0;
    puVar2 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_cursor);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_250 = puVar3;
    if ((long)puVar3 <= (long)local_e4) {
      local_250 = (undefined *)(long)local_e4;
    }
    local_f8 = local_250;
    local_e0 = local_250 + 1;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_f0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
               local_e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_cursor);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    IVar11 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_recheckCursor_026acaa0);
    (*(code *)PTR__objc_msgSend_02578628)(IVar12,PTR_s_setRecheckCursor__026acb40,IVar11 + 1);
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_updatedAt);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineFriendRelationStore_026cebd0,PTR_s_saveSnapshot__026aca60,local_d0);
  IVar12 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_running_026aca70);
  if ((IVar12 & 1) == 0) {
    local_fc = 1;
  }
  else {
    _objc_initWeak(auStack_108,local_90);
    IVar12 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_requestToken_026acb48);
    local_158 = PTR___NSConcreteStackBlock_02578660;
    local_150 = 0xc2000000;
    local_14c = 0;
    local_148 = FUN_00f7b77c;
    local_140 = &DAT_025799c0;
    local_110 = IVar12;
    _objc_copyWeak(auStack_138,auStack_108);
    local_130 = local_110;
    uVar13 = 0;
    _dispatch_block_create(0,&local_158);
    IVar12 = local_90;
    local_128[0] = uVar13;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_progressCompletedCount_026aca48);
    IVar11 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_progressTotalCount_026aca38);
    bVar1 = false;
    if ((IVar12 != 0) && (bVar1 = false, IVar12 < IVar11)) {
      bVar1 = IVar12 % 0x32 == 0;
    }
    local_178 = 1.0;
    FUN_00f7b82c(0x3ff0000000000000,DAT_02323d88);
    if (bVar1) {
      local_178 = local_178 + 5.0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setGapBlock__026acb90,local_128[0]);
    dVar14 = _dispatch_time(0,(long)(local_178 * 1000000000.0));
    puVar2 = PTR___dispatch_main_q_02578680;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_after(dVar14,puVar2,local_128[0]);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(local_128,0);
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(auStack_108);
    local_fc = 0;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

