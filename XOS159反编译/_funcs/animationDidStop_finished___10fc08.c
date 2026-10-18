// animationDidStop:finished: @0x10fc08


/* Function Stack Size: 0x1c bytes */



void XZYBubblePetAnimationDelegate::animationDidStop_finished_

               (ID param_1,SEL param_2,ID param_3,bool param_4)



{

  int iVar1;

  long lVar3;

  long lVar4;

  long lVar5;

  long lVar6;

  undefined8 uVar7;

  ulong uVar8;

  long lVar9;

  int iVar2;

  undefined8 uVar10;

  undefined8 uVar11;

  dispatch_time_t dVar12;

  ID IVar13;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 extraout_x1_07;

  undefined8 extraout_x1_08;

  undefined8 extraout_x1_09;

  undefined8 extraout_x1_10;

  undefined8 extraout_x1_11;

  float fVar14;

  float fVar15;

  undefined8 uVar16;

  undefined8 uVar17;

  undefined8 in_d1;

  undefined1 auVar18 [16];

  undefined1 auVar19 [16];

  long local_308;

  long local_300;

  long local_2f8;

  undefined *local_2f0;

  undefined8 local_2e8;

  code *local_2e0;

  undefined *puStack_2d8;

  ID local_2d0;

  ID local_2c8;

  undefined *local_2c0;

  undefined8 local_2b8;

  code *local_2b0;

  undefined *puStack_2a8;

  ID local_2a0;

  ID local_298;

  undefined8 local_290;

  undefined8 uStack_288;

  undefined8 uStack_280;

  undefined8 uStack_278;

  undefined8 local_270;

  undefined8 uStack_268;

  undefined8 uStack_260;

  undefined8 uStack_258;

  undefined8 local_250;

  undefined8 uStack_248;

  undefined8 uStack_240;

  undefined8 uStack_238;

  undefined8 local_230;

  undefined8 uStack_228;

  undefined8 uStack_220;

  undefined8 uStack_218;

  undefined8 local_210;

  undefined8 uStack_208;

  undefined8 uStack_200;

  undefined8 uStack_1f8;

  undefined8 local_1f0;

  undefined8 uStack_1e8;

  undefined8 uStack_1e0;

  undefined8 uStack_1d8;

  undefined8 local_1d0;

  undefined8 uStack_1c8;

  undefined8 uStack_1c0;

  undefined8 uStack_1b8;

  undefined8 local_1b0;

  undefined8 uStack_1a8;

  undefined8 uStack_1a0;

  undefined8 uStack_198;

  undefined8 local_190;

  undefined8 uStack_188;

  undefined8 uStack_180;

  undefined8 uStack_178;

  undefined8 local_170;

  undefined8 uStack_168;

  undefined8 uStack_160;

  undefined8 uStack_158;

  undefined8 local_150;

  undefined8 uStack_148;

  undefined8 uStack_140;

  undefined8 uStack_138;

  undefined8 local_130;

  undefined8 uStack_128;

  undefined8 uStack_120;

  undefined8 uStack_118;

  undefined *local_110;

  undefined8 local_108;

  code *local_100;

  undefined *puStack_f8;

  long local_f0;

  undefined *local_e8;

  undefined8 local_e0;

  code *local_d8;

  undefined *puStack_d0;

  long local_c8;

  undefined *local_c0;

  undefined8 local_b8;

  code *local_b0;

  undefined *puStack_a8;

  long local_a0;

  

  _objc_retain(param_3);

  if (param_4 == 0) goto LAB_00110718;

  FUN_00299d40(param_1);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 != 0) {

    _objc_getAssociatedObject(lVar3,"xzy_bubble_pet_path_data");

    lVar4 = _objc_retainAutoreleasedReturnValue();

    _objc_getAssociatedObject(lVar3,"xzy_bubble_pet_segment_index");

    lVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_getAssociatedObject(lVar3,"xzy_bubble_pet_segment_duration");

    lVar6 = _objc_retainAutoreleasedReturnValue();

    _objc_getAssociatedObject(lVar3,"xzy_bubble_pet_should_loop");

    uVar7 = _objc_retainAutoreleasedReturnValue();

    if ((((lVar4 != 0) && (uVar8 = FUN_00293860(lVar4), 1 < uVar8)) && (lVar5 != 0)) && (lVar6 != 0)

       ) {

      lVar9 = FUN_002a5a20(lVar5);

      fVar14 = (float)FUN_00295480(lVar6);

      iVar1 = FUN_002924e0(uVar7);

      auVar18 = FUN_00293860(lVar4);

      uVar10 = auVar18._8_8_;

      uVar8 = lVar9 + 1;

      if (uVar8 < auVar18._0_8_) {

LAB_0010fd28:

        FUN_00299480(&_OBJC_CLASS___NSNumber,uVar10,uVar8);

        uVar10 = _objc_retainAutoreleasedReturnValue();

        _objc_setAssociatedObject(lVar3,"xzy_bubble_pet_segment_index",uVar10,1);

        _objc_release(uVar10);

        auVar18 = FUN_00293860(lVar4);

        if (uVar8 + 1 < auVar18._0_8_) {

          FUN_00299500(lVar4,auVar18._8_8_,uVar8);

          auVar18 = _objc_retainAutoreleasedReturnValue();

          local_300 = auVar18._0_8_;

          FUN_00299500(lVar4,auVar18._8_8_,uVar8 + 1);

          auVar18 = _objc_retainAutoreleasedReturnValue();

          local_2f8 = auVar18._0_8_;

          FUN_00299540(local_300,auVar18._8_8_,&cf_pos);

          uVar11 = _objc_retainAutoreleasedReturnValue();

          uVar16 = FUN_00290a80();

          uVar10 = in_d1;

          _objc_release(uVar11);

          FUN_00299540(local_2f8,extraout_x1,&cf_pos);

          uVar11 = _objc_retainAutoreleasedReturnValue();

          uVar17 = FUN_00290a80();

          _objc_release(uVar11);

          FUN_00299540(local_2f8,extraout_x1_00,&cf_jump);

          uVar11 = _objc_retainAutoreleasedReturnValue();

          iVar1 = FUN_002924e0();

          _objc_release(uVar11);

          FUN_00299540(local_2f8,extraout_x1_01,&cf_sleep);

          auVar18 = _objc_retainAutoreleasedReturnValue();

          local_308 = auVar18._0_8_;

          FUN_00299540(local_2f8,auVar18._8_8_,&cf_rotation);

          uVar11 = _objc_retainAutoreleasedReturnValue();

          fVar15 = (float)FUN_00295480();

          _objc_release(uVar11);

          FUN_00299540(local_2f8,extraout_x1_02,&cf_mirror);

          uVar11 = _objc_retainAutoreleasedReturnValue();

          iVar2 = FUN_002924e0();

          _objc_release(uVar11);

          uStack_148 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x48);

          local_150 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x40);

          uStack_138 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x58);

          uStack_140 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x50);

          uStack_128 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x68);

          local_130 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x60);

          uStack_118 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x78);

          uStack_120 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x70);

          uStack_188 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 8);

          local_190 = *(undefined8 *)PTR__CATransform3DIdentity_00388580;

          uStack_178 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x18);

          uStack_180 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x10);

          uStack_168 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x28);

          local_170 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x20);

          uStack_158 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x38);

          uStack_160 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x30);

          if (iVar2 != 0) {

            uStack_248 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x48);

            local_250 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x40);

            uStack_238 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x58);

            uStack_240 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x50);

            uStack_228 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x68);

            local_230 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x60);

            uStack_218 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x78);

            uStack_220 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x70);

            uStack_288 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 8);

            local_290 = *(undefined8 *)PTR__CATransform3DIdentity_00388580;

            uStack_278 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x18);

            uStack_280 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x10);

            uStack_268 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x28);

            local_270 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x20);

            uStack_258 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x38);

            uStack_260 = *(undefined8 *)(PTR__CATransform3DIdentity_00388580 + 0x30);

            _CATransform3DScale(&local_210,0xbff0000000000000,0x3ff0000000000000,0x3ff0000000000000,

                                &local_290);

            uStack_148 = uStack_1c8;

            local_150 = local_1d0;

            uStack_138 = uStack_1b8;

            uStack_140 = uStack_1c0;

            uStack_128 = uStack_1a8;

            local_130 = local_1b0;

            uStack_118 = uStack_198;

            uStack_120 = uStack_1a0;

            uStack_188 = uStack_208;

            local_190 = local_210;

            uStack_178 = uStack_1f8;

            uStack_180 = uStack_200;

            uStack_168 = uStack_1e8;

            local_170 = local_1f0;

            uStack_158 = uStack_1d8;

            uStack_160 = uStack_1e0;

          }

          if (fVar15 != 0.0) {

            uStack_248 = uStack_148;

            local_250 = local_150;

            uStack_238 = uStack_138;

            uStack_240 = uStack_140;

            uStack_228 = uStack_128;

            local_230 = local_130;

            uStack_218 = uStack_118;

            uStack_220 = uStack_120;

            uStack_288 = uStack_188;

            local_290 = local_190;

            uStack_278 = uStack_178;

            uStack_280 = uStack_180;

            uStack_268 = uStack_168;

            local_270 = local_170;

            uStack_258 = uStack_158;

            uStack_260 = uStack_160;

            _CATransform3DRotate

                      (&local_210,((double)fVar15 * 3.141592653589793) / 180.0,0,0,

                       0x3ff0000000000000,&local_290);

            uStack_148 = uStack_1c8;

            local_150 = local_1d0;

            uStack_138 = uStack_1b8;

            uStack_140 = uStack_1c0;

            uStack_128 = uStack_1a8;

            local_130 = local_1b0;

            uStack_118 = uStack_198;

            uStack_120 = uStack_1a0;

            uStack_188 = uStack_208;

            local_190 = local_210;

            uStack_178 = uStack_1f8;

            uStack_180 = uStack_200;

            uStack_168 = uStack_1e8;

            local_170 = local_1f0;

            uStack_158 = uStack_1d8;

            uStack_160 = uStack_1e0;

          }

          FUN_00292180(&_OBJC_CLASS___CATransaction);

          FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_03,1);

          FUN_00297e40(lVar3);

          auVar18 = _objc_retainAutoreleasedReturnValue();

          uStack_1c8 = uStack_148;

          local_1d0 = local_150;

          uStack_1b8 = uStack_138;

          uStack_1c0 = uStack_140;

          uStack_1a8 = uStack_128;

          local_1b0 = local_130;

          uStack_198 = uStack_118;

          uStack_1a0 = uStack_120;

          uStack_208 = uStack_188;

          local_210 = local_190;

          uStack_1f8 = uStack_178;

          uStack_200 = uStack_180;

          uStack_1e8 = uStack_168;

          local_1f0 = local_170;

          uStack_1d8 = uStack_158;

          uStack_1e0 = uStack_160;

          FUN_002a21c0(auVar18._0_8_,auVar18._8_8_,&local_210);

          _objc_release(auVar18._0_8_);

          if (local_308 == 0) {

            if (iVar1 == 0) {

              FUN_00297e40(lVar3);

              uVar11 = _objc_retainAutoreleasedReturnValue();

              FUN_002a07e0(uVar16,in_d1);

              _objc_release(uVar11);

              FUN_002930a0(&_OBJC_CLASS___CATransaction);

              FUN_002918e0(&_OBJC_CLASS___CABasicAnimation,extraout_x1_08,&cf_position);

              IVar13 = _objc_retainAutoreleasedReturnValue();

              FUN_002a60e0(uVar16,in_d1,&_OBJC_CLASS___NSValue);

              auVar18 = _objc_retainAutoreleasedReturnValue();

              FUN_0029e600(IVar13,auVar18._8_8_,auVar18._0_8_);

              _objc_release(auVar18._0_8_);

              FUN_002a60e0(uVar17,uVar10,&_OBJC_CLASS___NSValue);

              auVar18 = _objc_retainAutoreleasedReturnValue();

              FUN_002a20a0(IVar13,auVar18._8_8_,auVar18._0_8_);

              _objc_release(auVar18._0_8_);

              FUN_0029de80((double)fVar14,IVar13);

              FUN_002a0ca0(IVar13,extraout_x1_09,0);

              FUN_0029e3c0(IVar13,extraout_x1_10,*(undefined8 *)PTR__kCAFillModeForwards_00388600);

              FUN_0029dca0(IVar13,extraout_x1_11,param_1);

              FUN_00297e40(lVar3);

              auVar18 = _objc_retainAutoreleasedReturnValue();

              FUN_00291020(auVar18._0_8_,auVar18._8_8_,IVar13,&cf_xzy_bubble_pet_segment);

              lVar9 = auVar18._0_8_;

LAB_001106cc:

              _objc_release(lVar9);

            }

            else {

              FUN_00297e40(lVar3);

              uVar11 = _objc_retainAutoreleasedReturnValue();

              FUN_002a07e0(uVar17,uVar10);

              _objc_release(uVar11);

              FUN_002930a0(&_OBJC_CLASS___CATransaction);

              local_2f0 = PTR___NSConcreteStackBlock_003886f0;

              local_2e8 = 0xc2000000;

              local_2e0 = FUN_00110a0c;

              puStack_2d8 = &DAT_00388d50;

              local_2d0 = param_1;

              _objc_retain(param_3);

              local_2c8 = param_3;

              _dispatch_async(PTR___dispatch_main_q_00388740,&local_2f0);

              IVar13 = local_2c8;

            }

          }

          else {

            fVar14 = (float)FUN_00295480();

            FUN_00297e40(lVar3);

            uVar11 = _objc_retainAutoreleasedReturnValue();

            FUN_002a07e0(uVar17,uVar10);

            _objc_release(uVar11);

            FUN_002930a0(&_OBJC_CLASS___CATransaction);

            dVar12 = _dispatch_time(0,(long)(fVar14 * 1e+06));

            local_2c0 = PTR___NSConcreteStackBlock_003886f0;

            local_2b8 = 0xc2000000;

            local_2b0 = FUN_001109fc;

            puStack_2a8 = &DAT_00388d50;

            local_2a0 = param_1;

            _objc_retain(param_3);

            local_298 = param_3;

            _dispatch_after(dVar12,PTR___dispatch_main_q_00388740,&local_2c0);

            IVar13 = local_298;

          }

