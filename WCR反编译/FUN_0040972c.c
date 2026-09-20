// FUN_0040972c @ 0040972c

void FUN_0040972c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_1b8;
  ulong local_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  byte local_d9;
  ulong local_d8;
  long local_d0;
  ulong local_c8;
  bool local_b9;
  undefined8 local_b8;
  undefined8 local_b0;
  byte local_a1;
  undefined *local_a0;
  undefined4 local_94;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ulong local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58 [3];
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  puVar4 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar5 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar4 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = local_28;
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_004139ec;
    local_78 = &DAT_0257b6a8;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_30;
    local_70 = uVar6;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_38;
    local_68 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_40;
    local_60 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_58[0] = uVar2;
    _dispatch_async(puVar5,&local_90);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_94 = 1;
    _objc_storeStrong(local_58);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_70,0);
  }
  else {
    puVar5 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_isOfficialAccountOrBrandUserName_0269d4e8,local_30)
    ;
    if (((ulong)puVar5 & 1) == 0) {
      puVar5 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_keywordAutoReplyQuoteOriginalEna_026a3618);
      local_a1 = (byte)puVar5;
      local_b9 = false;
      bVar1 = ((ulong)puVar5 & 1) == 0;
      if (bVar1) {
        local_1b8 = 0;
      }
      else {
        local_1b8 = local_40;
        FUN_00413a2c();
        _objc_retainAutoreleasedReturnValue();
        local_b8 = local_1b8;
      }
      local_b9 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = local_1b8;
      if ((local_b9 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_b8);
      }
      uVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_inviteChatRoom);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      FUN_0040494c();
      _objc_retainAutoreleasedReturnValue();
      local_c8 = uVar7;
      (*(code *)PTR__objc_release_02578630)(uVar6);
      uVar6 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
      if (uVar6 == 0) {
        local_d0 = 0;
        uVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_countMode);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_d8 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
        if ((uVar6 & 1) != 0) {
          uVar6 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_integerValue_026ca750);
          local_d0 = (long)(int)(uint)(uVar6 == 1);
        }
        local_d9 = 0;
        uVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_randomOneFromMulti);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_e8 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
        if ((uVar6 & 1) != 0) {
          uVar6 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_boolValue_026ca540);
          local_d9 = (byte)uVar6;
        }
        if (local_d0 == 1) {
          uVar6 = local_28;
          FUN_00414548(0);
          _objc_retainAutoreleasedReturnValue();
          local_f0 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_count_0269cfe0);
          if (uVar6 != 0) {
            FUN_004147f8(local_f0,local_d9 & 1,local_30,local_b0,local_a1 & 1,&cf_keyword);
          }
          local_94 = 1;
          _objc_storeStrong(&local_f0,0);
        }
        else {
          uVar6 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_replyText);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          FUN_0040494c();
          _objc_retainAutoreleasedReturnValue();
          local_f8 = uVar7;
          (*(code *)PTR__objc_release_02578630)(uVar6);
          uVar6 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_repositoryCode);
          _objc_retainAutoreleasedReturnValue();
          uVar7 = uVar6;
          FUN_0040494c();
          _objc_retainAutoreleasedReturnValue();
          local_100 = uVar7;
          (*(code *)PTR__objc_release_02578630)(uVar6);
          uVar6 = local_f8;
          (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
          if (uVar6 != 0) {
            FUN_00414e40(local_f8,local_30,local_b0,local_a1 & 1);
            FUN_00415f58(local_30,local_f8);
          }
          uVar6 = local_100;
          FUN_00416224(local_100,local_a0);
          _objc_retainAutoreleasedReturnValue();
          local_108 = uVar6;
          if (uVar6 != 0) {
            FUN_0041694c(uVar6,local_30,local_b0,local_a1 & 1);
          }
          _objc_storeStrong(&local_108);
          _objc_storeStrong(&local_100,0);
          _objc_storeStrong(&local_f8,0);
          local_94 = 0;
        }
        _objc_storeStrong(&local_e8);
        _objc_storeStrong(&local_d8,0);
      }
      else {
        FUN_00413ecc(uVar6,local_c8,local_38);
        local_94 = 1;
      }
      _objc_storeStrong(&local_c8);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_a0,0);
    }
    else {
      local_94 = 1;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

