// FUN_005d3a78 @ 005d3a78

byte FUN_005d3a78(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  cfstringStruct *pcVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  undefined *local_310;
  undefined4 local_308;
  undefined4 local_304;
  code *local_300;
  undefined *local_2f8;
  long local_2f0;
  undefined1 auStack_2e8 [8];
  undefined **local_2e0;
  undefined1 local_2d2;
  undefined1 local_2d1;
  undefined *local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  code *local_2c0;
  undefined *local_2b8;
  long local_2b0;
  undefined1 auStack_2a8 [14];
  undefined1 local_29a;
  undefined1 local_299;
  undefined *local_298;
  undefined4 local_290;
  undefined4 local_28c;
  code *local_288;
  undefined *local_280;
  long local_278;
  undefined1 auStack_270 [15];
  undefined1 local_261;
  undefined *local_260;
  undefined4 local_258;
  undefined4 local_254;
  code *local_250;
  undefined *local_248;
  long local_240;
  undefined1 local_231;
  undefined *local_230;
  undefined4 local_228;
  undefined4 local_224;
  code *local_220;
  undefined *local_218;
  long local_210;
  undefined1 local_201;
  undefined *local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  code *local_1f0;
  undefined *local_1e8;
  long local_1e0;
  undefined1 local_1d3;
  undefined1 local_1d2;
  undefined1 local_1d1;
  undefined *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  code *local_1c0;
  undefined *local_1b8;
  long local_1b0;
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  byte local_198;
  undefined1 local_192;
  undefined1 local_191;
  undefined *local_190;
  undefined4 local_188;
  undefined4 local_184;
  code *local_180;
  undefined *local_178;
  long local_170;
  undefined1 auStack_168 [14];
  undefined1 local_15a;
  undefined1 local_159;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  long local_138;
  undefined1 auStack_130 [14];
  undefined1 local_122;
  undefined1 local_121;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  long local_100;
  undefined1 auStack_f8 [14];
  undefined1 local_ea;
  undefined1 local_e9;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  long local_c8;
  undefined1 auStack_c0 [14];
  undefined1 local_b2;
  undefined1 local_b1;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  long local_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [12];
  undefined4 local_6c;
  cfstringStruct *local_68 [3];
  cfstringStruct *local_50;
  byte local_41;
  long local_40;
  long local_38;
  long local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_3);
  pcVar1 = &cf_WCActionSheet;
  local_41 = param_4;
  _NSClassFromString();
  local_50 = pcVar1;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithTitle__0269d2f8,&cf_bKbRd_O);
  local_68[0] = pcVar1;
  if ((((local_30 == 0) || (local_38 == 0)) || (local_40 == 0)) || (pcVar1 == (cfstringStruct *)0x0)
     ) {
    local_21 = 0;
    local_6c = 1;
  }
  else {
    _objc_initWeak(auStack_78,local_30);
    _objc_initWeak(auStack_80,local_38);
    pcVar1 = local_68[0];
    ppuVar2 = &local_b0;
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_005d530c;
    local_98 = &DAT_025797f0;
    _objc_copyWeak(auStack_88,auStack_80);
    lVar7 = local_40;
    local_b2 = 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = lVar7;
    local_b1 = 1;
    _objc_retainBlock();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf__O_);
    local_b1 = 0;
    local_b2 = 0;
    (*(code *)PTR__objc_release_02578630)(ppuVar2);
    pcVar1 = local_68[0];
    ppuVar2 = &local_e8;
    local_e8 = PTR___NSConcreteStackBlock_02578660;
    local_e0 = 0xc2000000;
    local_dc = 0;
    local_d8 = FUN_005d53a0;
    local_d0 = &DAT_025797f0;
    _objc_copyWeak(auStack_c0,auStack_80);
    lVar7 = local_40;
    local_ea = 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_c8 = lVar7;
    local_e9 = 1;
    _objc_retainBlock();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf_lSO);
    local_e9 = 0;
    local_ea = 0;
    (*(code *)PTR__objc_release_02578630)(ppuVar2);
    pcVar1 = local_68[0];
    ppuVar2 = &local_120;
    local_120 = PTR___NSConcreteStackBlock_02578660;
    local_118 = 0xc2000000;
    local_114 = 0;
    local_110 = FUN_005d5424;
    local_108 = &DAT_025797f0;
    _objc_copyWeak(auStack_f8,auStack_80);
    lVar7 = local_40;
    local_122 = 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_100 = lVar7;
    local_121 = 1;
    _objc_retainBlock();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf_lgSW);
    local_121 = 0;
    local_122 = 0;
    (*(code *)PTR__objc_release_02578630)(ppuVar2);
    pcVar1 = local_68[0];
    ppuVar2 = &local_158;
    local_158 = PTR___NSConcreteStackBlock_02578660;
    local_150 = 0xc2000000;
    local_14c = 0;
    local_148 = FUN_005d54b0;
    local_140 = &DAT_025797f0;
    _objc_copyWeak(auStack_130,auStack_80);
    lVar7 = local_40;
    local_15a = 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_138 = lVar7;
    local_159 = 1;
    _objc_retainBlock();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf_O__lS);
    local_159 = 0;
    local_15a = 0;
    (*(code *)PTR__objc_release_02578630)(ppuVar2);
    pcVar1 = local_68[0];
    ppuVar2 = &local_190;
    local_190 = PTR___NSConcreteStackBlock_02578660;
    local_188 = 0xc2000000;
    local_184 = 0;
    local_180 = FUN_005d553c;
    local_178 = &DAT_025797f0;
    _objc_copyWeak(auStack_168,auStack_80);
    lVar7 = local_40;
    local_192 = 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_170 = lVar7;
    local_191 = 1;
    _objc_retainBlock();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf_OX_vQ);
    local_191 = 0;
    local_192 = 0;
    (*(code *)PTR__objc_release_02578630)(ppuVar2);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar1 = local_68[0];
    if (((ulong)puVar4 & 1) != 0) {
      ppuVar2 = &local_1d0;
      local_1d0 = PTR___NSConcreteStackBlock_02578660;
      local_1c8 = 0xc2000000;
      local_1c4 = 0;
      local_1c0 = FUN_005d55c0;
      local_1b8 = &DAT_0257e3b8;
      _objc_copyWeak(auStack_1a8,auStack_78);
      local_1d3 = 1;
      _objc_copyWeak(auStack_1a0,auStack_80);
      lVar7 = local_40;
      local_1d2 = 1;
      (*(code *)PTR__objc_retain_02578638)();
      local_1b0 = lVar7;
      local_1d1 = 1;
      local_198 = local_41 & 1;
      _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf_dkaggSW);
      local_1d1 = 0;
      local_1d2 = 0;
      local_1d3 = 0;
      (*(code *)PTR__objc_release_02578630)(ppuVar2);
      _objc_storeStrong(&local_1b0,0);
      _objc_destroyWeak(auStack_1a0);
      _objc_destroyWeak(auStack_1a8);
    }
    lVar7 = local_40;
    pcVar1 = local_68[0];
    ppuVar2 = &local_200;
    local_200 = PTR___NSConcreteStackBlock_02578660;
    local_1f8 = 0xc2000000;
    local_1f4 = 0;
    local_1f0 = FUN_005d5db8;
    local_1e8 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_1e0 = lVar7;
    local_201 = 1;
    _objc_retainBlock();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf_NJ_Y);
    local_201 = 0;
    (*(code *)PTR__objc_release_02578630)(ppuVar2);
    lVar7 = local_40;
    pcVar1 = local_68[0];
    ppuVar2 = &local_230;
    local_230 = PTR___NSConcreteStackBlock_02578660;
    local_228 = 0xc2000000;
    local_224 = 0;
    local_220 = FUN_005d5df0;
    local_218 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_210 = lVar7;
    local_231 = 1;
    _objc_retainBlock();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf_NwN);
    local_231 = 0;
    (*(code *)PTR__objc_release_02578630)(ppuVar2);
    lVar7 = local_40;
    pcVar1 = local_68[0];
    ppuVar2 = &local_260;
    local_260 = PTR___NSConcreteStackBlock_02578660;
    local_258 = 0xc2000000;
    local_254 = 0;
    local_250 = FUN_005d5e28;
    local_248 = &DAT_02578c20;
    (*(code *)PTR__objc_retain_02578638)();
    local_240 = lVar7;
    local_261 = 1;
    _objc_retainBlock();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf_NNw);
    local_261 = 0;
    (*(code *)PTR__objc_release_02578630)(ppuVar2);
    pcVar1 = local_68[0];
    ppuVar2 = &local_298;
    local_298 = PTR___NSConcreteStackBlock_02578660;
    local_290 = 0xc2000000;
    local_28c = 0;
    local_288 = FUN_005d5e60;
    local_280 = &DAT_025797f0;
    _objc_copyWeak(auStack_270,auStack_78);
    lVar7 = local_40;
    local_29a = 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_278 = lVar7;
    local_299 = 1;
    _objc_retainBlock();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf_n_CgP);
    local_299 = 0;
    local_29a = 0;
    (*(code *)PTR__objc_release_02578630)(ppuVar2);
    pcVar1 = local_68[0];
    ppuVar2 = &local_2d0;
    local_2d0 = PTR___NSConcreteStackBlock_02578660;
    local_2c8 = 0xc2000000;
    local_2c4 = 0;
    local_2c0 = FUN_005d5f88;
    local_2b8 = &DAT_025797f0;
    _objc_copyWeak(auStack_2a8,auStack_78);
    lVar7 = local_40;
    local_2d2 = 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_2b0 = lVar7;
    local_2d1 = 1;
    _objc_retainBlock();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf_b);
    local_2d1 = 0;
    local_2d2 = 0;
    (*(code *)PTR__objc_release_02578630)(ppuVar2);
    ppuVar2 = &local_310;
    local_310 = PTR___NSConcreteStackBlock_02578660;
    local_308 = 0xc2000000;
    local_304 = 0;
    local_300 = FUN_005d60c4;
    local_2f8 = &DAT_025797f0;
    _objc_copyWeak(auStack_2e8,auStack_80);
    lVar7 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_2f0 = lVar7;
    _objc_retainBlock();
    pcVar5 = local_68[0];
    local_2e0 = ppuVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68[0],PTR_s_respondsToSelector__026ca818,
               PTR_s_addDestructiveButtonWithTitle_ev_026a0f58);
    pcVar1 = local_68[0];
    if (((ulong)pcVar5 & 1) == 0) {
      ppuVar2 = local_2e0;
      _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_addButtonWithTitle_eventAction__026a0f60,&cf_Rddky);
      (*(code *)PTR__objc_release_02578630)(ppuVar2);
      if ((-1 < (long)pcVar1) &&
         (pcVar6 = local_68[0],
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_68[0],PTR_s_respondsToSelector__026ca818,
                    PTR_s_setButtonTextColor_atIndex__026a5bd8), pcVar5 = local_68[0],
         ((ulong)pcVar6 & 1) != 0)) {
        puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3ff0000000000000,DAT_023241f8,DAT_023241f0,PTR__OBJC_CLASS___UIColor_026cdf78,
                   PTR_s_colorWithRed_green_blue_alpha__0269cc48);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_setButtonTextColor_atIndex__026a5bd8,puVar3,pcVar1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
    }
    else {
      ppuVar2 = local_2e0;
      _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_addDestructiveButtonWithTitle_ev_026a0f58,&cf_Rddky);
      (*(code *)PTR__objc_release_02578630)(ppuVar2);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68[0],PTR_s_setCancelButtonTitle_eventAction_026a0f68,&cf_Sm,0);
    pcVar1 = local_68[0];
    lVar7 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(lVar7);
    local_21 = 1;
    local_6c = 1;
    _objc_storeStrong(&local_2e0);
    _objc_storeStrong(&local_2f0,0);
    _objc_destroyWeak(auStack_2e8);
    _objc_storeStrong(&local_2b0,0);
    _objc_destroyWeak(auStack_2a8);
    _objc_storeStrong(&local_278,0);
    _objc_destroyWeak(auStack_270);
    _objc_storeStrong(&local_240,0);
    _objc_storeStrong(&local_210,0);
    _objc_storeStrong(&local_1e0,0);
    _objc_storeStrong(&local_170,0);
    _objc_destroyWeak(auStack_168);
    _objc_storeStrong(&local_138,0);
    _objc_destroyWeak(auStack_130);
    _objc_storeStrong(&local_100,0);
    _objc_destroyWeak(auStack_f8);
    _objc_storeStrong(&local_c8,0);
    _objc_destroyWeak(auStack_c0);
    _objc_storeStrong(&local_90,0);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_storeStrong(local_68);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

