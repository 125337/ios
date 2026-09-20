// FUN_008e44a4 @ 008e44a4

byte FUN_008e44a4(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  byte bVar1;
  uint uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_258;
  cfstringStruct *local_1a8;
  cfstringStruct *local_190;
  byte local_15c;
  byte local_144;
  uint local_13c;
  cfstringStruct *local_108;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  byte local_ab;
  byte local_aa;
  byte local_a9;
  cfstringStruct *local_a8;
  byte local_99;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  int local_80;
  byte local_79;
  cfstringStruct *local_78;
  byte local_6c;
  byte local_6b;
  byte local_6a;
  byte local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  byte local_56;
  byte local_55;
  cfstringStruct *local_48;
  ulong *local_40;
  ulong *local_38;
  cfstringStruct *local_30;
  byte local_21;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_40 = param_3;
  local_38 = param_2;
  if (param_2 != (ulong *)0x0) {
    _objc_retainAutorelease();
    *local_38 = (ulong)&cf___;
  }
  if (local_40 != (ulong *)0x0) {
    _objc_retainAutorelease();
    *local_40 = (ulong)&cf___;
  }
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  local_108 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_108 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_108;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_48;
  FUN_008e61ec();
  local_55 = (byte)pcVar3;
  pcVar3 = local_48;
  FUN_008e62e4();
  local_56 = (byte)pcVar3;
  pcVar3 = local_30;
  FUN_008e5898();
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_30;
  local_60 = pcVar3;
  FUN_008e5e98();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_60;
  local_68 = pcVar4;
  FUN_008e6390();
  local_69 = (byte)pcVar3;
  pcVar3 = local_48;
  FUN_008e6684();
  local_13c = 1;
  if (((ulong)pcVar3 & 1) == 0) {
    pcVar3 = local_60;
    FUN_008e6734(local_60,local_68);
    local_13c = (uint)pcVar3;
  }
  local_6a = (byte)local_13c & 1;
  local_144 = 1;
  if (((local_69 & 1) == 0) && (local_144 = 1, (local_13c & 1) == 0)) {
    pcVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_isEqualToString__0269ccc8,&cf_AppMusicMessageCellView);
    local_144 = 1;
    if (((ulong)pcVar3 & 1) == 0) {
      pcVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_isEqualToString__0269ccc8,&cf_AppMusicMVMessageCellView);
      local_144 = (byte)pcVar3;
    }
  }
  local_6b = local_144 & 1;
  pcVar3 = local_48;
  FUN_008e6c40();
  local_6c = (byte)pcVar3;
  pcVar3 = local_30;
  FUN_008e6e28();
  _objc_retainAutoreleasedReturnValue();
  local_15c = 1;
  local_78 = pcVar3;
  if (((local_55 & 1) == 0) && (local_15c = 1, (local_56 & 1) == 0)) {
    pcVar4 = local_60;
    FUN_008e74e8(local_60,local_68,pcVar3);
    local_15c = (byte)pcVar4;
  }
  local_79 = local_15c & 1;
  uVar2 = local_6b & 1;
  FUN_008e7a94(uVar2,local_55 & 1,local_56 & 1,local_6c & 1,local_79);
  if ((uVar2 & 1) == 0) {
    local_21 = 0;
    local_80 = 1;
    goto LAB_008e5024;
  }
  pcVar3 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_190 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_190 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_190;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  if ((local_6b & 1) == 0) {
    pcVar3 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    if (pcVar3 != (cfstringStruct *)0x0) {
      pcVar4 = local_88;
      FUN_008ea604(pcVar3);
      pcVar3 = local_78;
      bVar1 = 1;
      if ((((ulong)pcVar4 & 1) == 0) && (bVar1 = 1, (local_55 & 1) == 0)) {
        bVar1 = local_56;
      }
      local_ab = bVar1 & 1;
      if ((bVar1 & 1) != 0) {
        if (local_38 != (ulong *)0x0) {
          _objc_retainAutorelease();
          *local_38 = (ulong)pcVar3;
        }
        local_21 = 1;
        local_80 = 1;
        goto LAB_008e5004;
      }
    }
    pcVar3 = local_60;
    FUN_008ea6ac(local_60,local_68);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
    if ((pcVar3 == (cfstringStruct *)0x0) || (((local_6c & 1) == 0 && ((local_56 & 1) == 0)))) {
LAB_008e4fc8:
      local_21 = local_79 & 1;
      local_80 = 1;
    }
    else {
      pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSURL_026ce328;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_b8);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_258 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_258 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = local_258;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar4 = local_c0;
      FUN_008ea604();
      pcVar3 = local_b8;
      if ((((ulong)pcVar4 & 1) == 0) && ((local_56 & 1) == 0)) {
        local_80 = 0;
      }
      else {
        if (local_40 != (ulong *)0x0) {
          _objc_retainAutorelease();
          *local_40 = (ulong)pcVar3;
        }
        local_21 = 1;
        local_80 = 1;
      }
      _objc_storeStrong(&local_c0,0);
      if (local_80 == 0) goto LAB_008e4fc8;
    }
    _objc_storeStrong(&local_b8,0);
  }
  else {
    local_99 = 0;
    local_a9 = 0;
    local_1a8 = local_60;
    if ((local_6a & 1) == 0) {
      FUN_008e9170(local_60,local_68,0);
      _objc_retainAutoreleasedReturnValue();
      local_a9 = 1;
      local_a8 = local_1a8;
    }
    else {
      FUN_008e7cc8(local_60,local_68,local_30,0);
      _objc_retainAutoreleasedReturnValue();
      local_99 = 1;
      local_98 = local_1a8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = local_1a8;
    if ((local_a9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    if ((local_99 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    pcVar4 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
    pcVar3 = local_90;
    if ((pcVar4 != (cfstringStruct *)0x0) && (local_40 != (ulong *)0x0)) {
      _objc_retainAutorelease();
      *local_40 = (ulong)pcVar3;
    }
    pcVar3 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
    if (((pcVar3 == (cfstringStruct *)0x0) &&
        (pcVar3 = local_78, (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0),
        pcVar3 != (cfstringStruct *)0x0)) &&
       (pcVar4 = local_88, FUN_008ea604(pcVar3), pcVar3 = local_78, ((ulong)pcVar4 & 1) != 0)) {
      if (local_38 != (ulong *)0x0) {
        _objc_retainAutorelease();
        *local_38 = (ulong)pcVar3;
      }
      local_21 = 1;
    }
    else {
      pcVar3 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
      local_aa = 1;
      if ((pcVar3 == (cfstringStruct *)0x0) && (local_aa = 1, (local_69 & 1) == 0)) {
        local_aa = local_6a;
      }
      local_aa = local_aa & 1;
      local_21 = local_aa;
    }
    local_80 = 1;
    _objc_storeStrong(&local_90,0);
  }
LAB_008e5004:
  _objc_storeStrong(&local_88,0);
LAB_008e5024:
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

