// FUN_015733c4 @ 015733c4

byte FUN_015733c4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  dispatch_queue_t pdVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  dispatch_time_t dVar8;
  uint local_154;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  char *local_c0;
  ulong local_b8;
  byte local_a9;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  char *local_90;
  cfstringStruct *local_88;
  char *local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  ulong local_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [12];
  undefined4 local_3c;
  undefined8 local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  uVar1 = local_30;
  FUN_015731c4();
  if ((uVar1 & 1) == 0) {
    pcVar3 = "WCForwardViewController";
    _objc_getClass();
    pcVar4 = &cf_initWithDataItem_;
    local_80 = pcVar3;
    _NSSelectorFromString();
    local_88 = pcVar4;
    if ((local_80 == (char *)0x0) ||
       (pcVar3 = local_80,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_80,PTR_s_instancesRespondToSelector__0269da90,pcVar4),
       ((ulong)pcVar3 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_lSRNS_u);
      local_21 = 0;
      local_3c = 1;
    }
    else {
      pcVar3 = local_80;
      _objc_alloc();
      pcVar5 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_90 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_90;
      puVar6 = PTR__OBJC_CLASS___UIViewController_026cdf80;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar6);
      if (((ulong)pcVar3 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R_lSub1Y_);
        local_21 = 0;
        local_3c = 1;
      }
      else {
        _WCRefineMarkMomentsForwardEditor(local_90,local_30);
        uVar1 = local_30;
        FUN_01533eb8(local_30,&cf_contentDesc);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = local_30;
        local_98 = uVar1;
        FUN_01566074(local_30,&cf_contentObj);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_98;
        local_a0 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
        if (uVar1 == 0) {
          uVar7 = local_a0;
          FUN_01533eb8(local_a0,&cf_desc);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_98;
          local_98 = uVar7;
          (*(code *)PTR__objc_release_02578630)(uVar1);
        }
        uVar1 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_lowercaseString_0269d9c0);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = local_98;
        local_a8 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
        local_154 = 1;
        if (uVar7 != 0) {
          uVar1 = local_a8;
          (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_isEqualToString__0269ccc8,&cf_sight);
          local_154 = (uint)uVar1;
        }
        local_a9 = (byte)local_154 & 1;
        if ((local_154 & 1) == 0) {
          dVar8 = _dispatch_time(0,300000000);
          puVar6 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_90;
          local_e0 = PTR___NSConcreteStackBlock_02578660;
          local_d8 = 0xc2000000;
          local_d4 = 0;
          local_d0 = FUN_01575e8c;
          local_c8 = &DAT_0257a7a0;
          (*(code *)PTR__objc_retain_02578638)();
          uVar1 = local_98;
          local_c0 = pcVar3;
          (*(code *)PTR__objc_retain_02578638)();
          local_b8 = uVar1;
          _dispatch_after(dVar8,puVar6,&local_e0);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          _objc_storeStrong(&local_b8);
          _objc_storeStrong(&local_c0,0);
        }
        FUN_01572904(local_38,local_90);
        local_21 = 1;
        local_3c = 1;
        _objc_storeStrong(&local_a8);
        _objc_storeStrong(&local_a0,0);
        _objc_storeStrong(&local_98,0);
      }
      _objc_storeStrong(&local_90,0);
    }
  }
  else {
    uVar1 = local_30;
    FUN_01575044();
    if ((uVar1 & 1) == 0) {
      uVar7 = local_30;
      _objc_getAssociatedObject(local_30,&DAT_028e3a08);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      uVar1 = local_30;
      if (uVar7 == 0) {
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar1,&DAT_028e3a08,puVar6,1);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        FUN_015758fc(local_30);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ck_WN__QV_);
        _objc_initWeak(auStack_48,local_38);
        pdVar2 = _dispatch_get_global_queue(0,0);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_30;
        local_78 = PTR___NSConcreteStackBlock_02578660;
        local_70 = 0xc2000000;
        local_6c = 0;
        local_68 = FUN_01575b98;
        local_60 = &DAT_02579c60;
        (*(code *)PTR__objc_retain_02578638)();
        local_58 = uVar1;
        _objc_copyWeak(auStack_50,auStack_48);
        _dispatch_async(pdVar2,&local_78);
        (*(code *)PTR__objc_release_02578630)(pdVar2);
        local_21 = 1;
        local_3c = 1;
        _objc_destroyWeak(auStack_50);
        _objc_storeStrong(&local_58,0);
        _objc_destroyWeak(auStack_48);
      }
      else {
        local_21 = 1;
        local_3c = 1;
      }
    }
    else {
      uVar1 = local_30;
      FUN_01575374(local_30,local_38);
      local_21 = (byte)uVar1 & 1;
      local_3c = 1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

