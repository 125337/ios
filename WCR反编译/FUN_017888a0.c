// FUN_017888a0 @ 017888a0

void FUN_017888a0(undefined8 param_1,undefined8 param_2,byte param_3)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined8 local_1d8;
  cfstringStruct *local_130;
  cfstringStruct *local_108;
  cfstringStruct *local_e0;
  undefined *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  undefined *local_b8 [4];
  cfstringStruct *local_98;
  undefined *local_90;
  bool local_81;
  cfstringStruct *local_80;
  byte local_71;
  undefined *local_70;
  cfstringStruct *local_68;
  undefined4 local_60;
  bool local_59;
  cfstringStruct *local_58;
  byte local_49;
  undefined *local_48;
  cfstringStruct *local_40;
  byte local_31;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  pcVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_31 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_108 = local_28;
  local_49 = 0;
  local_59 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_108 = &cf___;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_stringByTrimmingCharactersInSet__0269d0c0)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_108;
  }
  local_59 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_108;
  if ((local_59 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  pcVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  pcVar3 = local_30;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_60 = 1;
    goto LAB_017892a0;
  }
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_130 = local_30;
  local_71 = 0;
  local_81 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_130 = &cf___;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_70 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_stringByTrimmingCharactersInSet__0269d0c0)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_80 = local_130;
  }
  local_81 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_130;
  if ((local_81 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  pcVar3 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_60 = 0;
    }
    else {
      pcVar3 = local_68;
      FUN_01791da8();
      _objc_retainAutoreleasedReturnValue();
      local_c0 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_60 = 1;
      }
      else {
        pcVar3 = local_c0;
        FUN_01792684();
        local_c8 = pcVar3;
        FUN_01792cd0(pcVar3,local_40,local_31 & 1);
        if (((ulong)pcVar3 & 1) == 0) {
          pcVar3 = local_c0;
          FUN_017935c0();
          _objc_retainAutoreleasedReturnValue();
          local_d0 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
          if (pcVar3 != (cfstringStruct *)0x0) {
            local_d8 = (undefined *)0x0;
            puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar2);
            if (((ulong)puVar5 & 1) != 0) {
              puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,
                         PTR_s_dictionaryWithContentsOfFile__026a3348,local_d0);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = local_d8;
              local_d8 = puVar5;
              (*(code *)PTR__objc_release_02578630)(puVar2);
            }
            if (local_d8 == (undefined *)0x0) {
              puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = local_d8;
              local_d8 = puVar5;
              (*(code *)PTR__objc_release_02578630)(puVar2);
            }
            puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
                       local_31 & 1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,local_40);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            pcVar3 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0,PTR_s_stringByDeletingLastPathComponen_0269fb90);
            _objc_retainAutoreleasedReturnValue();
            local_e0 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
            if (pcVar3 != (cfstringStruct *)0x0) {
              puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar2);
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_writeToFile_atomically__0269f928,local_d0,1);
            _objc_storeStrong(&local_e0);
            _objc_storeStrong(&local_d8,0);
          }
          if ((local_31 & 1) == 0) {
            local_1d8 = *(undefined8 *)PTR__kCFBooleanFalse_025782a0;
          }
          else {
            local_1d8 = *(undefined8 *)PTR__kCFBooleanTrue_025782a8;
          }
          _CFPreferencesSetAppValue(local_40,local_1d8,local_c0);
          _CFPreferencesAppSynchronize(local_c0);
          FUN_01792e64(local_c0);
          local_60 = 1;
          _objc_storeStrong(&local_d0,0);
        }
        else {
          FUN_01792e64(local_c0);
          local_60 = 1;
        }
      }
      _objc_storeStrong(&local_c0,0);
    }
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_40;
    local_90 = puVar2;
    FUN_01791bb4();
    local_98 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
LAB_01788d94:
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_b8[0] = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_31 & 1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8[0],PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,local_40);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_b8[0]);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,PTR_s_postGlobalSettingsChangedNotific_026a6558);
      local_60 = 1;
      _objc_storeStrong(local_b8,0);
    }
    else {
      puVar5 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_respondsToSelector__026ca818,pcVar3);
      puVar2 = local_90;
      if (((ulong)puVar5 & 1) == 0) goto LAB_01788d94;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_31 & 1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setValue_forKey__0269d300,puVar5,local_40);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,PTR_s_postGlobalSettingsChangedNotific_026a6558);
      local_60 = 1;
    }
    _objc_storeStrong(&local_90,0);
  }
  _objc_storeStrong(&local_68,0);
LAB_017892a0:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