LAB_001106d4:

          _objc_release(IVar13);

        }

        else {

          FUN_00299500(lVar4,auVar18._8_8_,uVar8);

          auVar18 = _objc_retainAutoreleasedReturnValue();

          local_300 = auVar18._0_8_;

          FUN_00299540(local_300,auVar18._8_8_,&cf_pos);

          uVar10 = _objc_retainAutoreleasedReturnValue();

          uVar11 = FUN_00290a80();

          _objc_release(uVar10);

          FUN_00292180(&_OBJC_CLASS___CATransaction);

          FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_04,1);

          FUN_00297e40(lVar3);

          uVar10 = _objc_retainAutoreleasedReturnValue();

          FUN_002a07e0(uVar11,in_d1);

          _objc_release(uVar10);

          FUN_002930a0(&_OBJC_CLASS___CATransaction);

          _objc_getAssociatedObject(lVar3,"xzy_bubble_pet_delloc_ms");

          local_2f8 = _objc_retainAutoreleasedReturnValue();

          if ((local_2f8 == 0) || (fVar14 = (float)FUN_00295480(), fVar14 < 0.0)) goto LAB_001106e0;

          dVar12 = _dispatch_time(0,(long)(fVar14 * 1e+06));

          local_110 = PTR___NSConcreteStackBlock_003886f0;

          local_108 = 0xc2000000;

          local_100 = FUN_001109a4;

          puStack_f8 = &DAT_00388e60;

          _objc_retain(lVar3);

          local_f0 = lVar3;

          _dispatch_after(dVar12,PTR___dispatch_main_q_00388740,&local_110);

          local_308 = local_f0;

        }

