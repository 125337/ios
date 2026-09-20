// showStickyStatusText: @ 00f9a684

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineHelper::showStickyStatusText_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 in_d1;
  double dVar10;
  undefined8 uVar11;
  double in_d2;
  undefined8 uVar12;
  undefined8 in_d3;
  undefined8 uVar13;
  undefined *local_2f0;
  undefined *local_2d0;
  double local_2b8;
  double local_2b0;
  undefined *local_248;
  undefined *local_238;
  undefined *local_1c0;
  undefined *local_1b0;
  undefined *local_1a8;
  double local_1a0;
  double dStack_198;
  double local_190;
  undefined8 uStack_188;
  double local_178;
  undefined8 local_170;
  double local_158;
  double local_150;
  double local_138;
  double dStack_130;
  double local_128;
  undefined8 uStack_120;
  double local_118;
  undefined8 local_110;
  double local_108;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined *local_98;
  byte local_89;
  undefined *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  long local_50;
  ID local_48;
  undefined4 local_3c;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_3c = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    puVar6 = PTR___dispatch_main_q_02578680;
    if (((ulong)puVar3 & 1) == 0) {
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_38;
      local_70 = PTR___NSConcreteStackBlock_02578660;
      local_68 = 0xc2000000;
      local_64 = 0;
      local_60 = FUN_00f9b2f4;
      local_58 = &DAT_0257cc98;
      local_48 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = lVar2;
      _dispatch_async(puVar6,&local_70);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      local_3c = 1;
      _objc_storeStrong(&local_50,0);
    }
    else {
      FUN_00f9b33c();
      _objc_retainAutoreleasedReturnValue();
      local_78 = puVar3;
      if (puVar3 == (undefined1 *)0x0) {
        local_3c = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_viewWithTag__026cabe0,0x57435253);
        _objc_retainAutoreleasedReturnValue();
        local_88 = (undefined *)0x0;
        local_80 = puVar3;
        if (puVar3 == (undefined1 *)0x0) {
          local_89 = 0;
          puVar4 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_traitCollection_026caba8);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_89 = puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          puVar6 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
          _objc_alloc();
          uVar8 = 2;
          if ((local_89 & 1) == 0) {
            uVar8 = 1;
          }
          puVar3 = PTR__OBJC_CLASS___UIBlurEffect_026cdf90;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIBlurEffect_026cdf90,PTR_s_effectWithStyle__026ca628,uVar8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_initWithEffect__026ca6e0);
          local_98 = puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setTag__026caa80,DAT_0232c570);
          puVar6 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(0x4030000000000000);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setClipsToBounds__026ca8c8,1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_98,PTR_s_setUserInteractionEnabled__026caad8,0);
          dVar7 = 320.0;
          local_a8 = 320.0;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_bounds_026ca548);
          local_d0 = dVar7;
          _CGRectGetWidth(dVar7,in_d1);
          local_108 = dVar7 - 32.0;
          local_2b0 = local_108;
          if (local_a8 < local_108) {
            local_2b0 = local_a8;
          }
          local_d8 = local_2b0;
          local_a0 = local_2b0;
          local_e0 = 28.0;
          uVar8 = 0x403c000000000000;
          local_e8 = 28.0;
          local_b0 = local_108;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_safeAreaInsets_026ca828);
          local_150 = in_d2 + 12.0;
          local_2b8 = local_150;
          if (local_150 <= local_e8) {
            local_2b8 = local_e8;
          }
          local_118 = local_2b8;
          local_e0 = local_2b8;
          local_110 = uVar8;
          local_f0 = local_150;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_bounds_026ca548);
          local_158 = local_2b8;
          _CGRectGetWidth(local_2b8,local_150);
          uVar8 = 0x4000000000000000;
          dVar9 = (local_2b8 - local_a0) / 2.0;
          dVar7 = dVar9;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_bounds_026ca548);
          local_178 = dVar7;
          local_170 = uVar8;
          _CGRectGetHeight(dVar7,uVar8,in_d2,in_d3);
          uVar8 = 0x4050000000000000;
          dVar10 = (dVar7 - local_e0) - 64.0;
          dVar7 = local_a0;
          FUN_00f9ba24();
          local_1a0 = dVar9;
          dStack_198 = dVar10;
          local_190 = dVar7;
          uStack_188 = uVar8;
          local_138 = dVar9;
          dStack_130 = dVar10;
          local_128 = dVar7;
          uStack_120 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (dVar9,dVar10,dVar7,uVar8,local_98,PTR_s_setFrame__026ca960);
          puVar6 = PTR__OBJC_CLASS___UIActivityIndicatorView_026cebe8;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = (local_89 & 1) == 0;
          local_2d0 = PTR__OBJC_CLASS___UIColor_026cdf78;
          local_1a8 = puVar6;
          if (bVar1) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_darkGrayColor_026acd58);
            _objc_retainAutoreleasedReturnValue();
            local_1c0 = local_2d0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
            _objc_retainAutoreleasedReturnValue();
            local_1b0 = local_2d0;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setColor__026acd60,local_2d0);
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_1c0);
          }
          else {
            (*(code *)PTR__objc_release_02578630)(local_1b0);
          }
          uVar8 = 0x4030000000000000;
          uVar11 = 0x4034000000000000;
          uVar13 = 0x4038000000000000;
          uVar12 = 0x4038000000000000;
          FUN_00f9ba24();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar8,uVar11,uVar12,uVar13,local_1a8,PTR_s_setFrame__026ca960);
          (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_startAnimating_026cab18);
          puVar6 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_contentView_026ca5a8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar6);
          puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
          _objc_alloc();
          dVar7 = local_a0 - 60.0;
          uVar12 = 0x4048000000000000;
          uVar8 = 0x4048000000000000;
          uVar11 = 0x4020000000000000;
          FUN_00f9ba24();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar8,uVar11,dVar7,uVar12,puVar3,PTR_s_initWithFrame__026ca6e8);
          puVar6 = local_88;
          local_88 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setTag__026caa80,1);
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setNumberOfLines__026ca9d8,2);
          puVar6 = PTR__OBJC_CLASS___UIFont_026cdfc0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x402a000000000000,*(undefined8 *)PTR__UIFontWeightMedium_02578150,
                     PTR__OBJC_CLASS___UIFont_026cdfc0,
                     PTR_s_monospacedDigitSystemFontOfSize__026a6d18);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setFont__026ca958);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          bVar1 = (local_89 & 1) == 0;
          local_2f0 = PTR__OBJC_CLASS___UIColor_026cdf78;
          if (bVar1) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
            _objc_retainAutoreleasedReturnValue();
            local_248 = local_2f0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
            _objc_retainAutoreleasedReturnValue();
            local_238 = local_2f0;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setTextColor__026caa98,local_2f0);
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_248);
          }
          else {
            (*(code *)PTR__objc_release_02578630)(local_238);
          }
          puVar6 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_contentView_026ca5a8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_addSubview__026ca4c0,local_98);
          _objc_storeStrong(&local_80,local_98);
          _objc_storeStrong(&local_1a8);
          _objc_storeStrong(&local_98,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_viewWithTag__026cabe0,1);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = local_88;
          local_88 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar6);
          puVar6 = local_88;
          puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
          if (((ulong)puVar6 & 1) == 0) {
            _objc_storeStrong(&local_88,0);
          }
        }
        puVar6 = local_88;
        puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((ulong)puVar6 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setText__026caa88,local_38);
        }
        _objc_storeStrong(&local_88);
        _objc_storeStrong(&local_80,0);
        local_3c = 0;
      }
      _objc_storeStrong(&local_78,0);
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

