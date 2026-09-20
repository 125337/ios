// FUN_000423d0 @ 000423d0

void FUN_000423d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_200;
  cfstringStruct *local_1b0;
  cfstringStruct *local_170;
  cfstringStruct *local_b8;
  byte local_a9;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  byte local_89;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  byte local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  long local_48;
  undefined4 local_40;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  puVar1 = PTR_WCRefineDoNotDisturbSupport_026ce118;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineDoNotDisturbSupport_026ce118,PTR_s_isEffectivelyActive_0269d708);
  if (((ulong)puVar1 & 1) != 0) {
    local_40 = 1;
    goto LAB_00042dcc;
  }
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_session);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  FUN_0003102c();
  _objc_retainAutoreleasedReturnValue();
  local_48 = lVar3;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  pcVar4 = local_30;
  if (lVar2 == 0) {
LAB_0004257c:
    local_40 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((((ulong)pcVar4 & 1) == 0) ||
       (puVar1 = PTR_WCRefineHelper_026ce000,
       (*(code *)PTR__objc_msgSend_02578628)
                 (PTR_WCRefineHelper_026ce000,PTR_s_isOfficialAccountOrBrandUserName_0269d4e8,
                  local_48), ((ulong)puVar1 & 1) != 0)) goto LAB_0004257c;
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_30;
    local_50 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_repositoryCode);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    FUN_000370d0();
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar4 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_40 = 1;
    }
    else {
      pcVar4 = local_58;
      FUN_0003dff4(local_58,local_50);
      _objc_retainAutoreleasedReturnValue();
      local_60 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_40 = 1;
      }
      else {
        puVar1 = PTR_WCRefineMessageRepositoryStore_026ce120;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineMessageRepositoryStore_026ce120,PTR_s_isCompositeItem__0269d720,
                   pcVar4);
        if (((ulong)puVar1 & 1) == 0) {
          local_71 = 0;
          pcVar4 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_type);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar5 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
          if (((ulong)pcVar5 & 1) == 0) {
            local_170 = &cf___;
          }
          else {
            local_170 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_type);
            _objc_retainAutoreleasedReturnValue();
            local_71 = 1;
            local_70 = local_170;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_68 = local_170;
          if ((local_71 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_70);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar4 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,&cf_text);
          if (((ulong)pcVar4 & 1) == 0) {
            local_a9 = 0;
            pcVar4 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_localId);
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            if (((ulong)pcVar5 & 1) == 0) {
              local_200 = (cfstringStruct *)0x0;
            }
            else {
              local_200 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_localId);
              _objc_retainAutoreleasedReturnValue();
              local_a9 = 1;
              local_a8 = local_200;
              (*(code *)PTR__objc_msgSend_02578628)();
            }
            if ((local_a9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_a8);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            local_a0 = local_200;
            FUN_0003fb2c();
            _objc_retainAutoreleasedReturnValue();
            local_b8 = local_200;
            if (local_200 != (cfstringStruct *)0x0) {
              FUN_0003fcb0(local_200,local_48);
            }
            _objc_storeStrong(&local_b8,0);
            local_40 = 0;
          }
          else {
            local_89 = 0;
            pcVar4 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            pcVar5 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
            if (((ulong)pcVar5 & 1) == 0) {
              local_1b0 = &cf___;
            }
            else {
              local_1b0 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_60,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
              _objc_retainAutoreleasedReturnValue();
              local_89 = 1;
              local_88 = local_1b0;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_80 = local_1b0;
            if ((local_89 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_88);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar4);
            pcVar4 = local_80;
            FUN_0003e71c(local_80,local_28);
            _objc_retainAutoreleasedReturnValue();
            local_98 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
            if (pcVar4 != (cfstringStruct *)0x0) {
              FUN_0003f3a0(pcVar4,local_98,local_28,local_48);
            }
            local_40 = 1;
            _objc_storeStrong(&local_98);
            _objc_storeStrong(&local_80,0);
          }
          _objc_storeStrong(&local_68,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineVoicePackSender_026ce128,
                     PTR_s_sendRepositoryItem_toChatName_co_0269d728,local_60,local_48,0);
          local_40 = 1;
        }
      }
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_48,0);
LAB_00042dcc:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

