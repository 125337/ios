// FUN_01e6cf14 @ 01e6cf14

void FUN_01e6cf14(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_158;
  ulong local_140;
  ulong local_130;
  ulong local_118;
  ulong local_108;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  ulong local_a8;
  ulong local_a0;
  byte local_91;
  ulong local_90;
  byte local_81;
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
    local_108 = uVar1;
    if (uVar1 == 0) {
      local_118 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_cardHeight);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      local_58 = local_118;
      if (local_118 == 0) {
        local_118 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_card_height);
        _objc_retainAutoreleasedReturnValue();
        local_69 = 1;
        local_68 = local_118;
      }
      local_108 = local_118;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_108;
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_width);
    _objc_retainAutoreleasedReturnValue();
    local_81 = 0;
    local_91 = 0;
    local_130 = uVar1;
    if (uVar1 == 0) {
      local_140 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_cardWidth);
      _objc_retainAutoreleasedReturnValue();
      local_81 = 1;
      local_80 = local_140;
      if (local_140 == 0) {
        local_140 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_card_width);
        _objc_retainAutoreleasedReturnValue();
        local_91 = 1;
        local_90 = local_140;
      }
      local_130 = local_140;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = local_130;
    if ((local_91 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_webContentScale);
    _objc_retainAutoreleasedReturnValue();
    local_a9 = 0;
    local_158 = uVar1;
    if (uVar1 == 0) {
      local_158 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_scale);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = local_158;
    }
    local_a9 = uVar1 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = local_158;
    if ((local_a9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_webOverallScale);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_40;
    local_b8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_webContentOffsetX);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_40;
    local_c0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_webContentOffsetY);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_40;
    local_c8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_autoRawHeight);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_50;
    local_d0 = uVar3;
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
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_width);
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
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_webContentScale);
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
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_webOverallScale);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    uVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_doubleValue_026ca608);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_webContentOffsetX);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    uVar1 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_respondsToSelector__026ca818,PTR_s_doubleValue_026ca608);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_doubleValue_026ca608);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_webContentOffsetY);
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
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_autoRawHeight);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = puVar2;
    local_34 = 1;
    _objc_storeStrong(&local_d0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

