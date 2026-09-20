// FUN_00304a18 @ 00304a18

void FUN_00304a18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined *param_5,undefined8 param_6,byte param_7,byte param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  uint local_1fc;
  uint local_1c4;
  undefined *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  code *local_190;
  undefined *local_188;
  undefined1 auStack_180 [8];
  undefined *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  code *local_168;
  undefined *local_160;
  undefined1 auStack_158 [8];
  undefined1 auStack_150 [8];
  undefined *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  code *local_138;
  undefined *local_130;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  undefined4 local_64;
  undefined *local_60;
  byte local_55;
  undefined1 local_41;
  undefined *local_40;
  byte local_32;
  byte local_31;
  undefined8 local_30;
  undefined *local_28;
  
  uVar1 = DAT_02323da8;
  uVar6 = DAT_02323da8;
  local_32 = param_8;
  local_31 = param_7;
  local_30 = param_6;
  local_28 = param_5;
  (*DAT_028c9ae8)(param_5,param_6,param_7 & 1,param_8 & 1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_disableGlobalCellClickShadowEnab_0269e618);
  local_41 = SUB81(puVar2,0);
  local_1c4 = 1;
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_homepageCornerEnabled_0269fc40);
    local_1c4 = 1;
    if (((ulong)puVar2 & 1) != 0) {
      puVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_tpModeCornerEnabled_026a0230);
      local_1c4 = (uint)puVar2 ^ 1;
    }
  }
  local_55 = (byte)local_1c4 & 1;
  if ((local_1c4 & 1) == 0) {
    local_70 = 0;
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar2;
    while( true ) {
      puVar2 = local_78;
      local_1fc = 0;
      if (local_78 != (undefined *)0x0) {
        puVar3 = PTR__OBJC_CLASS___UITableView_026ce1a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        local_1fc = (uint)puVar2 ^ 1;
      }
      if ((local_1fc & 1) == 0) break;
      puVar3 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_78;
      local_78 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    _objc_storeStrong(&local_70,local_78);
    if (local_70 == 0) {
      local_64 = 1;
    }
    else {
      lVar4 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_indexPathForCell__0269e208,local_28);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = local_70;
      local_80 = lVar4;
      if (lVar4 == 0) {
        local_64 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_section_0269e988);
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_numberOfRowsInSection__026a2008,lVar4);
        puVar2 = local_28;
        local_88 = lVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_90 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (local_90 == (undefined *)0x0) {
          puVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewWithTag__026cabe0,0x24f6e2);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = local_90;
          local_90 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        if ((local_31 & 1) == 0) {
          if (local_90 != (undefined *)0x0) {
            if ((local_32 & 1) == 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_removeFromSuperview_026ca800);
            }
            else {
              _objc_initWeak(auStack_150,local_90);
              puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
              puVar2 = PTR___NSConcreteStackBlock_02578660;
              local_178 = PTR___NSConcreteStackBlock_02578660;
              local_170 = 0xc2000000;
              local_16c = 0;
              local_168 = FUN_003242b8;
              local_160 = &DAT_02578da0;
              _objc_copyWeak(auStack_158,auStack_150);
              local_1a0 = puVar2;
              local_198 = 0xc2000000;
              local_194 = 0;
              local_190 = FUN_0032433c;
              local_188 = &DAT_0257c158;
              _objc_copyWeak(auStack_180,auStack_150);
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar1,puVar3,PTR_s_animateWithDuration_animations_c_026ca4e8,&local_178,
                         &local_1a0);
              _objc_destroyWeak(auStack_180);
              _objc_destroyWeak(auStack_158);
              _objc_destroyWeak(auStack_150);
            }
          }
        }
        else {
          if (local_90 == (undefined *)0x0) {
            puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
            _objc_alloc_init();
            puVar2 = local_90;
            local_90 = puVar3;
            (*(code *)PTR__objc_release_02578630)(puVar2);
            (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setTag__026caa80,0x24f6e2);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_90,PTR_s_setUserInteractionEnabled__026caad8,0);
            puVar2 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)();
            if (puVar2 == (undefined *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addSubview__026ca4c0,local_90);
            }
            else {
              puVar2 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar2);
            }
          }
          puVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (puVar2 == (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
            local_110 = uVar6;
            uStack_108 = param_2;
            local_100 = param_3;
            uStack_f8 = param_4;
            local_f0 = uVar6;
            uStack_e8 = param_2;
            local_e0 = param_3;
            uStack_d8 = param_4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar6,param_2,param_3,param_4,local_90,PTR_s_setFrame__026ca960);
          }
          else {
            puVar2 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            local_d0 = uVar6;
            uStack_c8 = param_2;
            local_c0 = param_3;
            uStack_b8 = param_4;
            local_b0 = uVar6;
            uStack_a8 = param_2;
            local_a0 = param_3;
            uStack_98 = param_4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar6,param_2,param_3,param_4,local_90,PTR_s_setFrame__026ca960);
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          FUN_00319824(local_40);
          FUN_0031971c(local_90);
          puVar2 = local_90;
          local_118 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(0);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
          lVar5 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_row_0269e210);
          uVar6 = local_118;
          if (lVar5 == 0) {
            puVar2 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(uVar6);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            puVar2 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          lVar5 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_row_0269e210);
          uVar6 = local_118;
          if (lVar5 == local_88 + -1) {
            puVar2 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(uVar6);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            puVar2 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_setMaskedCorners__0269ebc8,(ulong)puVar3 | 0xc);
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          puVar2 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0,DAT_02323c88,PTR__OBJC_CLASS___UIColor_026cdf78,
                     PTR_s_colorWithWhite_alpha__0269cf30);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setBackgroundColor__026ca888);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (puVar2 != (undefined *)0x0) {
            puVar2 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          if ((local_32 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (0x3ff0000000000000,local_90,PTR_s_setAlpha__026ca860);
          }
          else {
            _objc_initWeak(auStack_120,local_90);
            (*(code *)PTR__objc_msgSend_02578628)(0,local_90,PTR_s_setAlpha__026ca860);
            puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
            local_148 = PTR___NSConcreteStackBlock_02578660;
            local_140 = 0xc2000000;
            local_13c = 0;
            local_138 = FUN_0032422c;
            local_130 = &DAT_02578da0;
            _objc_copyWeak(auStack_128,auStack_120);
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,puVar2,PTR_s_animateWithDuration_animations__026ca4e0,&local_148);
            _objc_destroyWeak(auStack_128);
            _objc_destroyWeak(auStack_120);
          }
        }
        _objc_storeStrong(&local_90,0);
        local_64 = 0;
      }
      _objc_storeStrong(&local_80,0);
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
  }
  else {
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_60 == (undefined *)0x0) {
      puVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewWithTag__026cabe0,0x24f6e2);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_60;
      local_60 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    if (local_60 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_removeFromSuperview_026ca800);
    }
    local_64 = 1;
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_40,0);
  return;
}

