// FUN_006cc690 @ 006cc690

void FUN_006cc690(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  dispatch_time_t dVar8;
  ulong local_1b8;
  ulong local_1a0;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  undefined *local_f0;
  ulong local_e8;
  cfstringStruct *local_e0;
  ulong local_d8;
  undefined *local_d0;
  undefined *local_c8;
  ulong local_c0;
  double local_b8;
  ulong local_b0;
  double local_a8;
  byte local_99;
  ulong local_98;
  byte local_89;
  ulong local_88;
  ulong local_80;
  cfstringStruct *local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_5a;
  undefined1 local_59;
  undefined *local_58;
  undefined4 local_50;
  ulong local_40;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_30 = param_3;
  local_28 = param_2;
  _objc_storeStrong(&local_38,param_4);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  puVar2 = PTR_WCRefineDoNotDisturbSupport_026ce118;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineDoNotDisturbSupport_026ce118,PTR_s_isEffectivelyActive_0269d708);
  if (((ulong)puVar2 & 1) == 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_redEnvelopAutoReplyEnable_026a6aa0);
    puVar2 = PTR_WCRefineHelper_026ce000;
    if (((ulong)puVar3 & 1) == 0) {
      local_50 = 1;
    }
    else {
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_sessionUserName_026a6a48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isOfficialAccountOrBrandUserName_0269d4e8);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      if (((ulong)puVar2 & 1) == 0) {
        uVar4 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isGroupSender_026a69e8);
        local_59 = (undefined1)uVar4;
        if (((uVar4 & 1) == 0) ||
           (puVar2 = local_58,
           (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_redEnvelopSelfAutoReply_026a6aa8),
           ((ulong)puVar2 & 1) != 0)) {
          uVar4 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_sessionUserName_026a6a48);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar4;
          puVar2 = PTR_s_rangeOfString__0269d838;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = uVar5 != 0x7fffffffffffffff;
          local_70 = uVar5;
          local_68 = puVar2;
          (*(code *)PTR__objc_release_02578630)(uVar4);
          local_5a = bVar1;
          if ((bVar1) &&
             (puVar2 = local_58,
             (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_redEnvelopGroupAutoReply_026a6ab0)
             , ((ulong)puVar2 & 1) == 0)) {
            local_50 = 1;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_78 = &cf___;
            uVar4 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_receiveAmount);
            _objc_retainAutoreleasedReturnValue();
            local_89 = 0;
            local_99 = 0;
            local_1a0 = uVar4;
            if (uVar4 == 0) {
              local_1b8 = local_40;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_receive_amount);
              _objc_retainAutoreleasedReturnValue();
              local_89 = 1;
              local_88 = local_1b8;
              if (local_1b8 == 0) {
                local_1b8 = local_40;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_amount);
                _objc_retainAutoreleasedReturnValue();
                local_99 = 1;
                local_98 = local_1b8;
              }
              local_1a0 = local_1b8;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_80 = local_1a0;
            if ((local_99 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_98);
            }
            if ((local_89 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_88);
            }
            (*(code *)PTR__objc_release_02578630)(uVar4);
            uVar4 = local_80;
            if (local_80 != 0) {
              puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
              uVar5 = local_80;
              if ((uVar4 & 1) == 0) {
                puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
                uVar4 = local_80;
                if ((uVar5 & 1) != 0) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_b0 = uVar4;
                  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_doubleValue_026ca608);
                  if ((param_1 <= 0.0) || (10000.0 <= param_1)) {
                    local_b8 = param_1;
                    if (10000.0 <= param_1) {
                      local_b8 = param_1 / 100.0;
                    }
                  }
                  else {
                    local_b8 = param_1 / 100.0;
                  }
                  if (local_b8 == (double)(long)local_b8) {
                    pcVar6 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                               &cf___0f);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar7 = local_78;
                    local_78 = pcVar6;
                    (*(code *)PTR__objc_release_02578630)(pcVar7);
                  }
                  else {
                    pcVar6 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                               &cf___2f);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar7 = local_78;
                    local_78 = pcVar6;
                    (*(code *)PTR__objc_release_02578630)(pcVar7);
                  }
                  _objc_storeStrong(&local_b0,0);
                }
              }
              else {
                _objc_storeStrong(&local_78,local_80);
                (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_doubleValue_026ca608);
                local_a8 = param_1;
                if (0.0 < param_1) {
                  if ((param_1 <= 0.0) || (10000.0 <= param_1)) {
                    if (10000.0 <= param_1) {
                      local_a8 = param_1 / 100.0;
                    }
                  }
                  else {
                    local_a8 = param_1 / 100.0;
                  }
                  if (local_a8 == (double)(long)local_a8) {
                    pcVar6 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                               &cf___0f);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar7 = local_78;
                    local_78 = pcVar6;
                    (*(code *)PTR__objc_release_02578630)(pcVar7);
                  }
                  else {
                    pcVar6 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                               &cf___2f);
                    _objc_retainAutoreleasedReturnValue();
                    pcVar7 = local_78;
                    local_78 = pcVar6;
                    (*(code *)PTR__objc_release_02578630)(pcVar7);
                  }
                }
              }
            }
            pcVar7 = local_78;
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
            if (pcVar7 == (cfstringStruct *)0x0) {
              _objc_storeStrong(&local_78,&cf_0_00);
            }
            uVar4 = local_38;
            FUN_006d18c4();
            _objc_retainAutoreleasedReturnValue();
            local_c0 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
            if (uVar4 == 0) {
              _objc_storeStrong(&local_c0,&cf__gw);
            }
            puVar2 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            local_c8 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_redEnvelopAutoReplyDelaySeconds_026a6ab8);
            local_d0 = puVar2;
            dVar8 = _dispatch_time(0,(long)puVar2 * 1000000000);
            puVar2 = PTR___dispatch_main_q_02578680;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = local_c8;
            local_110 = PTR___NSConcreteStackBlock_02578660;
            local_108 = 0xc2000000;
            local_104 = 0;
            local_100 = FUN_006d1f8c;
            local_f8 = &DAT_0257b6a8;
            (*(code *)PTR__objc_retain_02578638)();
            uVar4 = local_38;
            local_f0 = puVar3;
            (*(code *)PTR__objc_retain_02578638)();
            pcVar7 = local_78;
            local_e8 = uVar4;
            (*(code *)PTR__objc_retain_02578638)();
            uVar4 = local_c0;
            local_e0 = pcVar7;
            (*(code *)PTR__objc_retain_02578638)();
            local_d8 = uVar4;
            _dispatch_after(dVar8,puVar2,&local_110);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            _objc_storeStrong(&local_d8);
            _objc_storeStrong(&local_e0,0);
            _objc_storeStrong(&local_e8,0);
            _objc_storeStrong(&local_f0,0);
            _objc_storeStrong(&local_c8,0);
            _objc_storeStrong(&local_c0,0);
            _objc_storeStrong(&local_80,0);
            _objc_storeStrong(&local_78,0);
            local_50 = 0;
          }
        }
        else {
          local_50 = 1;
        }
      }
      else {
        local_50 = 1;
      }
    }
    _objc_storeStrong(&local_58,0);
  }
  else {
    local_50 = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

