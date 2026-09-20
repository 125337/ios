// FUN_00847c6c @ 00847c6c

byte FUN_00847c6c(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_1b0;
  undefined *local_130;
  undefined *local_c8;
  undefined *local_80;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  undefined *local_38;
  byte local_29;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_29 = 0;
  puVar2 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028cd1de);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_38;
    local_38 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_setAssociatedObject(local_28,&DAT_028cd1de,local_38,1);
  }
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backgroundColor_026ca518);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_00831c7c();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backgroundColor_026ca518);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 0;
    local_c8 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_c8 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_c8;
    }
    local_51 = puVar2 == (undefined *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,local_c8,&cf_cell);
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_29 = 1;
  }
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOpaque_0269f438);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_cellOpaque);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOpaque__026ca9f8,0);
    local_29 = 1;
  }
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_backgroundColor_026ca518);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_00831c7c();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    puVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_backgroundColor_026ca518);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 0;
    local_130 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_130 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_130;
    }
    local_69 = puVar2 == (undefined *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,local_130,&cf_content);
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_29 = 1;
  }
  puVar2 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isOpaque_0269f438);
  if (((ulong)puVar2 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_contentOpaque);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setOpaque__026ca9f8,0);
    local_29 = 1;
  }
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_backgroundView_026a0320);
  _objc_retainAutoreleasedReturnValue();
  local_78 = puVar2;
  if (puVar2 != (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIVisualEffectView_026cdf98,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_backgroundColor_026ca518);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      FUN_00831c7c();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (((ulong)puVar3 & 1) == 0) {
        puVar2 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_backgroundColor_026ca518);
        _objc_retainAutoreleasedReturnValue();
        local_1b0 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          local_80 = PTR__OBJC_CLASS___NSNull_026ce0e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
          _objc_retainAutoreleasedReturnValue();
          local_1b0 = local_80;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,local_1b0,&cf_bg);
        if (puVar2 == (undefined *)0x0) {
          (*(code *)PTR__objc_release_02578630)(local_80);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_29 = 1;
      }
      puVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isOpaque_0269f438);
      if (((ulong)puVar2 & 1) != 0) {
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,puVar2,&cf_bgOpaque);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setOpaque__026ca9f8,0);
        local_29 = 1;
      }
    }
  }
  bVar1 = local_29;
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return bVar1 & 1;
}

