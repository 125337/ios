// FUN_01cf0474 @ 01cf0474

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01cf0474(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_258;
  ulong local_240;
  ulong local_228;
  ulong local_210;
  ulong local_1f8;
  ulong local_1e0;
  ulong local_1c8;
  ulong local_1b0;
  ulong local_190;
  ulong local_180;
  ulong local_138;
  ulong local_130;
  byte local_121;
  ulong local_120;
  ulong local_118;
  byte local_109;
  ulong local_108;
  ulong local_100;
  byte local_f1;
  ulong local_f0;
  ulong local_e8;
  byte local_d9;
  ulong local_d8;
  ulong local_d0;
  byte local_c1;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  ulong local_a8;
  ulong local_a0;
  byte local_91;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  byte local_69;
  ulong local_68;
  byte local_59;
  ulong local_58;
  ulong local_50;
  undefined *local_48;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  undefined *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar1 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar3 = local_30;
  if ((uVar1 & 1) == 0) {
    puVar2 = *(undefined **)PTR____NSDictionary0___02578288;
    (*(code *)PTR__objc_retain_02578638)();
    local_34 = 1;
    local_28 = puVar2;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = uVar3;
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_layout);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    uVar3 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar3 & 1) != 0) {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_layout);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_40;
      local_40 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_40;
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_height);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 0;
    local_69 = 0;
    local_180 = uVar1;
    if (uVar1 == 0) {
      local_190 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_cardHeight);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      local_58 = local_190;
      if (local_190 == 0) {
        local_190 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_card_height);
        _objc_retainAutoreleasedReturnValue();
        local_69 = 1;
        local_68 = local_190;
      }
      local_180 = local_190;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_180;
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_autoRawHeight);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_40;
    local_78 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_autoRawTrusted);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_40;
    local_80 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_offsetX);
    _objc_retainAutoreleasedReturnValue();
    local_91 = 0;
    local_1b0 = uVar1;
    if (uVar1 == 0) {
      local_1b0 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_profileBgOffsetX);
      _objc_retainAutoreleasedReturnValue();
      local_90 = local_1b0;
    }
    local_91 = uVar1 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = local_1b0;
    if ((local_91 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_offsetY);
    _objc_retainAutoreleasedReturnValue();
    local_a9 = 0;
    local_1c8 = uVar1;
    if (uVar1 == 0) {
      local_1c8 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_profileBgOffsetY);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = local_1c8;
    }
    local_a9 = uVar1 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = local_1c8;
    if ((local_a9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_scale);
    _objc_retainAutoreleasedReturnValue();
    local_c1 = 0;
    local_1e0 = uVar1;
    if (uVar1 == 0) {
      local_1e0 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_profileBgScale);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = local_1e0;
    }
    local_c1 = uVar1 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_b8 = local_1e0;
    if ((local_c1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_c0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_alpha);
    _objc_retainAutoreleasedReturnValue();
    local_d9 = 0;
    local_1f8 = uVar1;
    if (uVar1 == 0) {
      local_1f8 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_profileBgAlpha);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = local_1f8;
    }
    local_d9 = uVar1 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = local_1f8;
    if ((local_d9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d8);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_offsetXNight);
    _objc_retainAutoreleasedReturnValue();
    local_f1 = 0;
    local_210 = uVar1;
    if (uVar1 == 0) {
      local_210 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_profileBgOffsetXNight);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = local_210;
    }
    local_f1 = uVar1 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = local_210;
    if ((local_f1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_offsetYNight);
    _objc_retainAutoreleasedReturnValue();
    local_109 = 0;
    local_228 = uVar1;
    if (uVar1 == 0) {
      local_228 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_profileBgOffsetYNight);
      _objc_retainAutoreleasedReturnValue();
      local_108 = local_228;
    }
    local_109 = uVar1 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_100 = local_228;
    if ((local_109 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_108);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_scaleNight);
    _objc_retainAutoreleasedReturnValue();
    local_121 = 0;
    local_240 = uVar1;
    if (uVar1 == 0) {
      local_240 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_profileBgScaleNight);
      _objc_retainAutoreleasedReturnValue();
      local_120 = local_240;
    }
    local_121 = uVar1 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_118 = local_240;
    if ((local_121 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_120);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_alphaNight);
    _objc_retainAutoreleasedReturnValue();
    local_258 = uVar1;
    if (uVar1 == 0) {
      local_138 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_profileBgAlphaNight);
      _objc_retainAutoreleasedReturnValue();
      local_258 = local_138;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = local_258;
    if (uVar1 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_138);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_doubleValue_026ca608);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_height);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    uVar1 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_doubleValue_026ca608);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_autoRawHeight);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if (local_80 != 0) {
      uVar1 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_boolValue_026ca540);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithBool__0269ce60,uVar1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_autoRawTrusted);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    uVar1 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_doubleValue_026ca608);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_offsetX);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    uVar1 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a0,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_doubleValue_026ca608);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_offsetY);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_doubleValue_026ca608);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_scale);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    uVar1 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_doubleValue_026ca608);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_alpha);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    uVar1 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_doubleValue_026ca608);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_offsetXNight);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    uVar1 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_100,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_doubleValue_026ca608);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_offsetYNight);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    uVar1 = local_118;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_118,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_doubleValue_026ca608);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_scaleNight);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    uVar1 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_doubleValue_026ca608);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_alphaNight);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar2;
    local_34 = 1;
    _objc_storeStrong(&local_130);
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_100,0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

