// FUN_007c0568 @ 007c0568

void FUN_007c0568(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  ulong local_248;
  ulong local_210;
  uint local_1cc;
  ulong local_1b8;
  ulong local_170;
  undefined *local_100;
  undefined8 local_f8;
  ulong local_f0;
  undefined *local_e8;
  undefined *local_e0;
  ulong local_d8;
  ulong local_d0;
  byte local_c1;
  ulong local_c0;
  ulong local_b8;
  undefined1 local_a9;
  ulong local_a8;
  byte local_9b;
  byte local_9a;
  byte local_99;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  int local_68;
  ulong local_58;
  undefined8 local_50;
  ulong local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_58 = 0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_3);
  if ((local_58 == 0) || ((DAT_026f46b8 & 1) == 0)) {
    (*DAT_028ccd88)(local_48,local_50,local_58);
    local_68 = 1;
    goto LAB_007c12b8;
  }
  if (((DAT_028cce48 & 1) != 0) &&
     (uVar1 = local_58, FUN_007cd890(), local_70 = uVar1, -1 < (long)uVar1)) {
    uVar1 = local_48;
    FUN_007cdd54();
    _objc_retainAutoreleasedReturnValue();
    local_78 = uVar1;
    FUN_007cdf10();
    if ((uVar1 & 1) != 0) {
      DAT_026f46c0 = local_70;
    }
    _objc_storeStrong(&local_78,0);
  }
  uVar1 = local_48;
  FUN_007ce104();
  if ((uVar1 & 1) != 0) {
    uVar1 = local_58;
    FUN_007ce1d4();
    _objc_retainAutoreleasedReturnValue();
    local_80 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if ((uVar1 != 0) &&
       (uVar1 = local_80,
       (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,local_58),
       (uVar1 & 1) == 0)) {
      _objc_storeStrong(&local_58,local_80);
    }
    _objc_storeStrong(&local_80,0);
  }
  uVar1 = local_48;
  FUN_007cf428();
  if ((uVar1 & 1) != 0) {
    uVar1 = local_58;
    FUN_007cf5a8();
    _objc_retainAutoreleasedReturnValue();
    local_88 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if ((uVar1 != 0) &&
       (uVar1 = local_88,
       (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_isEqualToString__0269ccc8,local_58),
       (uVar1 & 1) == 0)) {
      _objc_storeStrong(&local_58,local_88);
    }
    _objc_storeStrong(&local_88,0);
  }
  uVar1 = local_58;
  FUN_007cfc4c();
  if ((uVar1 & 1) != 0) {
    (*DAT_028ccd88)(local_48,local_50,local_58);
    local_68 = 1;
    goto LAB_007c12b8;
  }
  uVar1 = local_48;
  FUN_007cff60();
  if ((((uVar1 & 1) != 0) && (DAT_028cccc8 != 0)) &&
     (uVar1 = DAT_028cccc8,
     (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccc8,PTR_s_length_0269cca0), uVar1 != 0)) {
    uVar2 = local_58;
    FUN_007d0288(uVar1);
    _objc_retainAutoreleasedReturnValue();
    local_170 = uVar2;
    if (uVar2 == 0) {
      local_170 = DAT_028cccc8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = local_170;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*DAT_028ccd88)(local_48,local_50,local_90);
    local_68 = 1;
    _objc_storeStrong(&local_90,0);
    goto LAB_007c12b8;
  }
  uVar1 = local_58;
  FUN_007c7d38(local_58,0x7fffffffffffffff,0);
  _objc_retainAutoreleasedReturnValue();
  local_98 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isEqualToString__0269ccc8,&cf__O);
  local_99 = (byte)uVar1;
  uVar1 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_isEqualToString__0269ccc8,&cf_U_);
  local_9a = (byte)uVar1;
  uVar1 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_isEqualToString__0269ccc8,&cf_Ss);
  local_9b = (byte)uVar1;
  if ((((local_99 & 1) == 0) ||
      (uVar1 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_tag_026cab98),
      uVar1 != 0x68)) ||
     ((DAT_028cccc8 == 0 ||
      (uVar1 = DAT_028cccc8,
      (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccc8,PTR_s_length_0269cca0), uVar1 == 0)))) {
    local_a9 = 0;
    if ((local_99 & 1) != 0) {
      uVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = uVar1;
      while( true ) {
        local_c1 = 0;
        local_1cc = 0;
        if (local_b8 != 0) {
          uVar1 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          local_c1 = 1;
          local_c0 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_1cc = (uint)uVar1 ^ 1;
        }
        if ((local_c1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_c0);
        }
        if ((local_1cc & 1) == 0) break;
        uVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_b8;
        local_b8 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      local_a9 = local_b8 != 0;
      if ((((bool)local_a9) && (DAT_028cccc8 != 0)) &&
         (uVar1 = DAT_028cccc8,
         (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccc8,PTR_s_length_0269cca0), uVar1 != 0)) {
        uVar2 = local_58;
        FUN_007d0288(uVar1);
        _objc_retainAutoreleasedReturnValue();
        local_210 = uVar2;
        if (uVar2 == 0) {
          local_210 = DAT_028cccc8;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_d0 = local_210;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        (*DAT_028ccd88)(local_48,local_50,local_d0);
        local_68 = 1;
        _objc_storeStrong(&local_d0,0);
      }
      else {
        local_68 = 0;
      }
      _objc_storeStrong(&local_b8,0);
      if (local_68 != 0) goto LAB_007c12a8;
    }
    if ((((local_9a & 1) == 0) || (DAT_028cccd0 == 0)) ||
       (uVar1 = DAT_028cccd0,
       (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccd0,PTR_s_length_0269cca0), uVar1 == 0)) {
      if ((((local_9b & 1) == 0) || (DAT_028cccd8 == 0)) ||
         (lVar3 = DAT_028cccd8,
         (*(code *)PTR__objc_msgSend_02578628)(DAT_028cccd8,PTR_s_length_0269cca0), lVar3 == 0)) {
        if ((DAT_028ccce0 != 0) &&
           (lVar3 = DAT_028ccce0,
           (*(code *)PTR__objc_msgSend_02578628)(DAT_028ccce0,PTR_s_length_0269cca0), lVar3 != 0)) {
          puVar4 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                     PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf__,0,0);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_58;
          uVar2 = local_58;
          local_e0 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
          local_38 = 0;
          local_30 = 0;
          local_f8 = 0;
          local_f0 = uVar2;
          local_40 = uVar2;
          local_28 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_firstMatchInString_options_range_0269ef48,uVar1,0,0,uVar2);
          _objc_retainAutoreleasedReturnValue();
          local_e8 = puVar4;
          if (puVar4 == (undefined *)0x0) {
            local_68 = 0;
          }
          else {
            puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
            _objc_retainAutoreleasedReturnValue();
            local_100 = puVar4;
            (*DAT_028ccd88)(local_48,local_50,puVar4);
            local_68 = 1;
            _objc_storeStrong(&local_100,0);
          }
          _objc_storeStrong(&local_e8);
          _objc_storeStrong(&local_e0,0);
          if (local_68 != 0) goto LAB_007c12a8;
        }
        (*DAT_028ccd88)(local_48,local_50,local_58);
        local_68 = 0;
      }
      else {
        (*DAT_028ccd88)(local_48,local_50,DAT_028cccd8);
        local_68 = 1;
      }
    }
    else {
      uVar2 = local_58;
      FUN_007d0450(uVar1,local_58,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_248 = uVar2;
      if (uVar2 == 0) {
        local_248 = DAT_028cccd0;
      }
      local_d8 = uVar2;
      (*DAT_028ccd88)(local_48,local_50,local_248);
      local_68 = 1;
      _objc_storeStrong(&local_d8,0);
    }
  }
  else {
    uVar2 = local_58;
    FUN_007d0288(uVar1);
    _objc_retainAutoreleasedReturnValue();
    local_1b8 = uVar2;
    if (uVar2 == 0) {
      local_1b8 = DAT_028cccc8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = local_1b8;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*DAT_028ccd88)(local_48,local_50,local_a8);
    local_68 = 1;
    _objc_storeStrong(&local_a8,0);
  }
LAB_007c12a8:
  _objc_storeStrong(&local_98,0);
LAB_007c12b8:
  _objc_storeStrong(&local_58,0);
  return;
}

