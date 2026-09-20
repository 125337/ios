// FUN_0082d7c8 @ 0082d7c8

byte FUN_0082d7c8(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_178;
  ulong local_120;
  ulong local_c8;
  ulong local_80;
  ulong local_78;
  byte local_69;
  ulong local_68;
  ulong local_60;
  byte local_51;
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar2 = local_30;
  _objc_getAssociatedObject(local_30,&DAT_028cd1de);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  if (uVar2 == 0) {
    local_21 = 0;
    local_48 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_cell);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar2 != 0) {
      local_51 = 0;
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_cell);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_class_0269cd60);
      uVar4 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar4 & 1) == 0) {
        local_c8 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_cell);
        _objc_retainAutoreleasedReturnValue();
        local_51 = 1;
        local_50 = local_c8;
      }
      else {
        local_c8 = 0;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setBackgroundColor__026ca888,local_c8);
      if ((local_51 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_cellOpaque);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setOpaque__026ca9f8,1);
    }
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = local_38;
    local_60 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar4 != 0) {
      local_69 = 0;
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_class_0269cd60);
      uVar4 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((uVar4 & 1) == 0) {
        local_120 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_content);
        _objc_retainAutoreleasedReturnValue();
        local_69 = 1;
        local_68 = local_120;
      }
      else {
        local_120 = 0;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setBackgroundColor__026ca888,local_120);
      if ((local_69 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_contentOpaque);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setOpaque__026ca9f8,1);
    }
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_backgroundView_026a0320);
    _objc_retainAutoreleasedReturnValue();
    local_78 = uVar2;
    if (uVar2 != 0) {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_bg)
      ;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar2 != 0) {
        uVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_bg);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSNull_026ce0e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_class_0269cd60);
        uVar4 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        bVar1 = (uVar4 & 1) == 0;
        if (bVar1) {
          local_178 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_bg);
          _objc_retainAutoreleasedReturnValue();
          local_80 = local_178;
        }
        else {
          local_178 = 0;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setBackgroundColor__026ca888,local_178)
        ;
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_80);
        }
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_bgOpaque);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (uVar2 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setOpaque__026ca9f8,1);
      }
    }
    _objc_setAssociatedObject(local_30,&DAT_028cd1de,0,1);
    local_21 = 1;
    local_48 = 1;
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

