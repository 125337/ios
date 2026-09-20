// FUN_0041694c @ 0041694c

void FUN_0041694c(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_190;
  cfstringStruct *local_150;
  cfstringStruct *local_110;
  cfstringStruct *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  byte local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  byte local_61;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined4 local_50;
  byte local_39;
  undefined8 local_38;
  long local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  pcVar2 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_39 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((ulong)pcVar2 & 1) == 0) ||
     (lVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    local_50 = 1;
  }
  else {
    local_61 = 0;
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_type)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar4 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    if (((ulong)pcVar4 & 1) == 0) {
      local_110 = &cf___;
    }
    else {
      local_110 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_type);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = local_110;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_110;
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    puVar1 = PTR_WCRefineMessageRepositoryStore_026ce120;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageRepositoryStore_026ce120,PTR_s_isCompositeItem__0269d720,local_28)
    ;
    if (((ulong)puVar1 & 1) == 0) {
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,&cf_text);
      if (((ulong)pcVar2 & 1) == 0) {
        local_91 = 0;
        pcVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_localId);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (((ulong)pcVar4 & 1) == 0) {
          local_190 = (cfstringStruct *)0x0;
        }
        else {
          local_190 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_localId);
          _objc_retainAutoreleasedReturnValue();
          local_91 = 1;
          local_90 = local_190;
          (*(code *)PTR__objc_msgSend_02578628)();
        }
        if ((local_91 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_90);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        local_88 = local_190;
        FUN_004172fc();
        _objc_retainAutoreleasedReturnValue();
        local_a0 = local_190;
        if (local_190 != (cfstringStruct *)0x0) {
          FUN_0041752c(local_190,local_30);
        }
        _objc_storeStrong(&local_a0,0);
        local_50 = 0;
      }
      else {
        local_79 = 0;
        pcVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        pcVar4 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        if (((ulong)pcVar4 & 1) == 0) {
          local_150 = &cf___;
        }
        else {
          local_150 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
          _objc_retainAutoreleasedReturnValue();
          local_79 = 1;
          local_78 = local_150;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = local_150;
        if ((local_79 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_78);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        pcVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
        if (pcVar2 != (cfstringStruct *)0x0) {
          FUN_00414e40(local_70,local_30,local_38,local_39 & 1);
          FUN_00415f58(local_30,local_70);
        }
        local_50 = 1;
        _objc_storeStrong(&local_70,0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineVoicePackSender_026ce128,
                 PTR_s_sendRepositoryItem_toChatName_co_0269d728,local_28,local_30,0);
      local_50 = 1;
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

