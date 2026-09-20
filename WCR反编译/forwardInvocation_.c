// forwardInvocation: @ 01fcda2c

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::forwardInvocation_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_170;
  ulong local_168;
  undefined *local_160;
  undefined *local_158;
  undefined8 *local_150;
  ulong local_148;
  undefined *local_140;
  ulong local_138;
  undefined *local_130;
  undefined *local_128;
  undefined1 *local_120;
  ulong local_118;
  undefined *local_110;
  ulong local_108;
  undefined *local_100;
  ulong local_f8;
  undefined *local_f0;
  ulong local_e8;
  undefined *local_e0;
  long local_d8;
  undefined8 *local_d0;
  ulong local_c8;
  undefined *local_c0;
  ulong local_b8;
  undefined *local_b0;
  byte *local_a8;
  ulong local_a0;
  undefined *local_98;
  ulong local_90;
  undefined *local_88;
  ulong local_80;
  undefined *local_78;
  ulong local_70;
  undefined *local_68;
  ulong local_60;
  undefined *local_58;
  ulong local_50;
  undefined *local_48;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  undefined *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = (undefined *)param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_selector_026c0328);
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_28;
  local_40 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_configDictionary_0269f958);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_38;
  local_48 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_selector_026c0328);
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_40;
  puVar2 = PTR_s_rangeOfString__0269d838;
  local_50 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_rangeOfString__0269d838,&cf_set);
  local_60 = uVar3;
  local_58 = puVar2;
  if (uVar3 == 0) {
    uVar1 = local_40;
    puVar2 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_rangeOfString__0269d838,&cf_Enable);
    local_70 = uVar1;
    local_68 = puVar2;
    if ((((uVar1 == 0x7fffffffffffffff) &&
         (uVar1 = local_40, puVar2 = PTR_s_rangeOfString__0269d838,
         (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_rangeOfString__0269d838,&cf_is),
         local_80 = uVar1, local_78 = puVar2, uVar1 != 0)) &&
        (uVar1 = local_40, puVar2 = PTR_s_rangeOfString__0269d838,
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_rangeOfString__0269d838,&cf_need),
        local_90 = uVar1, local_88 = puVar2, uVar1 != 0)) &&
       (uVar1 = local_40, puVar2 = PTR_s_rangeOfString__0269d838,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_rangeOfString__0269d838,&cf_show),
       local_a0 = uVar1, local_98 = puVar2, uVar1 != 0)) {
      uVar1 = local_40;
      puVar2 = PTR_s_rangeOfString__0269d838;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_rangeOfString__0269d838,&cf_Mode);
      local_b8 = uVar1;
      local_b0 = puVar2;
      if ((uVar1 == 0x7fffffffffffffff) &&
         (uVar1 = local_40, puVar2 = PTR_s_rangeOfString__0269d838,
         (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_rangeOfString__0269d838,&cf_Selected),
         local_c8 = uVar1, local_c0 = puVar2, uVar1 == 0x7fffffffffffffff)) {
        local_d8 = 0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_getArgument_atIndex__026c0338,&local_d8,2);
        if (local_d8 == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_removeObjectForKey__0269d700,local_50);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_setObject_forKey__026ca9e8,local_d8,local_50);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_saveConfigDictionary__0269f960,local_48);
      }
      else {
        local_d0 = _malloc(8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_getArgument_atIndex__026c0338,local_d0,2);
        puVar2 = local_48;
        puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,*local_d0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_setObject_forKey__026ca9e8,puVar4,local_50);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_saveConfigDictionary__0269f960,local_48);
        _free(local_d0);
      }
    }
    else {
      local_a8 = _malloc(1);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getArgument_atIndex__026c0338,local_a8,2)
      ;
      puVar2 = local_48;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,*local_a8 & 1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setObject_forKey__026ca9e8,puVar4,local_50)
      ;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_saveConfigDictionary__0269f960,local_48);
      _free(local_a8);
    }
  }
  else {
    uVar1 = local_40;
    puVar2 = PTR_s_rangeOfString__0269d838;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_rangeOfString__0269d838,&cf_Enable);
    local_e8 = uVar1;
    local_e0 = puVar2;
    if ((((uVar1 == 0x7fffffffffffffff) &&
         (uVar1 = local_40, puVar2 = PTR_s_rangeOfString__0269d838,
         (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_rangeOfString__0269d838,&cf_is),
         local_f8 = uVar1, local_f0 = puVar2, uVar1 != 0)) &&
        (uVar1 = local_40, puVar2 = PTR_s_rangeOfString__0269d838,
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_rangeOfString__0269d838,&cf_need),
        local_108 = uVar1, local_100 = puVar2, uVar1 != 0)) &&
       (uVar1 = local_40, puVar2 = PTR_s_rangeOfString__0269d838,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_rangeOfString__0269d838,&cf_show),
       local_118 = uVar1, local_110 = puVar2, uVar1 != 0)) {
      uVar1 = local_40;
      puVar2 = PTR_s_rangeOfString__0269d838;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_rangeOfString__0269d838,&cf_Mode);
      local_138 = uVar1;
      local_130 = puVar2;
      if ((uVar1 == 0x7fffffffffffffff) &&
         (uVar1 = local_40, puVar2 = PTR_s_rangeOfString__0269d838,
         (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_rangeOfString__0269d838,&cf_Selected),
         local_148 = uVar1, local_140 = puVar2, uVar1 == 0x7fffffffffffffff)) {
        puVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_objectForKey__0269e048,local_50);
        _objc_retainAutoreleasedReturnValue();
        local_170 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setReturnValue__026ca2c0);
        _objc_storeStrong(&local_170,0);
      }
      else {
        local_150 = _malloc(8);
        puVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_objectForKey__0269e048,local_50);
        _objc_retainAutoreleasedReturnValue();
        local_158 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          uVar1 = local_40;
          puVar2 = PTR_s_rangeOfString__0269d838;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_rangeOfString__0269d838,&cf_Selected)
          ;
          local_168 = uVar1;
          local_160 = puVar2;
          if (uVar1 == 0x7fffffffffffffff) {
            puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = local_158;
            local_158 = puVar4;
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          else {
            puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
            _objc_retainAutoreleasedReturnValue();
            puVar2 = local_158;
            local_158 = puVar4;
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_setObject_forKey__026ca9e8,local_158,local_50);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_saveConfigDictionary__0269f960,local_48);
        }
        puVar2 = local_158;
        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_integerValue_026ca750);
        *local_150 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setReturnValue__026ca2c0,local_150);
        _free(local_150);
        _objc_storeStrong(&local_158,0);
      }
    }
    else {
      local_120 = _malloc(1);
      puVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_objectForKey__0269e048,local_50);
      _objc_retainAutoreleasedReturnValue();
      local_128 = puVar2;
      if (puVar2 == (undefined *)0x0) {
        uVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_isEqualToString__0269ccc8,&cf_enableForegroundPush);
        if (((uVar1 & 1) == 0) &&
           (uVar1 = local_40,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_40,PTR_s_isEqualToString__0269ccc8,&cf_enableBackgroundPush),
           (uVar1 & 1) == 0)) {
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_128;
          local_128 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        else {
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_128;
          local_128 = puVar4;
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_setObject_forKey__026ca9e8,local_128,local_50);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_saveConfigDictionary__0269f960,local_48);
      }
      puVar2 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_boolValue_026ca540);
      *local_120 = (char)puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setReturnValue__026ca2c0,local_120);
      _free(local_120);
      _objc_storeStrong(&local_128,0);
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

