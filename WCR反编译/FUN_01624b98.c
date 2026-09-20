// FUN_01624b98 @ 01624b98

void FUN_01624b98(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1b0;
  cfstringStruct *local_148;
  cfstringStruct *local_138;
  cfstringStruct *local_120;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  bool local_c1;
  cfstringStruct *local_c0;
  byte local_b1;
  cfstringStruct *local_b0;
  byte local_a1;
  cfstringStruct *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  byte local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  bool local_61;
  cfstringStruct *local_60;
  byte local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_28 = (cfstringStruct *)0x0;
    local_34 = 1;
    goto LAB_01625a18;
  }
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_action)
  ;
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  FUN_01618794();
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_28 = (cfstringStruct *)0x0;
    local_34 = 1;
  }
  else {
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_setObject_forKeyedSubscript__0269d248,local_40,&cf_action);
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_01618794();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_51 = 0;
    local_61 = false;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_120 = &cf__g_TTR;
    }
    else {
      local_120 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      local_51 = 1;
      local_50 = local_120;
      FUN_01618794();
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_120;
    }
    local_61 = pcVar4 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,local_120,&cf_title);
    if ((local_61 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrDefaultTitle);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_01618794();
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    local_79 = 0;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_138 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_138;
    }
    else {
      local_138 = local_70;
    }
    local_79 = pcVar2 == (cfstringStruct *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,local_138,&cf__wcrDefaultTitle);
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrDefaultIcon);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_01618794();
    _objc_retainAutoreleasedReturnValue();
    local_88 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
    local_91 = 0;
    local_a1 = 0;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_148 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
      _objc_retainAutoreleasedReturnValue();
      local_91 = 1;
      local_90 = local_148;
      FUN_01618794();
      _objc_retainAutoreleasedReturnValue();
      local_a0 = local_148;
    }
    else {
      local_148 = local_88;
    }
    local_a1 = pcVar2 == (cfstringStruct *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,local_148,&cf__wcrDefaultIcon);
    if ((local_a1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    if ((local_91 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_01618794();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar3,&cf_icon);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithBool__0269ce60,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf__wcrEnabled);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrSource);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_01618794();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_b1 = 0;
    local_c1 = false;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_1b0 = &cf_external;
    }
    else {
      local_1b0 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrSource);
      _objc_retainAutoreleasedReturnValue();
      local_b1 = 1;
      local_b0 = local_1b0;
      FUN_01618794();
      _objc_retainAutoreleasedReturnValue();
      local_c0 = local_1b0;
    }
    local_c1 = pcVar4 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,local_1b0,&cf__wcrSource);
    if ((local_c1 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_c0);
    }
    if ((local_b1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomTitle);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_01618794();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
    if (pcVar2 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,local_d0,&cf__wcrCustomTitle);
    }
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomIcon);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_01618794();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
    if (pcVar2 != (cfstringStruct *)0x0) {
      pcVar2 = (cfstringStruct *)PTR_WCRefinePluginIconCatalog_026ce4e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePluginIconCatalog_026ce4e0,PTR_s_normalizedAlbumIconValue__026aee98,
                 local_d8);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_1d0 = local_d8;
      }
      else {
        local_1d0 = local_e0;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,local_1d0,&cf__wcrCustomIcon);
      pcVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_01618794();
      _objc_retainAutoreleasedReturnValue();
      local_e8 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
      if ((((pcVar2 == (cfstringStruct *)0x0) ||
           (pcVar2 = local_e8,
           (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_isEqualToString__0269ccc8,local_d8),
           ((ulong)pcVar2 & 1) != 0)) ||
          (pcVar2 = local_e8,
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_hasPrefix__0269d320,&cf__),
          ((ulong)pcVar2 & 1) != 0)) ||
         ((pcVar2 = local_e8,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e8,PTR_s_containsString__0269d0b0,&cf__PluginIcons_),
          ((ulong)pcVar2 & 1) != 0 ||
          (pcVar2 = local_e8,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e8,PTR_s_containsString__0269d0b0,&cf__SuperFloat_icon_),
          ((ulong)pcVar2 & 1) != 0)))) {
        pcVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomIcon);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,pcVar2,&cf_icon);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      _objc_storeStrong(&local_e8);
      _objc_storeStrong(&local_e0,0);
    }
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomKind);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_01618794();
    _objc_retainAutoreleasedReturnValue();
    local_f0 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
    if (pcVar2 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,local_f0,&cf__wcrCustomKind);
    }
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomPayload);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_f8 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    pcVar2 = local_f8;
    if (((ulong)pcVar3 & 1) == 0) {
      puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      pcVar3 = local_f8;
      if (((ulong)pcVar2 & 1) != 0) goto LAB_01625858;
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((ulong)pcVar3 & 1) != 0) goto LAB_01625858;
    }
    else {
LAB_01625858:
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,local_f8,&cf__wcrCustomPayload
                );
    }
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrLocalIcon);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if (pcVar2 != (cfstringStruct *)0x0) {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithBool__0269ce60,pcVar3);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,&cf__wcrLocalIcon);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    pcVar2 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar2;
    local_34 = 1;
    _objc_storeStrong(&local_f8);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_40,0);
LAB_01625a18:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

