// FUN_01619268 @ 01619268

void FUN_01619268(double param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  ulong local_210;
  ulong local_208;
  ulong local_200;
  ulong local_1f8;
  long local_1f0;
  ulong local_1e8;
  ulong local_1e0;
  ulong local_1d8;
  cfstringStruct *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  cfstringStruct *local_198;
  ulong local_190;
  undefined4 local_184;
  undefined **local_180;
  ulong local_178;
  undefined *local_170;
  undefined1 *local_168;
  ulong local_160;
  ulong local_158;
  undefined4 local_14c;
  cfstringStruct **local_148;
  undefined8 local_140;
  cfstringStruct *local_138;
  undefined **local_130;
  cfstringStruct *local_128;
  ulong local_120;
  ulong local_118;
  ulong local_110;
  ulong local_108;
  ulong local_100;
  ulong local_f8;
  undefined **local_f0;
  ulong local_e8;
  undefined8 local_e0;
  double local_d8;
  undefined8 local_d0;
  ulong local_c8;
  uint local_bc;
  long local_b8;
  byte local_a9;
  cfstringStruct *local_a8;
  byte local_9a;
  byte local_99;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  byte local_71;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_44;
  ulong local_40;
  double local_38;
  ulong local_30;
  undefined *local_28;
  
  local_30 = 0;
  local_e0 = param_2;
  local_d8 = param_1;
  local_d0 = param_3;
  _objc_storeStrong(&local_30,param_2);
  local_38 = local_d8;
  local_40 = 0;
  _objc_storeStrong(&local_40,local_d0);
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrAvatar);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_bc = (uint)uVar2;
  (*(code *)PTR__objc_release_02578630)(local_c8);
  if ((local_bc & 1) == 0) {
    local_f0 = &PTR_s_session_0269d000;
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = uVar2;
    FUN_01618794();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar2;
    (*(code *)PTR__objc_release_02578630)(local_f8);
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,local_f0[0x13],&cf__wcrCustomPayload);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = uVar2;
    FUN_01618794();
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar2;
    (*(code *)PTR__objc_release_02578630)(local_e8);
    uVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasPrefix__0269d320,&cf_chat_);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_containsString__0269d0b0,&cf_chat_),
       (uVar2 & 1) == 0)) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomIcon);
      _objc_retainAutoreleasedReturnValue();
      local_100 = uVar2;
      FUN_01618794();
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar2;
      (*(code *)PTR__objc_release_02578630)(local_100);
      uVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      if (uVar2 == 0) {
        uVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
        _objc_retainAutoreleasedReturnValue();
        local_108 = uVar3;
        FUN_01618794();
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_60;
        local_60 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        (*(code *)PTR__objc_release_02578630)(local_108);
      }
      uVar2 = local_60;
      FUN_01630b84();
      if ((uVar2 & 1) == 0) {
        local_110 = local_40;
        local_71 = 0;
        bVar1 = local_40 == 0;
        if (bVar1) {
          _WCRSuperFloatMenuIconTintColor();
          _objc_retainAutoreleasedReturnValue();
          local_118 = uVar2;
          local_70 = uVar2;
        }
        else {
          local_118 = local_40;
        }
        local_120 = local_118;
        local_71 = bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_68 = local_120;
        if ((local_71 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_70);
        }
        local_80 = 0;
        local_88 = 0;
        local_90 = 0;
        local_98 = 0;
        uVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_getRed_green_blue_alpha__026ca660,&local_80,&local_88,&local_90,
                   &local_98);
        local_99 = (byte)uVar2;
        if ((uVar2 & 1) == 0) {
          uVar2 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_getWhite_alpha__026ca668,&local_80,&local_98);
          local_99 = (byte)uVar2;
          local_90 = local_80;
          local_88 = local_80;
        }
        FUN_01618a98();
        local_130 = &PTR_WCRefineHelper_026ce000;
        puVar4 = PTR_WCRSuperFloatProfileStore_026cee48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_menuIconPackEnabled_026b1a60);
        local_9a = (byte)puVar4;
        pcVar5 = (cfstringStruct *)local_130[0x1c9];
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_menuIconPackAbsoluteDirectory_026b1a68);
        _objc_retainAutoreleasedReturnValue();
        local_138 = pcVar5;
        if (pcVar5 == (cfstringStruct *)0x0) {
          local_138 = &cf___;
        }
        local_198 = local_138;
        local_128 = pcVar5;
        (*(code *)PTR__objc_retain_02578638)();
        local_148 = &local_a8;
        local_a8 = local_198;
        (*(code *)PTR__objc_release_02578630)(local_128);
        local_180 = &PTR_s_session_0269d000;
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrLocalIcon);
        _objc_retainAutoreleasedReturnValue();
        local_190 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_184 = (undefined4)uVar2;
        (*(code *)PTR__objc_release_02578630)(local_190);
        local_a9 = (byte)local_184;
        local_b8 = (long)(local_38 * 100.0);
        local_170 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_178 = local_50;
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,local_180[0x13],&cf__wcrCustomKind);
        _objc_retainAutoreleasedReturnValue();
        local_158 = uVar2;
        FUN_01618794();
        _objc_retainAutoreleasedReturnValue();
        local_14c = 1;
        local_1e8 = (ulong)((local_99 & 1) != 0);
        local_1e0 = (ulong)((local_9a & 1) != 0);
        local_1d8 = (ulong)((local_a9 & 1) != 0);
        local_210 = local_178;
        local_200 = local_58;
        local_1f8 = local_60;
        local_1f0 = local_b8;
        local_1d0 = local_a8;
        local_1c8 = local_80;
        local_1c0 = local_88;
        local_1b8 = local_90;
        local_1b0 = local_98;
        puVar4 = local_170;
        local_208 = uVar2;
        local_168 = (undefined1 *)&local_210;
        local_160 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_170,PTR_s_stringWithFormat__0269cca8,
                   &cf______________ld__d__d__d______3f___3f___3f___3f);
        _objc_retainAutoreleasedReturnValue();
        local_28 = puVar4;
        (*(code *)PTR__objc_release_02578630)(local_160);
        (*(code *)PTR__objc_release_02578630)(local_158);
        local_44 = local_14c;
        local_140 = 0;
        _objc_storeStrong(local_148);
        _objc_storeStrong(&local_68,local_140);
      }
      else {
        local_28 = (undefined *)0x0;
        local_44 = 1;
      }
      _objc_storeStrong(&local_60,0);
    }
    else {
      local_28 = (undefined *)0x0;
      local_44 = 1;
    }
    local_1a0 = 0;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,local_1a0);
  }
  else {
    local_28 = (undefined *)0x0;
    local_44 = 1;
  }
  local_1a8 = 0;
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,local_1a8);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

