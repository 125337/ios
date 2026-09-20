// presentRecord: @ 00ff36a8

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineKeywordAlertDanmakuPresenter::presentRecord_
          (WCRefineKeywordAlertDanmakuPresenter *this,ID param_1,SEL param_2,ID param_3)

{
  double dVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  double in_d0;
  double dVar7;
  ID local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  double local_a8;
  undefined *local_a0;
  double local_98;
  ID local_90;
  ID local_88;
  ID local_80;
  undefined *local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ID local_50;
  ulong local_48;
  int local_3c;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar3 = local_38;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_3c = 1;
    goto LAB_00ff3e60;
  }
  puVar4 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar2 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar4 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_28;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_00ff3e7c;
    local_58 = &DAT_0257a7a0;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_38;
    local_50 = IVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = uVar3;
    _dispatch_async(puVar2,&local_70);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_3c = 1;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_50,0);
    goto LAB_00ff3e60;
  }
  puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  local_78 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_applicationState_0269d6d8);
  IVar5 = local_28;
  if (puVar2 == (undefined *)0x0) {
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_trimmedString__0269ec98);
    _objc_retainAutoreleasedReturnValue();
    local_80 = IVar5;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    IVar5 = local_28;
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_senderUserName);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_trimmedString__0269ec98);
    _objc_retainAutoreleasedReturnValue();
    local_88 = IVar5;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    puVar2 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_shouldConcealUsername__0269fef8,
               local_80);
    if ((((ulong)puVar2 & 1) == 0) &&
       (puVar2 = PTR_WCRefinePrivateFriendManager_026ce160,
       (*(code *)PTR__objc_msgSend_02578628)
                 (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_shouldConcealUsername__0269fef8,
                  local_88), IVar5 = local_28, ((ulong)puVar2 & 1) == 0)) {
      uVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_messageIdentityKey);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_trimmedString__0269ec98);
      _objc_retainAutoreleasedReturnValue();
      local_90 = IVar5;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      IVar5 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
      if (IVar5 == 0) {
LAB_00ff3d84:
        IVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingRecords_026ad698);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
        (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(IVar5);
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_drainPendingRecordsIfPossible_026ad6c0)
        ;
        local_3c = 0;
      }
      else {
        puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        local_98 = in_d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = local_28;
        local_a0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_recentIdentityTimestamps_026ad6b8);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_a0;
        local_d0 = PTR___NSConcreteGlobalBlock_02578658;
        local_c8 = 0xd0800000;
        local_c4 = 0;
        local_c0 = FUN_00ff3ec4;
        local_b8 = &DAT_0257f8e8;
        local_a8 = local_98;
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar5,PTR_s_enumerateKeysAndObjectsUsingBloc_0269d670,&local_d0);
        (*(code *)PTR__objc_release_02578630)(IVar5);
        IVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_recentIdentityTimestamps_026ad6b8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar5);
        IVar5 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_recentIdentityTimestamps_026ad6b8);
        _objc_retainAutoreleasedReturnValue();
        IVar6 = IVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_d8 = IVar6;
        (*(code *)PTR__objc_release_02578630)(IVar5);
        dVar1 = local_98;
        if ((local_d8 == 0) ||
           (dVar7 = local_98,
           (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_doubleValue_026ca608),
           8.0 <= dVar1 - dVar7)) {
          puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_98,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          IVar5 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_recentIdentityTimestamps_026ad6b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar5);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_3c = 0;
        }
        else {
          local_3c = 1;
        }
        _objc_storeStrong(&local_d8);
        _objc_storeStrong(&local_b0,0);
        _objc_storeStrong(&local_a0,0);
        if (local_3c == 0) goto LAB_00ff3d84;
      }
      _objc_storeStrong(&local_90,0);
    }
    else {
      local_3c = 1;
    }
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_80,0);
  }
  else {
    local_3c = 1;
  }
  _objc_storeStrong(&local_78,0);
LAB_00ff3e60:
  _objc_storeStrong(&local_38,0);
  return;
}

