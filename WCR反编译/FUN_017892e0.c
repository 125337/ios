// FUN_017892e0 @ 017892e0

byte FUN_017892e0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  uint local_1b0;
  int local_1ac;
  cfstringStruct *local_160;
  cfstringStruct *local_138;
  cfstringStruct *local_118;
  char local_10a;
  char local_109;
  undefined *local_108;
  undefined *local_100;
  byte local_f1;
  undefined *local_f0;
  cfstringStruct *local_e8;
  byte local_d9;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined *local_c8 [4];
  undefined *local_a8;
  cfstringStruct *local_a0;
  undefined *local_98;
  bool local_89;
  cfstringStruct *local_88;
  byte local_79;
  undefined *local_78;
  cfstringStruct *local_70;
  uint local_68;
  bool local_61;
  cfstringStruct *local_60;
  byte local_51;
  undefined *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  byte local_29;
  cfstringStruct *local_28;
  
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_1);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_2);
  pcVar3 = local_38;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_138 = local_38;
  local_51 = 0;
  local_61 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_138 = &cf___;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_stringByTrimmingCharactersInSet__0269d0c0)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_138;
  }
  local_61 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_138;
  if ((local_61 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  pcVar4 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  pcVar3 = local_40;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_29 = 0;
    local_68 = 1;
    goto LAB_01789cac;
  }
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_160 = local_40;
  local_79 = 0;
  local_89 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_160 = &cf___;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    local_78 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_stringByTrimmingCharactersInSet__0269d0c0)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_88 = local_160;
  }
  local_89 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_160;
  if ((local_89 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  pcVar3 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_29 = (byte)puVar5 & 1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_68 = 1;
    }
    else {
      pcVar3 = local_70;
      FUN_01791da8();
      _objc_retainAutoreleasedReturnValue();
      local_d0 = pcVar3;
      FUN_01792684();
      local_d9 = 0;
      local_d8 = pcVar3;
      FUN_01793db0(pcVar3,local_48,&local_d9);
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar3 = local_d0;
        FUN_017935c0();
        _objc_retainAutoreleasedReturnValue();
        local_e8 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
        local_f1 = 0;
        local_1b0 = 0;
        if (pcVar3 != (cfstringStruct *)0x0) {
          puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          local_f1 = 1;
          local_f0 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_1b0 = (uint)puVar2;
        }
        if ((local_f1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_f0);
        }
        if ((local_1b0 & 1) == 0) {
LAB_01789b10:
          local_109 = '\0';
          pcVar3 = local_48;
          _CFPreferencesGetAppBooleanValue(local_48,local_d0,&local_109);
          local_10a = (char)pcVar3;
          if (local_109 == '\0') {
            pcVar3 = local_48;
            _CFPreferencesCopyAppValue(local_48,local_d0);
            local_28 = pcVar3;
            _objc_autoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            local_118 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
            if (((ulong)pcVar3 & 1) == 0) {
              local_29 = 0;
            }
            else {
              pcVar3 = local_118;
              (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_boolValue_026ca540);
              local_29 = (byte)pcVar3 & 1;
            }
            local_68 = 1;
            _objc_storeStrong(&local_118,0);
          }
          else {
            local_29 = local_10a != '\0';
            local_68 = 1;
          }
        }
        else {
          puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithContentsOfFile__026a3348,local_e8);
          _objc_retainAutoreleasedReturnValue();
          local_100 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_objectForKeyedSubscript__0269d098,local_48);
          _objc_retainAutoreleasedReturnValue();
          local_108 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
          bVar1 = ((ulong)puVar2 & 1) != 0;
          if (bVar1) {
            puVar2 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_boolValue_026ca540);
            local_29 = (byte)puVar2 & 1;
          }
          local_68 = (uint)bVar1;
          _objc_storeStrong(&local_108);
          _objc_storeStrong(&local_100,0);
          if (local_68 == 0) goto LAB_01789b10;
        }
        _objc_storeStrong(&local_e8,0);
      }
      else {
        local_29 = local_d9 & 1;
        local_68 = 1;
      }
      _objc_storeStrong(&local_d0,0);
    }
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_48;
    local_98 = puVar2;
    _NSSelectorFromString();
    puVar2 = local_98;
    local_a0 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_respondsToSelector__026ca818,pcVar3);
    if (((ulong)puVar2 & 1) == 0) {
LAB_017897f0:
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_c8[0] = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_c8[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8[0],PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
      if (((ulong)puVar2 & 1) == 0) {
        local_1ac = 0;
      }
      else {
        puVar2 = local_c8[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_c8[0],PTR_s_boolValue_026ca540);
        local_1ac = (int)puVar2;
      }
      local_29 = local_1ac != 0;
      local_68 = 1;
      _objc_storeStrong(local_c8,0);
    }
    else {
      puVar2 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_valueForKey__0269d128,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
      bVar1 = ((ulong)puVar2 & 1) != 0;
      if (bVar1) {
        puVar2 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_boolValue_026ca540);
        local_29 = (byte)puVar2 & 1;
      }
      local_68 = (uint)bVar1;
      _objc_storeStrong(&local_a8,0);
      if (local_68 == 0) goto LAB_017897f0;
    }
    _objc_storeStrong(&local_98,0);
  }
  _objc_storeStrong(&local_70,0);
LAB_01789cac:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return local_29 & 1;
}

