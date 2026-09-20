// FUN_006d41d8 @ 006d41d8

byte FUN_006d41d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  cfstringStruct *local_1b8;
  cfstringStruct *local_170;
  cfstringStruct *local_130;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  byte local_99;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  byte local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  byte local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined4 local_58;
  long local_48;
  undefined8 local_40;
  long local_38;
  cfstringStruct *local_30;
  byte local_21;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  pcVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (lVar3 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    local_21 = 0;
    local_58 = 1;
  }
  else {
    puVar1 = PTR_WCRefineMessageRepositoryStore_026ce120;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageRepositoryStore_026ce120,PTR_s_isCompositeItem__0269d720,local_30)
    ;
    if (((ulong)puVar1 & 1) == 0) {
      local_69 = 0;
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_type);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar4 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((ulong)pcVar4 & 1) == 0) {
        local_130 = &cf___;
      }
      else {
        local_130 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_type);
        _objc_retainAutoreleasedReturnValue();
        local_69 = 1;
        local_68 = local_130;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_130;
      if ((local_69 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,&cf_text);
      if (((ulong)pcVar2 & 1) == 0) {
        local_a8 = (cfstringStruct *)0x0;
        pcVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_localId);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
        if (((ulong)pcVar2 & 1) != 0) {
          pcVar2 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_integerValue_026ca750);
          local_a8 = pcVar2;
        }
        pcVar2 = local_a8;
        FUN_006d5034();
        _objc_retainAutoreleasedReturnValue();
        local_b8 = pcVar2;
        if (pcVar2 == (cfstringStruct *)0x0) {
          local_21 = 0;
        }
        else {
          FUN_006d5278(pcVar2,local_38);
          local_21 = (byte)pcVar2 & 1;
        }
        local_58 = 1;
        _objc_storeStrong(&local_b8);
        _objc_storeStrong(&local_b0,0);
      }
      else {
        local_81 = 0;
        pcVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        pcVar4 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        if (((ulong)pcVar4 & 1) == 0) {
          local_170 = &cf___;
        }
        else {
          local_170 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
          _objc_retainAutoreleasedReturnValue();
          local_81 = 1;
          local_80 = local_170;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_78 = local_170;
        if ((local_81 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_80);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar4 = local_78;
        FUN_006d4ad4(local_78,local_40,local_48);
        _objc_retainAutoreleasedReturnValue();
        local_90 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
        lVar3 = local_38;
        pcVar2 = local_90;
        puVar1 = PTR_WCRefineHelper_026ce000;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_21 = 0;
        }
        else {
          local_99 = 0;
          lVar5 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
          if (lVar5 == 0) {
            local_1b8 = &cf___;
          }
          else {
            local_1b8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____)
            ;
            _objc_retainAutoreleasedReturnValue();
            local_99 = 1;
            local_98 = local_1b8;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_sendOutgoingText_toContactUsrNam_0269d780,pcVar2,lVar3,local_1b8);
          if ((local_99 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_98);
          }
          local_21 = 1;
        }
        local_58 = 1;
        _objc_storeStrong(&local_90);
        _objc_storeStrong(&local_78,0);
      }
      _objc_storeStrong(&local_60,0);
    }
    else {
      puVar1 = PTR_WCRefineVoicePackSender_026ce128;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineVoicePackSender_026ce128,
                 PTR_s_sendRepositoryItem_toChatName_co_0269d728,local_30,local_38,0);
      local_21 = (byte)puVar1 & 1;
      local_58 = 1;
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

