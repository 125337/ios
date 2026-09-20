// contentLengthFromResponse: @ 0102c9c0

/* Function Stack Size: 0x18 bytes */

long_long WCRefineLinkParser::contentLengthFromResponse_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_130;
  ulong local_f0;
  ulong local_d0;
  ulong local_b0;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  undefined *local_88;
  byte local_79;
  ulong local_78;
  byte local_69;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  undefined4 local_4c;
  ulong local_48;
  ulong local_40;
  SEL local_38;
  ID local_30;
  ulong local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  uVar2 = local_40;
  puVar1 = PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_d0 = 0;
  }
  else {
    local_d0 = local_40;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_d0;
  if (local_d0 == 0) {
    local_28 = 0;
    local_4c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_statusCode_026a1578);
    if ((local_d0 == 200) ||
       (uVar2 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_statusCode_026a1578),
       uVar2 == 0xce)) {
      local_58 = 0;
      uVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_allHeaderFields_026aaec0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_69 = 0;
      local_79 = 0;
      local_f0 = uVar3;
      if (uVar3 == 0) {
        local_f0 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_allHeaderFields_026aaec0);
        _objc_retainAutoreleasedReturnValue();
        local_69 = 1;
        local_68 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_78 = local_f0;
      }
      local_79 = uVar3 == 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_f0;
      if ((local_79 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      if ((local_69 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_60;
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((((uVar2 & 1) != 0) &&
          (uVar2 = local_60, puVar1 = PTR_s_rangeOfString_options__0269d118,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_rangeOfString_options__0269d118,&cf__,4), local_90 = uVar2,
          local_88 = puVar1, uVar2 != 0x7fffffffffffffff)) &&
         (uVar3 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
         uVar2 + 1 < uVar3)) {
        uVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_substringFromIndex__0269d120,local_90 + 1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_58 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      if ((long)local_58 < 1) {
        uVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_allHeaderFields_026aaec0);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_130 = uVar3;
        if (uVar3 == 0) {
          local_a0 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_allHeaderFields_026aaec0);
          _objc_retainAutoreleasedReturnValue();
          local_b0 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_130 = local_b0;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_98 = local_130;
        if (uVar3 == 0) {
          (*(code *)PTR__objc_release_02578630)(local_b0);
          (*(code *)PTR__objc_release_02578630)(local_a0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
        (*(code *)PTR__objc_release_02578630)(uVar2);
        uVar2 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_98,PTR_s_respondsToSelector__026ca818,PTR_s_longLongValue_0269d5e0);
        if ((uVar2 & 1) != 0) {
          uVar2 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_longLongValue_0269d5e0);
          local_58 = uVar2;
        }
        _objc_storeStrong(&local_98,0);
      }
      local_28 = local_58;
      local_4c = 1;
      _objc_storeStrong(&local_60,0);
    }
    else {
      local_28 = 0;
      local_4c = 1;
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_28;
}

