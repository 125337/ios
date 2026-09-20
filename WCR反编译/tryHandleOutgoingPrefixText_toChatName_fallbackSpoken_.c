// tryHandleOutgoingPrefixText:toChatName:fallbackSpoken: @ 015a7c14

/* Function Stack Size: 0x28 bytes */

bool WCRefineVoiceCloneHelper::tryHandleOutgoingPrefixText_toChatName_fallbackSpoken_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  cfstringStruct *local_160;
  cfstringStruct *local_118;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  bool local_a9;
  cfstringStruct *local_a8;
  byte local_99;
  undefined *local_98;
  cfstringStruct *local_90;
  bool local_81;
  cfstringStruct *local_80;
  byte local_71;
  undefined *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  undefined4 local_54;
  cfstringStruct *local_50;
  long local_48;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_5);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    local_21 = 0;
    local_54 = 1;
  }
  else {
    puVar3 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_voiceCloneVisibleForCurrentUser_026a9dd8);
    if (((ulong)puVar3 & 1) == 0) {
      local_21 = 0;
      local_54 = 1;
    }
    else {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_60 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      pcVar5 = local_40;
      if (puVar3 == (undefined *)0x0) {
        local_21 = 0;
        local_54 = 1;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
        local_118 = local_40;
        local_71 = 0;
        local_81 = false;
        bVar1 = ((ulong)pcVar5 & 1) == 0;
        if (bVar1) {
          local_118 = &::cf___;
        }
        else {
          puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          local_71 = 1;
          local_70 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_118,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_80 = local_118;
        }
        local_81 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_68 = local_118;
        if ((local_81 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_80);
        }
        if ((local_71 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_70);
        }
        pcVar5 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
        if ((pcVar5 == (cfstringStruct *)0x0) ||
           (pcVar6 = local_68,
           (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_hasPrefix__0269d320,local_60),
           pcVar5 = local_68, ((ulong)pcVar6 & 1) == 0)) {
          local_21 = 0;
          local_54 = 1;
        }
        else {
          puVar3 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_substringFromIndex__0269d120,puVar3);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_90 = pcVar6;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(pcVar5);
          pcVar6 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
          pcVar5 = local_50;
          if (pcVar6 == (cfstringStruct *)0x0) {
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
            local_160 = local_50;
            local_99 = 0;
            local_a9 = false;
            bVar1 = ((ulong)pcVar5 & 1) == 0;
            if (bVar1) {
              local_160 = &::cf___;
            }
            else {
              puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                         PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
              _objc_retainAutoreleasedReturnValue();
              local_99 = 1;
              local_98 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_160,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
              _objc_retainAutoreleasedReturnValue();
              local_a8 = local_160;
            }
            local_a9 = !bVar1;
            _objc_storeStrong(&local_90,local_160);
            if ((local_a9 & 1U) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_a8);
            }
            if ((local_99 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_98);
            }
          }
          pcVar5 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
          if ((pcVar5 == (cfstringStruct *)0x0) ||
             (lVar7 = local_48,
             (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0), lVar7 == 0)) {
            local_21 = 0;
            local_54 = 1;
          }
          else {
            puVar3 = PTR_WCRefineHelper_026ce000;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,
                       &cf_ck_Wub_);
            _objc_retainAutoreleasedReturnValue();
            IVar2 = local_30;
            lVar7 = local_48;
            pcVar5 = local_90;
            local_e0 = PTR___NSConcreteStackBlock_02578660;
            local_d8 = 0xc2000000;
            local_d4 = 0;
            local_d0 = FUN_015a8380;
            local_c8 = &DAT_02586e38;
            local_b8 = puVar3;
            (*(code *)PTR__objc_retain_02578638)();
            local_c0 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar2,PTR_s_sendClonedVoiceForText_toChatNam_026a9ea8,pcVar5,lVar7,&local_e0)
            ;
            local_21 = 1;
            local_54 = 1;
            _objc_storeStrong(&local_c0);
            _objc_storeStrong(&local_b8,0);
          }
          _objc_storeStrong(&local_90,0);
        }
        _objc_storeStrong(&local_68,0);
      }
      _objc_storeStrong(&local_60,0);
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

