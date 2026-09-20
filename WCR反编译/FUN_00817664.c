// FUN_00817664 @ 00817664

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00817664(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                 byte param_9)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 local_158;
  uint local_13c;
  ulong local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  ulong local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_98;
  undefined8 local_90;
  ulong local_88;
  byte local_7d;
  ulong local_70;
  byte local_65;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  ulong local_50;
  undefined8 local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulong local_28;
  
  local_50 = 0;
  local_48 = param_5;
  local_40 = param_4;
  local_38 = param_1;
  uStack_30 = param_2;
  _objc_storeStrong(&local_50,param_6);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_7);
  uVar1 = local_50;
  local_65 = param_9;
  local_64 = param_8;
  local_60 = param_3;
  FUN_00838b24();
  _objc_retainAutoreleasedReturnValue();
  local_13c = 0;
  local_70 = uVar1;
  if ((DAT_028cd1b0 & 1) != 0) {
    FUN_0081d34c();
    local_13c = (uint)uVar1;
  }
  local_7d = (byte)local_13c & 1;
  if ((local_13c & 1) == 0) {
    uVar1 = local_40;
    (*DAT_028cd118)(local_38,uStack_30,local_60,local_40,local_48,local_70,local_58,local_64,
                    local_65 & 1);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = uVar1;
    if ((uVar1 == 0) &&
       (uVar1 = local_70,
       (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isEqualToString__0269ccc8,local_50),
       (uVar1 & 1) == 0)) {
      uVar2 = local_40;
      (*DAT_028cd118)(local_38,uStack_30,local_60,local_40,local_48,local_50,local_58,local_64,
                      local_65 & 1);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_e8;
      local_e8 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_50;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((uVar1 & 1) != 0) &&
       ((uVar1 = local_50,
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_isEqualToString__0269ccc8,&cf_ai_filled), (uVar1 & 1) != 0 ||
        (uVar1 = local_50,
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&cf_ai_filled)
        , (uVar1 & 1) != 0)))) {
      uVar1 = local_e8;
      puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((uVar1 & 1) != 0) &&
         (uVar1 = local_e8,
         (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_renderingMode_026a02c0), uVar1 != 1))
      {
        uVar2 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_imageWithRenderingMode__026ca690,1);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_e8;
        local_e8 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
    }
    uVar1 = local_e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = uVar1;
    local_b4 = 1;
    _objc_storeStrong(&local_e8,0);
  }
  else {
    uVar1 = local_70;
    FUN_0081d4f0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_70;
    local_88 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_isEqualToString__0269ccc8,&cf_icons_filled_emoticon_bg);
    if ((uVar2 & 1) == 0) {
      local_158 = local_60;
    }
    else {
      local_158 = DAT_02323da8;
    }
    local_90 = local_158;
    uStack_a8 = uStack_30;
    local_b0 = local_38;
    uVar1 = local_40;
    (*DAT_028cd118)(local_38,uStack_30,local_158,local_40,local_48,local_70,local_88,local_64,
                    local_65 & 1);
    _objc_retainAutoreleasedReturnValue();
    local_98 = uVar1;
    if (uVar1 == 0) {
      uStack_c8 = uStack_30;
      local_d0 = local_38;
      uVar1 = local_40;
      (*DAT_028cd118)(local_38,uStack_30,local_60,local_40,local_48,local_70,local_58,local_64,
                      local_65 & 1);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = uVar1;
      if ((uVar1 == 0) &&
         (uVar1 = local_70,
         (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isEqualToString__0269ccc8,local_50),
         (uVar1 & 1) == 0)) {
        uStack_d8 = uStack_30;
        local_e0 = local_38;
        uVar2 = local_40;
        (*DAT_028cd118)(local_38,uStack_30,local_60,local_40,local_48,local_50,local_58,local_64,
                        local_65 & 1);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_c0;
        local_c0 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      uVar1 = local_c0;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar1;
      local_b4 = 1;
      _objc_storeStrong(&local_c0,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_b4 = 1;
      local_28 = uVar1;
    }
    _objc_storeStrong(&local_98);
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

