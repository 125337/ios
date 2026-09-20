// FUN_0085517c @ 0085517c

void FUN_0085517c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,byte param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  double dVar7;
  double local_310;
  double local_308;
  long local_1d8;
  long local_1d0;
  double local_1c8;
  undefined4 local_1bc;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  undefined4 local_19c;
  double local_198;
  double local_190;
  undefined1 *local_188;
  double local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  double local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined *local_138 [5];
  long local_110;
  double local_108;
  double local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_b8 [5];
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  double local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  byte local_41;
  long local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  local_41 = param_6;
  if (local_40 == 0) {
    local_48 = 1;
  }
  else {
    lVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
    local_68 = param_1;
    uStack_60 = param_2;
    local_58 = param_3;
    uStack_50 = param_4;
    FUN_00860c34();
    local_80 = param_4;
    FUN_00860d88();
    local_88 = param_4;
    FUN_00860edc(local_68,uStack_60,local_58,uStack_50,param_4,local_80,0);
    _objc_retainAutoreleasedReturnValue();
    local_90 = lVar1;
    if (lVar1 == 0) {
      FUN_0084f998(local_40);
      local_48 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      local_b8[0] = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setName__0269e0c8,DAT_02580588);
      uStack_d8 = uStack_60;
      local_e0 = local_68;
      uStack_c8 = uStack_50;
      local_d0 = local_58;
      dVar7 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,uStack_60,local_58,uStack_50,local_b8[0],PTR_s_setFrame__026ca960);
      lVar1 = local_90;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_CGPath_026ca478);
      (*(code *)PTR__objc_msgSend_02578628)(local_b8[0],PTR_s_setPath__026caa08,lVar1);
      lVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setOpaque__026ca9f8,0);
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
      lVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      lVar1 = local_40;
      FUN_00859200();
      FUN_008610ec();
      if (0.0 < dVar7) {
        local_108 = dVar7;
        FUN_00860edc(local_68,uStack_60,local_58,uStack_50,local_88,local_80,dVar7 * 0.5);
        _objc_retainAutoreleasedReturnValue();
        local_110 = lVar1;
        if (lVar1 != 0) {
          puVar2 = PTR__OBJC_CLASS___CAShapeLayer_026ce3e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___CAShapeLayer_026ce3e0,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          local_138[0] = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setName__0269e0c8,DAT_02580580);
          uStack_158 = uStack_60;
          local_160 = local_68;
          uStack_148 = uStack_50;
          local_150 = local_58;
          uStack_178 = uStack_60;
          local_180 = local_68;
          uStack_168 = uStack_50;
          local_170 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,uStack_60,local_58,uStack_50,local_138[0],PTR_s_setFrame__026ca960);
          puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          puVar3 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
          (*(code *)PTR__objc_msgSend_02578628)(local_138[0],PTR_s_setFillColor__026ca948,puVar3);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          lVar1 = local_40;
          FUN_00861230();
          _objc_retainAutoreleasedReturnValue();
          _objc_retainAutorelease();
          lVar4 = lVar1;
          (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_CGColor_026ca470);
          (*(code *)PTR__objc_msgSend_02578628)(local_138[0],PTR_s_setStrokeColor__026caa78,lVar4);
          (*(code *)PTR__objc_release_02578630)(lVar1);
          (*(code *)PTR__objc_msgSend_02578628)(local_108,local_138[0],PTR_s_setLineWidth__026ca9b0)
          ;
          lVar1 = local_110;
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_CGPath_026ca478);
          (*(code *)PTR__objc_msgSend_02578628)(local_138[0],PTR_s_setPath__026caa08,lVar1);
          puVar2 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_188 = puVar5;
          if ((puVar5 != (undefined1 *)0x0) &&
             (puVar5 != (undefined1 *)((long)&MACH_HEADER.magic + 1))) {
            local_188 = (undefined1 *)0x0;
          }
          if (local_188 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
            local_198 = local_108 * 3.0;
            local_19c = 0x40400000;
            local_308 = local_198;
            if (local_198 < 3.0) {
              local_308 = 3.0;
            }
            local_1a8 = local_308;
            local_190 = local_308;
            local_1b8 = local_108 * 3.0;
            local_1bc = 0x40600000;
            local_310 = local_1b8;
            if (local_1b8 < 3.5) {
              local_310 = 3.5;
            }
            local_1c8 = local_310;
            local_1b0 = local_310;
            puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_308,PTR__OBJC_CLASS___NSNumber_026ce038,
                       PTR_s_numberWithDouble__0269d6d0);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
            local_38 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1b0,PTR__OBJC_CLASS___NSNumber_026ce038,
                       PTR_s_numberWithDouble__0269d6d0);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            local_30 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_38,2);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_138[0],PTR_s_setLineDashPattern__026ca998);
            (*(code *)PTR__objc_release_02578630)(puVar6);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            (*(code *)PTR__objc_msgSend_02578628)(0,local_138[0],PTR_s_setLineDashPhase__026ca9a0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138[0],PTR_s_setLineCap__026ca990,
                       *(undefined8 *)PTR__kCALineCapButt_02578400);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138[0],PTR_s_setLineJoin__026ca9a8,
                       *(undefined8 *)PTR__kCALineJoinMiter_02578410);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_138[0],PTR_s_setLineDashPattern__026ca998,0)
            ;
            (*(code *)PTR__objc_msgSend_02578628)(0,local_138[0],PTR_s_setLineDashPhase__026ca9a0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138[0],PTR_s_setLineCap__026ca990,
                       *(undefined8 *)PTR__kCALineCapButt_02578400);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138[0],PTR_s_setLineJoin__026ca9a8,
                       *(undefined8 *)PTR__kCALineJoinMiter_02578410);
          }
          lVar1 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar1);
          _objc_storeStrong(local_138,0);
        }
        _objc_storeStrong(&local_110,0);
      }
      if ((local_41 & 1) != 0) {
        lVar1 = local_40;
        FUN_0085959c();
        _objc_retainAutoreleasedReturnValue();
        local_1d0 = lVar1;
        if (lVar1 != 0) {
          FUN_00861b58();
          _objc_retainAutoreleasedReturnValue();
          local_1d8 = lVar1;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_setOpaque__026ca9f8,0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1d0,PTR_s_setBackgroundColor__026ca888,local_1d8);
          lVar1 = local_1d8;
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_CGColor_026ca470);
          lVar1 = local_1d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_layer_026ca788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x3ff0000000000000,local_1d0,PTR_s_setAlpha__026ca860);
          _objc_storeStrong(&local_1d8,0);
        }
        _objc_storeStrong(&local_1d0,0);
      }
      _objc_storeStrong(local_b8,0);
      local_48 = 0;
    }
    _objc_storeStrong(&local_90,0);
  }
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

