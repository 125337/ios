// FUN_00501244 @ 00501244

void FUN_00501244(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  dispatch_time_t dVar7;
  ulong uVar8;
  uint local_fc;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  byte local_89;
  long local_88;
  byte local_79;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  undefined4 local_58;
  byte local_52;
  undefined1 local_51;
  undefined *local_50;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  puVar2 = PTR_WCRefineMessageSyncRule_026ce708;
  local_48 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_integerInRule_forKey__026a44f0,local_28,
             _kWCRMessageSyncRuleKeySendMode);
  local_50 = puVar2;
  FUN_00502cd0(puVar2,local_40);
  local_51 = SUB81(puVar2,0);
  local_fc = 0;
  if (((ulong)puVar2 & 1) != 0) {
    uVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_isEqualToString__0269ccc8,_kWCRMessageSyncTypeVoice);
    local_fc = (uint)uVar3;
  }
  local_52 = (byte)local_fc & 1;
  if ((local_fc & 1) == 0) {
    FUN_00502d98(local_28,local_30,local_38,local_40);
    local_58 = 1;
  }
  else {
    lVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_session);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = local_30;
    local_60 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_svrID);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar5);
    lVar5 = local_30;
    local_68 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar5);
    lVar5 = local_60;
    local_70 = lVar4;
    FUN_00503820(local_60,local_68,lVar4);
    _objc_retainAutoreleasedReturnValue();
    local_89 = 0;
    bVar1 = false;
    local_78 = lVar5;
    if (lVar5 != 0) {
      FUN_00503af0();
      _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      local_88 = lVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = lVar5 != 0;
    }
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    local_79 = bVar1;
    if ((local_78 != 0) && (!bVar1)) {
      FUN_00504214(local_78);
    }
    if (((local_79 & 1) == 0) && (local_48 < 0x14)) {
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
      lVar4 = local_30;
      local_98 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
      uVar3 = local_38;
      local_a0 = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
      uVar6 = local_40;
      local_a8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
      local_b0 = uVar6;
      dVar7 = _dispatch_time(0,800000000);
      puVar2 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_98;
      local_f8 = PTR___NSConcreteStackBlock_02578660;
      local_f0 = 0xc2000000;
      local_ec = 0;
      local_e8 = FUN_00504348;
      local_e0 = &DAT_0257d7c8;
      (*(code *)PTR__objc_retain_02578638)();
      lVar4 = local_a0;
      local_d8 = uVar3;
      (*(code *)PTR__objc_retain_02578638)();
      uVar6 = local_a8;
      local_d0 = lVar4;
      (*(code *)PTR__objc_retain_02578638)();
      uVar3 = local_b0;
      local_c8 = uVar6;
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = uVar3;
      local_b8 = local_48;
      _dispatch_after(dVar7,puVar2,&local_f8);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_storeStrong(&local_c0);
      _objc_storeStrong(&local_c8,0);
      _objc_storeStrong(&local_d0,0);
      _objc_storeStrong(&local_d8,0);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_a8,0);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_98,0);
      local_58 = 0;
    }
    else {
      uVar8 = local_48 - 0x14;
      if (0x13 < local_48) {
        uVar8 = (ulong)local_79;
      }
      FUN_00502d98(uVar8,local_28,local_30,local_38,local_40);
      local_58 = 1;
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

