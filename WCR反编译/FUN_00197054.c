// FUN_00197054 @ 00197054

/* WARNING: Removing unreachable block (ram,0x001981e4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00197054(double param_1,undefined8 param_2,undefined8 param_3,double param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  undefined *local_630;
  double *local_5d8;
  undefined *local_490;
  undefined *local_378;
  undefined *local_2e8;
  double local_258;
  undefined *local_250;
  double local_248;
  undefined1 local_239;
  undefined *local_238;
  undefined *local_230;
  byte local_221;
  double local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  double dStack_208;
  double local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  double dStack_1e8;
  byte local_1d9;
  undefined *local_1d8;
  double local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  double dStack_1b8;
  double local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  double local_190;
  undefined *local_188;
  double local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  double dStack_168;
  undefined *local_158;
  double local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  double dStack_138;
  double local_130;
  undefined8 local_128;
  undefined8 local_120;
  double local_118;
  double local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  double dStack_f8;
  double local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  double dStack_d0;
  double local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  double dStack_b0;
  byte local_a1;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined1 local_61;
  undefined *local_60;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined *local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_6);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_7);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_8);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_9);
  local_61 = 0;
  bVar2 = true;
  uVar1 = local_30 != (undefined *)0x0;
  if ((bool)uVar1) {
    puVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = puVar3 == (undefined *)0x0;
    local_61 = uVar1;
    local_60 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar1 = local_61;
  }
  local_61 = uVar1;
  if (bVar2) {
    local_68 = 1;
  }
  else {
    puVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_78 = (undefined *)0x0;
    local_80 = (undefined *)0x0;
    puVar3 = local_30;
    FUN_0019bc60();
    _objc_retainAutoreleasedReturnValue();
    local_88 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_font_0269ea00);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_88;
    local_90 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_textColor_0269f098);
    _objc_retainAutoreleasedReturnValue();
    local_a1 = 0;
    local_378 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      FUN_0019bebc();
      _objc_retainAutoreleasedReturnValue();
      local_a0 = local_378;
    }
    local_a1 = puVar4 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = local_378;
    if ((local_a1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    FUN_0019bf3c(local_30,0);
    local_110 = param_1;
    uStack_108 = param_2;
    local_100 = param_3;
    dStack_f8 = param_4;
    local_c8 = param_1;
    uStack_c0 = param_2;
    local_b8 = param_3;
    dStack_b0 = param_4;
    FUN_0019c914(local_28,local_30,local_88);
    local_e8 = param_1;
    uStack_e0 = param_2;
    local_d8 = param_3;
    dStack_d0 = param_4;
    if (local_70 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc();
      puVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_130 = param_4;
      local_128 = param_3;
      local_120 = param_2;
      local_118 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)
                (param_4,param_3,param_2,param_1,puVar4,PTR_s_initWithFrame__026ca6e8);
      puVar3 = local_70;
      local_70 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setTag__026caa80,DAT_02323dd0);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setUserInteractionEnabled__026caad8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setOpaque__026ca9f8,0);
      puVar4 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setAutoresizingMask__026ca878,0x12);
      uStack_148 = uStack_c0;
      local_150 = local_c8;
      dStack_138 = dStack_b0;
      local_140 = local_b8;
      FUN_0019d024(local_c8,uStack_c0,local_b8,dStack_b0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_78;
      local_78 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (local_78 == (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
        _objc_alloc();
        uStack_178 = uStack_c0;
        local_180 = local_c8;
        dStack_168 = dStack_b0;
        local_170 = local_b8;
        dVar6 = local_c8;
        uVar7 = uStack_c0;
        uVar8 = local_b8;
        dVar9 = dStack_b0;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithFrame__026ca6e8);
        local_158 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTag__026caa80,DAT_02323dd8);
        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setUserInteractionEnabled__026caad8,0)
        ;
        puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_setClipsToBounds__026ca8c8,0);
        puVar3 = PTR_WCRefineContactsPackAvatarImageView_026ce3a0;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_bounds_026ca548);
        local_1a8 = dVar6;
        local_1a0 = uVar7;
        local_198 = uVar8;
        local_190 = dVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar6,uVar7,uVar8,dVar9,puVar3,PTR_s_initWithFrame__026ca6e8);
        local_188 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTag__026caa80,DAT_02323de0);
        (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setAutoresizingMask__026ca878,0x12);
        (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setContentMode__026ca8e0,2);
        (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setClipsToBounds__026ca8c8,1);
        FUN_0019d350(local_188);
        (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addSubview__026ca4c0,local_188);
        _objc_storeStrong(&local_78,local_158);
        _objc_storeStrong(&local_188);
        _objc_storeStrong(&local_158,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addSubview__026ca4c0,local_78);
      puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      _objc_alloc();
      uStack_1c8 = uStack_e0;
      local_1d0 = local_e8;
      dStack_1b8 = dStack_d0;
      local_1c0 = local_d8;
      param_4 = local_e8;
      param_3 = uStack_e0;
      param_2 = local_d8;
      param_1 = dStack_d0;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithFrame__026ca6e8);
      puVar3 = local_80;
      local_80 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setTag__026caa80,DAT_02323de8);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setAutoresizingMask__026ca878,0x12);
      local_490 = local_90;
      local_1d9 = 0;
      bVar2 = local_90 == (undefined *)0x0;
      if (bVar2) {
        param_3 = *(undefined8 *)PTR__UIFontWeightRegular_02578158;
        param_4 = 17.0;
        local_490 = PTR__OBJC_CLASS___UIFont_026cdfc0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
        _objc_retainAutoreleasedReturnValue();
        local_1d8 = local_490;
      }
      local_1d9 = bVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setFont__026ca958,local_490);
      if ((local_1d9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1d8);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setTextColor__026caa98,local_98);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setNumberOfLines__026ca9d8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_addSubview__026ca4c0,local_80);
      puVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else {
      puVar4 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_viewWithTag__026cabe0,0x24fb32);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_78;
      local_78 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar4 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_viewWithTag__026cabe0,0x24fb33);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_80;
      local_80 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    FUN_00199294(local_30,1);
    puVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_220 = param_4;
    uStack_218 = param_3;
    local_210 = param_2;
    dStack_208 = param_1;
    local_200 = param_4;
    uStack_1f8 = param_3;
    local_1f0 = param_2;
    dStack_1e8 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_4,param_3,param_2,param_1,local_70,PTR_s_setFrame__026ca960);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_221 = (byte)puVar4;
    puVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_230 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_239 = 0;
    bVar2 = false;
    uVar1 = local_230 == (undefined *)0x0;
    if ((bool)uVar1) {
      puVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_backgroundColor_026ca518);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = puVar3 != (undefined *)0x0;
      local_239 = uVar1;
      local_238 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      uVar1 = local_239;
    }
    local_239 = uVar1;
    if (bVar2) {
      puVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_backgroundColor_026ca518);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_230;
      local_230 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    if (local_230 == (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithDynamicProvider__0269e538,
                 &PTR___NSConcreteGlobalBlock_0257aaf0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_230;
      local_230 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    if ((local_221 & 1) != 0) {
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_230;
      local_230 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setBackgroundColor__026ca888,local_230);
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setOpaque__026ca9f8,0);
    puVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_30;
    local_248 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_30;
    local_250 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_30;
    local_258 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_248 <= 0.0) {
      local_5d8 = &local_258;
    }
    else {
      local_5d8 = &local_248;
    }
    dVar6 = *local_5d8;
    puVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(dVar6);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_78 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,uStack_c0,local_b8,dStack_b0,local_78,PTR_s_setFrame__026ca960);
      FUN_0019dc48(local_78,local_48);
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_bringSubviewToFront__026ca550,local_78);
    }
    if (local_80 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,uStack_e0,local_d8,dStack_d0,local_80,PTR_s_setFrame__026ca960);
      local_630 = local_90;
      bVar2 = local_90 == (undefined *)0x0;
      if (bVar2) {
        local_630 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_font_0269ea00);
        _objc_retainAutoreleasedReturnValue();
        local_2e8 = local_630;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setFont__026ca958,local_630);
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_2e8);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setTextColor__026caa98,local_98);
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setText__026caa88,local_40);
    }
    FUN_0019e234(local_70);
    puVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    FUN_0019e234();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_230);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
    local_68 = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

