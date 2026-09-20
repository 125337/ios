// _WCRSuperFloatAddCustomAction @ 0161e7ec

byte _WCRSuperFloatAddCustomAction(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *local_220;
  cfstringStruct *local_1c8;
  undefined *local_198;
  long local_190;
  byte local_181;
  undefined *local_180;
  undefined *local_178;
  byte local_169;
  cfstringStruct *local_168;
  byte local_159;
  undefined *local_158;
  byte local_149;
  undefined *local_148;
  byte local_139;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  byte local_119;
  long local_118;
  undefined4 local_10c;
  ulong local_108;
  long local_100;
  long local_f8;
  ulong local_f0;
  long local_e8;
  byte local_d9;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  cfstringStruct *local_50;
  long local_48;
  long local_40;
  cfstringStruct *local_38;
  ulong local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e8 = 0;
  _objc_storeStrong(&local_e8,param_1);
  local_f0 = 0;
  _objc_storeStrong(&local_f0,param_2);
  local_f8 = 0;
  _objc_storeStrong(&local_f8,param_3);
  lVar1 = local_e8;
  FUN_01618794();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_f0;
  local_100 = lVar1;
  FUN_01618794();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_100;
  local_108 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (uVar2 = local_108, (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_d9 = 0;
    local_10c = 1;
  }
  else {
    lVar1 = local_f8;
    FUN_01618794();
    _objc_retainAutoreleasedReturnValue();
    local_118 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      _objc_storeStrong(&local_118,&cf_icons_outlined_more_circle);
    }
    uVar2 = local_108;
    FUN_0161f210();
    local_119 = (byte)uVar2;
    local_128 = &cf_controller;
    if ((uVar2 & 1) == 0) {
      local_128 = &cf_auto;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_139 = 0;
    local_149 = 0;
    local_159 = 0;
    local_169 = 0;
    if ((local_119 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSUUID_026ce668;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
      _objc_retainAutoreleasedReturnValue();
      local_149 = 1;
      local_148 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_159 = 1;
      local_1c8 = &cf_wcr_sf_custom_;
      local_158 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (&cf_wcr_sf_custom_,PTR_s_stringByAppendingString__0269d398);
      _objc_retainAutoreleasedReturnValue();
      local_169 = 1;
      local_168 = local_1c8;
    }
    else {
      local_1c8 = &cf_wcr_sf_vc_;
      (*(code *)PTR__objc_msgSend_02578628)
                (&cf_wcr_sf_vc_,PTR_s_stringByAppendingString__0269d398,local_108);
      _objc_retainAutoreleasedReturnValue();
      local_139 = 1;
      local_138 = local_1c8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = local_1c8;
    if ((local_169 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_168);
    }
    if ((local_159 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_158);
    }
    if ((local_149 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_148);
    }
    if ((local_139 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_138);
    }
    local_d8 = &cf_title;
    local_80 = local_100;
    local_d0 = &cf__wcrDefaultTitle;
    local_78 = local_100;
    local_c8 = &cf__wcrDefaultIcon;
    local_70 = local_118;
    local_c0 = &cf_icon;
    local_68 = local_118;
    local_b8 = &cf_action;
    local_60 = local_130;
    local_b0 = &cf__wcrEnabled;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = &cf__wcrSource;
    local_50 = &cf__u7b_IN;
    local_a0 = &cf__wcrCustomTitle;
    local_48 = local_100;
    local_98 = &cf__wcrCustomIcon;
    local_40 = local_118;
    local_90 = &cf__wcrCustomKind;
    local_38 = local_128;
    local_88 = &cf__wcrCustomPayload;
    local_30 = local_108;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_58 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_80,&local_d8,0xb);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_178 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)();
    _WCRSuperFloatRefreshActions();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_180 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_181 = 0;
    for (local_190 = 0; lVar1 = local_190, puVar3 = local_180,
        (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_count_0269cfe0), lVar1 < (long)puVar3;
        local_190 = local_190 + 1) {
      puVar3 = local_180;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_180,PTR_s_objectAtIndexedSubscript__0269cc78,local_190);
      _objc_retainAutoreleasedReturnValue();
      if ((local_119 & 1) == 0) {
        local_220 = &cf___;
      }
      else {
        local_220 = local_130;
      }
      puVar4 = puVar3;
      FUN_0162067c(puVar3,local_220,local_108);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (((ulong)puVar4 & 1) != 0) {
        puVar3 = local_180;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_180,PTR_s_objectAtIndexedSubscript__0269cc78,local_190);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_198 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_198,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf__wcrEnabled);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_198,PTR_s_setObject_forKeyedSubscript__0269d248,local_100,&cf_title);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_198,PTR_s_setObject_forKeyedSubscript__0269d248,local_100,
                   &cf__wcrCustomTitle);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_198,PTR_s_setObject_forKeyedSubscript__0269d248,local_118,&cf_icon);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_198,PTR_s_setObject_forKeyedSubscript__0269d248,local_118,
                   &cf__wcrCustomIcon);
        puVar3 = local_198;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_198,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomKind);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        FUN_01618794();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (puVar5 == (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_198,PTR_s_setObject_forKeyedSubscript__0269d248,local_128,
                     &cf__wcrCustomKind);
        }
        puVar3 = local_198;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_198,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomPayload);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        FUN_01618794();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (puVar5 == (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_198,PTR_s_setObject_forKeyedSubscript__0269d248,local_108,
                     &cf__wcrCustomPayload);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_180,PTR_s_setObject_atIndexedSubscript__0269e970,local_198,local_190);
        local_181 = 1;
        local_10c = 2;
        _objc_storeStrong(&local_198,0);
        break;
      }
    }
    if ((local_181 & 1) == 0) {
      FUN_01617bec(local_178);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_180,PTR_s_insertObject_atIndex__0269eac0,local_178,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setProfileActions__026b1a08,local_180);
    _WCRSuperFloatNotifySettingsChanged();
    local_d9 = 1;
    local_10c = 1;
    _objc_storeStrong(&local_180);
    _objc_storeStrong(&local_178,0);
    _objc_storeStrong(&local_130,0);
    _objc_storeStrong(&local_128,0);
    _objc_storeStrong(&local_118,0);
  }
  _objc_storeStrong(&local_108);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_d9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