LAB_001106d8:

        _objc_release(local_308);

      }

      else {

        if (iVar1 != 0) {

          _objc_getAssociatedObject(lVar3,"xzy_bubble_pet_loop_count");

          local_300 = _objc_retainAutoreleasedReturnValue();

          _objc_getAssociatedObject(lVar3,"xzy_bubble_pet_current_loop");

          auVar18 = _objc_retainAutoreleasedReturnValue();

          local_2f8 = auVar18._0_8_;

          if (local_300 == 0) {

            auVar18._8_8_ = auVar18._8_8_;

            auVar18._0_8_ = 0xffffffffffffffff;

          }

          else {

            auVar18 = FUN_002974a0();

          }

          auVar19._8_8_ = 0;

          auVar19._0_8_ = auVar18._8_8_;

          auVar19 = auVar19 << 0x40;

          if (local_2f8 != 0) {

            auVar19 = FUN_002974a0();

          }

          lVar9 = auVar19._0_8_ + 1;

          FUN_00299400(&_OBJC_CLASS___NSNumber,auVar19._8_8_,lVar9);

          uVar10 = _objc_retainAutoreleasedReturnValue();

          _objc_setAssociatedObject(lVar3,"xzy_bubble_pet_current_loop",uVar10,1);

          _objc_release(uVar10);

          if ((auVar18._0_8_ < 1) || (lVar9 < auVar18._0_8_)) {

            _objc_release(local_2f8);

            _objc_release(local_300);

            uVar8 = 0;

            uVar10 = extraout_x1_07;

            goto LAB_0010fd28;

          }

          auVar18 = FUN_00293860(lVar4);

          FUN_00299500(lVar4,auVar18._8_8_,auVar18._0_8_ + -1);

          auVar18 = _objc_retainAutoreleasedReturnValue();

          local_308 = auVar18._0_8_;

          FUN_00299540(local_308,auVar18._8_8_,&cf_pos);

          uVar10 = _objc_retainAutoreleasedReturnValue();

          uVar11 = FUN_00290a80();

          _objc_release(uVar10);

          FUN_00292180(&_OBJC_CLASS___CATransaction);

          FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_06,1);

          FUN_00297e40(lVar3);

          uVar10 = _objc_retainAutoreleasedReturnValue();

          FUN_002a07e0(uVar11,in_d1);

          _objc_release(uVar10);

          FUN_002930a0(&_OBJC_CLASS___CATransaction);

          _objc_getAssociatedObject(lVar3,"xzy_bubble_pet_delloc_ms");

          IVar13 = _objc_retainAutoreleasedReturnValue();

          if ((IVar13 != 0) && (fVar14 = (float)FUN_00295480(IVar13), 0.0 <= fVar14)) {

            dVar12 = _dispatch_time(0,(long)(fVar14 * 1e+06));

            local_c0 = PTR___NSConcreteStackBlock_003886f0;

            local_b8 = 0xc2000000;

            local_b0 = FUN_001108f4;

            puStack_a8 = &DAT_00388e60;

            _objc_retain(lVar3);

            local_a0 = lVar3;

            _dispatch_after(dVar12,PTR___dispatch_main_q_00388740,&local_c0);

            lVar9 = local_a0;

            goto LAB_001106cc;

          }

          goto LAB_001106d4;

        }

        auVar18 = FUN_00293860(lVar4);

        FUN_00299500(lVar4,auVar18._8_8_,auVar18._0_8_ + -1);

        auVar18 = _objc_retainAutoreleasedReturnValue();

        local_300 = auVar18._0_8_;

        FUN_00299540(local_300,auVar18._8_8_,&cf_pos);

        uVar10 = _objc_retainAutoreleasedReturnValue();

        uVar11 = FUN_00290a80();

        _objc_release(uVar10);

        FUN_00292180(&_OBJC_CLASS___CATransaction);

        FUN_0029dd40(&_OBJC_CLASS___CATransaction,extraout_x1_05,1);

        FUN_00297e40(lVar3);

        uVar10 = _objc_retainAutoreleasedReturnValue();

        FUN_002a07e0(uVar11,in_d1);

        _objc_release(uVar10);

        FUN_002930a0(&_OBJC_CLASS___CATransaction);

        _objc_getAssociatedObject(lVar3,"xzy_bubble_pet_delloc_ms");

        local_2f8 = _objc_retainAutoreleasedReturnValue();

        if ((local_2f8 != 0) && (fVar14 = (float)FUN_00295480(), 0.0 <= fVar14)) {

          dVar12 = _dispatch_time(0,(long)(fVar14 * 1e+06));

          local_e8 = PTR___NSConcreteStackBlock_003886f0;

          local_e0 = 0xc2000000;

          local_d8 = FUN_0011094c;

          puStack_d0 = &DAT_00388e60;

          _objc_retain(lVar3);

          local_c8 = lVar3;

          _dispatch_after(dVar12,PTR___dispatch_main_q_00388740,&local_e8);

          local_308 = local_c8;

          goto LAB_001106d8;

        }

      }

LAB_001106e0:

      _objc_release(local_2f8);

      _objc_release(local_300);

    }

    _objc_release(uVar7);

    _objc_release(lVar6);

    _objc_release(lVar5);

    _objc_release(lVar4);

  }

  _objc_release(lVar3);

LAB_00110718:

  _objc_release(param_3);

  return;

}




