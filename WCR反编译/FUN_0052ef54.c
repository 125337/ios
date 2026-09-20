// FUN_0052ef54 @ 0052ef54

void FUN_0052ef54(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  char *local_a8;
  undefined *local_a0;
  byte local_98;
  undefined **local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  char *local_48;
  undefined4 local_40;
  undefined *local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_momentsSpecialFollowNotifyEnable_026a4a98);
  if (((ulong)puVar2 & 1) == 0) {
    local_40 = 1;
  }
  else {
    pcVar3 = "MMLocalNotificationUtil";
    _objc_getClass();
    local_50 = PTR_s_showLocalNotificationWithIdentif_026a4bc0;
    local_51 = true;
    local_48 = pcVar3;
    if (pcVar3 != (char *)0x0) {
      _class_getClassMethod(pcVar3,PTR_s_showLocalNotificationWithIdentif_026a4bc0);
      local_51 = pcVar3 == (char *)0x0;
    }
    if ((bool)local_51 != false) {
      local_50 = PTR_s_showLocalNotificationWithIdentif_026a0c50;
    }
    if ((local_48 == (char *)0x0) ||
       (pcVar3 = local_48, _class_getClassMethod(local_48,local_50), pcVar3 == (char *)0x0)) {
      local_40 = 1;
    }
    else {
      puVar2 = local_28;
      FUN_0052b368();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      FUN_00530928();
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_momentsSpecialFollowNotifyTitle_026a4bc8)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      FUN_0052fba8();
      _objc_retainAutoreleasedReturnValue();
      local_68 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_momentsSpecialFollowNotifyBody_026a4bd0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      FUN_0052fba8();
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
      if (puVar2 == (undefined *)0x0) {
        puVar4 = local_28;
        FUN_005306f4();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = local_68;
        local_68 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      puVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
      if (puVar2 == (undefined *)0x0) {
        _objc_storeStrong(&local_68,&cf_yr_RsQl);
      }
      puVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      if (puVar2 == (undefined *)0x0) {
        _objc_storeStrong(&local_70,&cf_SNevgSW);
      }
      puVar4 = local_28;
      FUN_0052e538();
      _objc_retainAutoreleasedReturnValue();
      local_78 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0);
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      if (puVar4 == (undefined *)0x0) {
        FUN_0052e30c();
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf__u);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_78;
        local_78 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_wcr_sf___)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      local_80 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_88 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_setObject_forKeyedSubscript__0269d248,&cf_special_follow,&cf_wcr);
      puVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      if (puVar2 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_88,PTR_s_setObject_forKeyedSubscript__0269d248,local_60,&cf_u);
      }
      puVar4 = local_60;
      ppuVar5 = &local_f0;
      local_f0 = PTR___NSConcreteStackBlock_02578660;
      local_e8 = 0xc2000000;
      local_e4 = 0;
      local_e0 = FUN_00532188;
      local_d8 = &DAT_0257dc68;
      (*(code *)PTR__objc_retain_02578638)();
      puVar2 = local_80;
      local_d0 = puVar4;
      local_98 = local_51 & 1;
      local_a8 = local_48;
      local_a0 = local_50;
      (*(code *)PTR__objc_retain_02578638)();
      puVar1 = local_68;
      local_c8 = puVar2;
      (*(code *)PTR__objc_retain_02578638)();
      puVar4 = local_70;
      local_c0 = puVar1;
      (*(code *)PTR__objc_retain_02578638)();
      puVar2 = local_88;
      local_b8 = puVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = puVar2;
      _objc_retainBlock();
      puVar4 = PTR__OBJC_CLASS___NSThread_026ce0a8;
      local_90 = ppuVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
      puVar2 = PTR___dispatch_main_q_02578680;
      if (((ulong)puVar4 & 1) == 0) {
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_async();
        (*(code *)PTR__objc_release_02578630)(puVar2);
      }
      else {
        (*(code *)local_90[2])();
      }
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_b8,0);
      _objc_storeStrong(&local_c0,0);
      _objc_storeStrong(&local_c8,0);
      _objc_storeStrong(&local_d0,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
      local_40 = 0;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

