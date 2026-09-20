// FUN_007cd890 @ 007cd890

ulong FUN_007cd890(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_150;
  ulong local_80;
  ulong local_78;
  undefined4 local_70;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulong local_38;
  undefined8 local_30;
  long *local_28;
  
  local_60 = 0;
  _objc_storeStrong(&local_60,param_1);
  uVar2 = local_60;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_58 = 0xffffffffffffffff;
    local_70 = 1;
  }
  else {
    uVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_60;
    local_78 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_containsString__0269d0b0,&cf__NgS);
    if (((uVar3 & 1) == 0) &&
       ((uVar2 = local_60,
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_containsString__0269d0b0,&cf_PgS),
        (uVar2 & 1) == 0 &&
        (uVar2 = local_78,
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_containsString__0269d0b0,&cf_friends),
        (uVar2 & 1) == 0)))) {
      local_58 = 0xffffffffffffffff;
      local_70 = 1;
    }
    else {
      local_28 = &DAT_028cce58;
      local_30 = 0;
      _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_02580010);
      if (*local_28 + 1 != 0) {
        _dispatch_once(*local_28 + 1,local_28,local_30);
      }
      _objc_storeStrong(&local_30,0);
      uVar3 = local_60;
      uVar2 = DAT_028cce50;
      uVar4 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      local_48 = 0;
      local_40 = 0;
      local_50 = uVar4;
      local_38 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_firstMatchInString_options_range_0269ef48,uVar3,0,0,uVar4);
      _objc_retainAutoreleasedReturnValue();
      local_80 = uVar2;
      if ((uVar2 == 0) ||
         ((*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_numberOfRanges_0269ef18), uVar2 < 2)) {
        local_58 = 0xffffffffffffffff;
      }
      else {
        uVar2 = local_80;
        puVar1 = PTR_s_rangeAtIndex__0269ef20;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_rangeAtIndex__0269ef20,1);
        if ((uVar2 == 0x7fffffffffffffff) || (puVar1 == (undefined *)0x0)) {
          local_58 = 0xffffffffffffffff;
        }
        else {
          uVar3 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_substringWithRange__0269d138,uVar2,puVar1);
          _objc_retainAutoreleasedReturnValue();
          local_150 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar3);
          if ((long)local_150 < 0) {
            local_150 = 0xffffffffffffffff;
          }
          local_58 = local_150;
        }
      }
      local_70 = 1;
      _objc_storeStrong(&local_80,0);
    }
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_60,0);
  return local_58;
}

