// FUN_00070364 @ 00070364

void FUN_00070364(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *puVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  byte local_4cc;
  byte local_49c;
  undefined *local_490;
  char *local_408;
  double local_368;
  undefined *local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  char *local_288;
  char *local_280;
  undefined1 local_273;
  byte local_272;
  byte local_271;
  double local_270;
  double dStack_268;
  double local_260;
  double dStack_258;
  double local_250;
  double dStack_248;
  double local_240;
  double dStack_238;
  double local_230;
  double dStack_228;
  double local_220;
  double dStack_218;
  double local_210;
  double dStack_208;
  double local_200;
  double dStack_1f8;
  byte local_1e2;
  bool local_1e1;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  undefined *local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  double local_188;
  char *local_180;
  char *local_178;
  double local_170;
  double dStack_168;
  double local_160;
  double dStack_158;
  undefined *local_148;
  double local_140;
  double dStack_138;
  double local_130;
  double dStack_128;
  double local_120;
  double local_118;
  undefined8 local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8;
  double local_b0;
  undefined8 local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  double local_80;
  undefined8 local_78;
  double local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50 [3];
  undefined4 local_34;
  ulong local_30;
  undefined *local_28;
  
  dVar9 = DAT_02323ca0;
  local_28 = (undefined *)0x0;
  dVar6 = DAT_02323ca0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_6);
  if ((local_28 == (undefined *)0x0) || (local_30 == 0)) {
    local_34 = 1;
  }
  else {
    puVar1 = local_28;
    _WCRNameplateViewIsProtected();
    if ((((ulong)puVar1 & 1) == 0) &&
       (uVar2 = local_30, _WCRNameplateViewIsProtected(), (uVar2 & 1) == 0)) {
      if ((DAT_028c7e78 & 1) == 0) {
        FUN_0006e628();
      }
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_viewWithTag__026cabe0,0x24f6e4);
      _objc_retainAutoreleasedReturnValue();
      local_50[0] = puVar1;
      if ((DAT_028c7e79 & 1) == 0) {
        if (puVar1 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_removeFromSuperview_026ca800);
        }
        local_34 = 1;
      }
      else {
        puVar1 = local_28;
        FUN_00074404(local_28,DAT_028c7d08,DAT_028c7d10);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_28;
        local_58 = puVar1;
        FUN_00074564(local_28,DAT_028c7e80,puVar1,&cf_list);
        _objc_retainAutoreleasedReturnValue();
        local_60 = puVar3;
        FUN_00074b64();
        _objc_retainAutoreleasedReturnValue();
        local_68 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
        if (puVar3 == (undefined *)0x0) {
          if (local_50[0] != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_removeFromSuperview_026ca800);
          }
          local_34 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
          dVar10 = param_3;
          local_90 = dVar6;
          local_88 = param_2;
          local_80 = param_3;
          local_78 = param_4;
          local_70 = param_3;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
          local_b8 = param_3;
          local_b0 = dVar10;
          local_a8 = param_2;
          local_a0 = dVar6;
          local_98 = dVar6;
          if ((local_70 <= 0.0) || (dVar6 <= 0.0)) {
            if (local_50[0] != (undefined *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_removeFromSuperview_026ca800);
            }
            local_34 = 1;
          }
          else {
            if ((DAT_028c7eb8 <= 0.0) || (5.0 < DAT_028c7eb8)) {
              local_368 = 1.5;
            }
            else {
              local_368 = DAT_028c7eb8;
            }
            local_c0 = local_368;
            if (local_368 < dVar9) {
              local_c0 = dVar9;
            }
            local_c8 = local_70 * local_c0;
            dVar6 = dVar6 * local_c0;
            dVar9 = local_c0;
            local_d0 = dVar6;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
            uVar12 = 0x4000000000000000;
            dVar7 = dVar6 + (local_70 - local_c8) / 2.0 + DAT_028c7ea8;
            dVar11 = DAT_028c7ea8;
            local_f8 = dVar6;
            local_f0 = dVar9;
            local_e8 = dVar10;
            local_e0 = param_3;
            local_d8 = dVar7;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
            dVar8 = (dVar11 + (local_98 - local_d0) / 2.0) - DAT_028c7eb0;
            dVar9 = local_d8;
            dVar10 = local_c8;
            dVar13 = local_d0;
            local_120 = dVar7;
            local_118 = dVar11;
            local_110 = uVar12;
            local_108 = dVar6;
            local_100 = dVar8;
            FUN_00074be0();
            puVar1 = local_50[0];
            local_140 = dVar9;
            dStack_138 = dVar8;
            local_130 = dVar10;
            dStack_128 = dVar13;
            (*(code *)PTR__objc_retain_02578638)();
            local_148 = puVar1;
            if (puVar1 == (undefined *)0x0) {
              puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
              _objc_alloc();
              dStack_168 = dStack_138;
              local_170 = local_140;
              dStack_158 = dStack_128;
              local_160 = local_130;
              dVar9 = local_140;
              dVar6 = dStack_138;
              dVar10 = local_130;
              dVar11 = dStack_128;
              (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithFrame__026ca6e8);
              puVar1 = local_148;
              local_148 = puVar3;
              (*(code *)PTR__objc_release_02578630)(puVar1);
              (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setTag__026caa80,DAT_02323cf8);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_148,PTR_s_setUserInteractionEnabled__026caad8,0);
              puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setBackgroundColor__026ca888);
              (*(code *)PTR__objc_release_02578630)(puVar1);
              (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setClipsToBounds__026ca8c8,1);
              puVar1 = local_68;
              FUN_00074c2c();
              if (((ulong)puVar1 & 1) == 0) {
                local_408 = (char *)0x0;
              }
              else {
                local_408 = "MMEmoticonView";
                _objc_getClass();
              }
              local_178 = local_408;
              if (local_408 == (char *)0x0) {
                puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
                _objc_alloc();
                (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_bounds_026ca548);
                local_1c8 = dVar9;
                local_1c0 = dVar6;
                local_1b8 = dVar10;
                local_1b0 = dVar11;
                (*(code *)PTR__objc_msgSend_02578628)
                          (dVar9,dVar6,dVar10,dVar11,puVar1,PTR_s_initWithFrame__026ca6e8);
                local_1a8 = puVar1;
                (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,0x24f6e5);
                (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setContentMode__026ca8e0,1);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1a8,PTR_s_setAutoresizingMask__026ca878,0x12);
                puVar1 = local_68;
                FUN_00075200();
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setImage__026ca978);
                (*(code *)PTR__objc_release_02578630)(puVar1);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_148,PTR_s_addSubview__026ca4c0,local_1a8);
                _objc_setAssociatedObject(local_148,DAT_026df738,local_68,3);
                _objc_storeStrong(&local_1a8,0);
              }
              else {
                _objc_alloc();
                (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_bounds_026ca548);
                local_1a0 = dVar9;
                local_198 = dVar6;
                local_190 = dVar10;
                local_188 = dVar11;
                (*(code *)PTR__objc_msgSend_02578628)
                          (dVar9,dVar6,dVar10,dVar11,local_408,PTR_s_initWithFrame__026ca6e8);
                local_180 = local_408;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_408,PTR_s_setAutoresizingMask__026ca878,0x12);
                (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_setTag__026caa80,0x24f6e5);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_148,PTR_s_addSubview__026ca4c0,local_180);
                FUN_00074dc8(local_180,local_68);
                FUN_000750a0(local_180);
                _objc_setAssociatedObject(local_148,DAT_026df738,local_68,3);
                _objc_storeStrong(&local_180,0);
              }
              if (DAT_028c7e98 == 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addSubview__026ca4c0,local_148)
                ;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_28,PTR_s_insertSubview_belowSubview__0269e078,local_148,local_30);
              }
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_viewWithTag__026cabe0,0x24f6e5);
              _objc_retainAutoreleasedReturnValue();
              local_1e1 = false;
              local_1d0 = puVar1;
              if (puVar1 == (undefined *)0x0) {
                local_490 = (undefined *)0x0;
              }
              else {
                local_490 = local_148;
                _objc_getAssociatedObject(local_148,DAT_026df738);
                _objc_retainAutoreleasedReturnValue();
                local_1e0 = local_490;
              }
              local_1e1 = puVar1 != (undefined *)0x0;
              (*(code *)PTR__objc_retain_02578638)();
              local_1d8 = local_490;
              if ((local_1e1 & 1U) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1e0);
              }
              local_49c = 0;
              if (local_1d8 != (undefined *)0x0) {
                puVar1 = local_1d8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1d8,PTR_s_isEqualToString__0269ccc8,local_68);
                local_49c = (byte)puVar1;
              }
              local_1e2 = local_49c & 1;
              dStack_208 = dStack_138;
              local_210 = local_140;
              dStack_1f8 = dStack_128;
              local_200 = local_130;
              dStack_228 = dStack_138;
              local_230 = local_140;
              dStack_218 = dStack_128;
              local_220 = local_130;
              dVar9 = local_140;
              dVar6 = dStack_138;
              dVar10 = local_130;
              dVar11 = dStack_128;
              (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setFrame__026ca960);
              if (local_1d0 != (undefined *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_bounds_026ca548);
                local_270 = dVar9;
                dStack_268 = dVar6;
                local_260 = dVar10;
                dStack_258 = dVar11;
                local_250 = dVar9;
                dStack_248 = dVar6;
                local_240 = dVar10;
                dStack_238 = dVar11;
                (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_setFrame__026ca960);
              }
              if (local_1d0 != (undefined *)0x0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1d0,PTR_s_setAutoresizingMask__026ca878,0x12);
              }
              FUN_000750a0(local_1d0);
              pcVar4 = "MMEmoticonView";
              _objc_getClass();
              local_4cc = 0;
              if (pcVar4 != (char *)0x0) {
                puVar1 = local_68;
                FUN_00074c2c();
                local_4cc = (byte)puVar1;
              }
              puVar1 = local_1d0;
              local_271 = local_4cc & 1;
              pcVar4 = "MMEmoticonView";
              _objc_getClass();
              (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,pcVar4);
              local_272 = (byte)puVar1;
              local_273 = local_1d0 != (undefined *)0x0 && (local_271 & 1) != (local_272 & 1);
              if ((bool)local_273) {
                (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_removeFromSuperview_026ca800);
                _objc_storeStrong(&local_1d0,0);
              }
              if (local_1d0 == (undefined *)0x0) {
                if ((local_271 & 1) == 0) {
                  puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
                  _objc_alloc();
                  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_bounds_026ca548);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (dVar9,dVar6,dVar10,dVar11,puVar1,PTR_s_initWithFrame__026ca6e8);
                  local_2b0 = puVar1;
                  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,0x24f6e5);
                  (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_setContentMode__026ca8e0,1);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_2b0,PTR_s_setAutoresizingMask__026ca878,0x12);
                  puVar1 = local_68;
                  FUN_00075200();
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(local_2b0,PTR_s_setImage__026ca978);
                  (*(code *)PTR__objc_release_02578630)(puVar1);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_148,PTR_s_addSubview__026ca4c0,local_2b0);
                  _objc_storeStrong(&local_1d0,local_2b0);
                  _objc_storeStrong(&local_2b0,0);
                }
                else {
                  pcVar4 = "MMEmoticonView";
                  _objc_getClass();
                  local_280 = pcVar4;
                  _objc_alloc();
                  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_bounds_026ca548);
                  local_2a8 = dVar9;
                  local_2a0 = dVar6;
                  local_298 = dVar10;
                  local_290 = dVar11;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (dVar9,dVar6,dVar10,dVar11,pcVar4,PTR_s_initWithFrame__026ca6e8);
                  local_288 = pcVar4;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (pcVar4,PTR_s_setAutoresizingMask__026ca878,0x12);
                  (*(code *)PTR__objc_msgSend_02578628)(local_288,PTR_s_setTag__026caa80,0x24f6e5);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_148,PTR_s_addSubview__026ca4c0,local_288);
                  FUN_00074dc8(local_288,local_68);
                  _objc_storeStrong(&local_1d0,local_288);
                  _objc_storeStrong(&local_288,0);
                }
                _objc_setAssociatedObject(local_148,DAT_026df738,local_68,3);
                local_1e2 = 1;
              }
              puVar1 = local_1d0;
              if (((local_1e2 & 1) == 0) && (local_1d0 != (undefined *)0x0)) {
                pcVar4 = "MMEmoticonView";
                _objc_getClass();
                (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,pcVar4);
                puVar3 = local_1d0;
                if (((ulong)puVar1 & 1) == 0) {
                  puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar1)
                  ;
                  puVar1 = local_1d0;
                  if (((ulong)puVar3 & 1) != 0) {
                    puVar3 = local_68;
                    FUN_00075200();
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setImage__026ca978);
                    (*(code *)PTR__objc_release_02578630)(puVar3);
                  }
                }
                else {
                  FUN_00074dc8(local_1d0,local_68);
                  FUN_000750a0(local_1d0);
                }
                _objc_setAssociatedObject(local_148,DAT_026df738,local_68,3);
              }
              if (DAT_028c7e98 == 0) {
                puVar3 = local_28;
                (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_subviews_026cab40);
                _objc_retainAutoreleasedReturnValue();
                puVar5 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                puVar1 = local_148;
                (*(code *)PTR__objc_release_02578630)();
                (*(code *)PTR__objc_release_02578630)(puVar3);
                if (puVar5 != puVar1) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_28,PTR_s_bringSubviewToFront__026ca550,local_148);
                }
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_28,PTR_s_insertSubview_belowSubview__0269e078,local_148,local_30);
              }
              _objc_storeStrong(&local_1d8);
              _objc_storeStrong(&local_1d0,0);
            }
            _objc_storeStrong(&local_148,0);
            local_34 = 0;
          }
        }
        _objc_storeStrong(&local_68);
        _objc_storeStrong(&local_60,0);
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(local_50,0);
    }
    else {
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

