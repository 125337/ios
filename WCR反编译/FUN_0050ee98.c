// FUN_0050ee98 @ 0050ee98

void FUN_0050ee98(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_3f8;
  cfstringStruct *local_390;
  cfstringStruct *local_228;
  undefined *local_220;
  undefined4 local_218;
  undefined4 local_214;
  code *local_210;
  undefined *local_208;
  undefined **local_200;
  undefined *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  code *local_1e8;
  undefined *local_1e0;
  undefined1 auStack_1d8 [8];
  cfstringStruct *local_1d0;
  undefined *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  code *local_1b8;
  undefined *local_1b0;
  undefined **local_1a8;
  undefined *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  code *local_190;
  undefined *local_188;
  undefined **local_180;
  undefined *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  code *local_168;
  undefined *local_160;
  undefined **local_158;
  undefined *local_150;
  undefined4 local_148;
  undefined4 local_144;
  code *local_140;
  undefined *local_138;
  undefined **local_130;
  undefined *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  code *local_118;
  undefined *local_110;
  undefined **local_108;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  undefined **local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined **local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined **local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined1 auStack_68 [8];
  undefined **local_60;
  undefined1 auStack_58 [11];
  byte local_4d;
  undefined4 local_4c;
  cfstringStruct *local_48 [3];
  cfstringStruct *local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  pcVar2 = &cf_WCActionSheet;
  _NSClassFromString();
  local_30 = pcVar2;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_initWithTitle__0269d2f8,&cf___);
  local_48[0] = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_4c = 1;
  }
  else {
    uVar3 = local_28;
    FUN_0050d6b8();
    local_4d = (byte)uVar3;
    _objc_initWeak(auStack_58,local_28);
    puVar1 = PTR___NSConcreteStackBlock_02578660;
    ppuVar4 = &local_88;
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_0050fa34;
    local_70 = &DAT_0257d898;
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retainBlock();
    pcVar2 = local_48[0];
    local_b0 = puVar1;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_0050fc1c;
    local_98 = &DAT_02579910;
    local_60 = ppuVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = ppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf___,&local_b0);
    pcVar2 = local_48[0];
    ppuVar4 = local_60;
    local_d8 = PTR___NSConcreteStackBlock_02578660;
    local_d0 = 0xc2000000;
    local_cc = 0;
    local_c8 = FUN_0050fc54;
    local_c0 = &DAT_02579910;
    (*(code *)PTR__objc_retain_02578638)();
    local_b8 = ppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf___,&local_d8);
    pcVar2 = local_48[0];
    ppuVar4 = local_60;
    local_100 = PTR___NSConcreteStackBlock_02578660;
    local_f8 = 0xc2000000;
    local_f4 = 0;
    local_f0 = FUN_0050fc8c;
    local_e8 = &DAT_02579910;
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = ppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf___,&local_100);
    pcVar2 = local_48[0];
    ppuVar4 = local_60;
    local_128 = PTR___NSConcreteStackBlock_02578660;
    local_120 = 0xc2000000;
    local_11c = 0;
    local_118 = FUN_0050fcc4;
    local_110 = &DAT_02579910;
    (*(code *)PTR__objc_retain_02578638)();
    local_108 = ppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf___,&local_128);
    pcVar2 = local_48[0];
    ppuVar4 = local_60;
    if ((local_4d & 1) == 0) {
      local_220 = PTR___NSConcreteStackBlock_02578660;
      local_218 = 0xc2000000;
      local_214 = 0;
      local_210 = FUN_0051038c;
      local_208 = &DAT_02579910;
      (*(code *)PTR__objc_retain_02578638)();
      local_200 = ppuVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf__g0W_X_,&local_220);
      _objc_storeStrong(&local_200,0);
    }
    else {
      local_150 = PTR___NSConcreteStackBlock_02578660;
      local_148 = 0xc2000000;
      local_144 = 0;
      local_140 = FUN_0050fcfc;
      local_138 = &DAT_02579910;
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = ppuVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf___,&local_150);
      pcVar2 = local_48[0];
      ppuVar4 = local_60;
      local_178 = PTR___NSConcreteStackBlock_02578660;
      local_170 = 0xc2000000;
      local_16c = 0;
      local_168 = FUN_0050fd34;
      local_160 = &DAT_02579910;
      (*(code *)PTR__objc_retain_02578638)();
      local_158 = ppuVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf__S,&local_178);
      pcVar5 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48[0],PTR_s_respondsToSelector__026ca818,
                 PTR_s_addDestructiveButtonWithTitle_ev_026a0f58);
      pcVar2 = local_48[0];
      ppuVar4 = local_60;
      if (((ulong)pcVar5 & 1) == 0) {
        local_1c8 = PTR___NSConcreteStackBlock_02578660;
        local_1c0 = 0xc2000000;
        local_1bc = 0;
        local_1b8 = FUN_0050fda4;
        local_1b0 = &DAT_02579910;
        (*(code *)PTR__objc_retain_02578638)();
        local_1a8 = ppuVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf___,&local_1c8);
        _objc_storeStrong(&local_1a8,0);
      }
      else {
        local_1a0 = PTR___NSConcreteStackBlock_02578660;
        local_198 = 0xc2000000;
        local_194 = 0;
        local_190 = FUN_0050fd6c;
        local_188 = &DAT_02579910;
        (*(code *)PTR__objc_retain_02578638)();
        local_180 = ppuVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_addDestructiveButtonWithTitle_ev_026a0f58,&cf___,&local_1a0);
        _objc_storeStrong(&local_180,0);
      }
      pcVar2 = &cf_Album_MessageList;
      FUN_0050df80();
      _objc_retainAutoreleasedReturnValue();
      local_390 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_390 = &cf_mo_Rh;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_1d0 = local_390;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar5 = local_48[0];
      pcVar2 = local_1d0;
      local_1f8 = PTR___NSConcreteStackBlock_02578660;
      local_1f0 = 0xc2000000;
      local_1ec = 0;
      local_1e8 = FUN_0050fddc;
      local_1e0 = &DAT_02578da0;
      _objc_copyWeak(auStack_1d8,auStack_58);
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_addButtonWithTitle_eventAction__026a0f60,pcVar2,&local_1f8);
      _objc_destroyWeak(auStack_1d8);
      _objc_storeStrong(&local_1d0);
      _objc_storeStrong(&local_158,0);
      _objc_storeStrong(&local_130,0);
    }
    pcVar2 = &cf_Common_Cancel;
    FUN_0050df80();
    _objc_retainAutoreleasedReturnValue();
    local_3f8 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_3f8 = &cf_Sm;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_228 = local_3f8;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48[0],PTR_s_setCancelButtonTitle_eventAction_026a0f68,local_228,0);
    pcVar2 = local_48[0];
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    _objc_storeStrong(&local_228);
    _objc_storeStrong(&local_108,0);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_60,0);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
    local_4c = 0;
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_28,0);
  return;
}

