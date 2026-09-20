// FUN_0003c8d8 @ 0003c8d8

void FUN_0003c8d8(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  long lVar5;
  cfstringStruct *local_1e8;
  cfstringStruct *local_198;
  cfstringStruct *local_158;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  byte local_a1;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  byte local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  byte local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  long local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_38;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  puVar1 = PTR_WCRefineDoNotDisturbSupport_026ce118;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineDoNotDisturbSupport_026ce118,PTR_s_isEffectivelyActive_0269d708);
  if (((ulong)puVar1 & 1) == 0) {
    pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_autoAcceptTransferReplyEnabled_0269d710);
    if (((ulong)pcVar2 & 1) == 0) {
      local_38 = 1;
    }
    else {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_autoAcceptTransferReplyContent_0269d718);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_000370d0();
      _objc_retainAutoreleasedReturnValue();
      local_48 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      lVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_session);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      FUN_0003102c();
      _objc_retainAutoreleasedReturnValue();
      local_50 = lVar5;
      (*(code *)PTR__objc_release_02578630)(lVar4);
      pcVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      if (((pcVar2 == (cfstringStruct *)0x0) ||
          (lVar4 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
          lVar4 == 0)) ||
         (puVar1 = PTR_WCRefineHelper_026ce000,
         (*(code *)PTR__objc_msgSend_02578628)
                   (PTR_WCRefineHelper_026ce000,PTR_s_isOfficialAccountOrBrandUserName_0269d4e8,
                    local_50), ((ulong)puVar1 & 1) != 0)) {
        local_38 = 1;
      }
      else {
        pcVar2 = local_48;
        FUN_0003dff4(local_48,local_40);
        _objc_retainAutoreleasedReturnValue();
        local_58 = pcVar2;
        if (pcVar2 == (cfstringStruct *)0x0) {
          pcVar2 = local_48;
          FUN_0003e71c(local_48,local_28);
          _objc_retainAutoreleasedReturnValue();
          local_b8 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
          if (pcVar2 != (cfstringStruct *)0x0) {
            FUN_0003f3a0(pcVar2,local_b8,local_28,local_50);
          }
          _objc_storeStrong(&local_b8,0);
          local_38 = 0;
        }
        else {
          puVar1 = PTR_WCRefineMessageRepositoryStore_026ce120;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineMessageRepositoryStore_026ce120,PTR_s_isCompositeItem__0269d720,
                     pcVar2);
          if (((ulong)puVar1 & 1) == 0) {
            local_69 = 0;
            pcVar2 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_type);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            pcVar3 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
            if (((ulong)pcVar3 & 1) == 0) {
              local_158 = &cf___;
            }
            else {
              local_158 = local_58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_type);
              _objc_retainAutoreleasedReturnValue();
              local_69 = 1;
              local_68 = local_158;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_60 = local_158;
            if ((local_69 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_68);
            }
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            pcVar2 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,&cf_text)
            ;
            if (((ulong)pcVar2 & 1) == 0) {
              local_a1 = 0;
              pcVar2 = local_58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_localId);
              _objc_retainAutoreleasedReturnValue();
              pcVar3 = pcVar2;
              (*(code *)PTR__objc_msgSend_02578628)();
              if (((ulong)pcVar3 & 1) == 0) {
                local_1e8 = (cfstringStruct *)0x0;
              }
              else {
                local_1e8 = local_58;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_localId);
                _objc_retainAutoreleasedReturnValue();
                local_a1 = 1;
                local_a0 = local_1e8;
                (*(code *)PTR__objc_msgSend_02578628)();
              }
              if ((local_a1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_a0);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar2);
              local_98 = local_1e8;
              FUN_0003fb2c();
              _objc_retainAutoreleasedReturnValue();
              local_b0 = local_1e8;
              if (local_1e8 != (cfstringStruct *)0x0) {
                FUN_0003fcb0(local_1e8,local_50);
              }
              local_38 = 1;
              _objc_storeStrong(&local_b0,0);
            }
            else {
              local_81 = 0;
              pcVar2 = local_58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
              _objc_retainAutoreleasedReturnValue();
              puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              pcVar3 = pcVar2;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
              if (((ulong)pcVar3 & 1) == 0) {
                local_198 = &cf___;
              }
              else {
                local_198 = local_58;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
                _objc_retainAutoreleasedReturnValue();
                local_81 = 1;
                local_80 = local_198;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_78 = local_198;
              if ((local_81 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_80);
              }
              (*(code *)PTR__objc_release_02578630)(pcVar2);
              pcVar2 = local_78;
              FUN_0003e71c(local_78,local_28);
              _objc_retainAutoreleasedReturnValue();
              local_90 = pcVar2;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
              if (pcVar2 != (cfstringStruct *)0x0) {
                FUN_0003f3a0(pcVar2,local_90,local_28,local_50);
              }
              local_38 = 1;
              _objc_storeStrong(&local_90);
              _objc_storeStrong(&local_78,0);
            }
            _objc_storeStrong(&local_60,0);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineVoicePackSender_026ce128,
                       PTR_s_sendRepositoryItem_toChatName_co_0269d728,local_58,local_50,0);
            local_38 = 1;
          }
        }
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  else {
    local_38 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

