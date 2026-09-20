// FUN_005ad740 @ 005ad740

void FUN_005ad740(double param_1,undefined8 param_2,double param_3,undefined8 param_4,ulong param_5,
                 undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  double dVar5;
  undefined *local_2d0;
  undefined *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  code *local_1d0;
  undefined *local_1c8;
  undefined1 auStack_1c0 [8];
  undefined *local_1b8;
  byte local_1b0;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  code *local_198;
  undefined *local_190;
  undefined1 auStack_188 [8];
  undefined1 auStack_180 [15];
  byte local_171;
  undefined *local_170;
  byte local_161;
  undefined *local_160;
  undefined *local_158;
  byte local_14b;
  undefined1 local_14a;
  undefined1 local_149;
  undefined8 local_148;
  double local_140;
  double local_138;
  double local_130;
  undefined8 local_128;
  double local_120;
  double local_118;
  double local_110;
  double dStack_108;
  double local_100;
  undefined8 uStack_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  undefined8 uStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  undefined8 uStack_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  undefined8 local_80;
  double local_78;
  double local_70;
  byte local_62;
  byte local_61;
  double local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_39;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_6;
  local_28 = param_5;
  _objc_storeStrong(&local_38,param_7);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_39 = SUB81(puVar2,0);
  if (((ulong)puVar2 & 1) == 0) {
    local_50 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_translationInView__026cabb0,local_28);
    local_61 = param_1 < 0.0;
    local_62 = 0.0 < param_1;
    local_70 = 80.0;
    dVar5 = 40.0;
    local_78 = 40.0;
    lVar3 = local_38;
    local_60 = param_1;
    local_58 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
    if (lVar3 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
      local_98 = dVar5;
      local_90 = param_1;
      local_88 = param_3;
      local_80 = param_4;
      (*(code *)PTR__objc_msgSend_02578628)(dVar5,local_28,PTR_s_setWCRefine_initialX__026a5780);
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_WCRefine_feedbackGenerator_026a5788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setWCRefine_feedbackTriggered__026a57a0,0);
    }
    else {
      lVar3 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
      if (lVar3 == 2) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_WCRefine_initialX_026a5778);
        local_a0 = dVar5 + local_60;
        dStack_108 = local_60;
        if ((local_61 & 1) == 0) {
          if ((local_62 & 1) != 0) {
            if (0.0 <= local_a0) {
              dStack_108 = local_70;
              if (local_70 < local_a0) {
                local_b0 = local_a0 - local_70;
                local_a0 = local_70 + local_b0 * 0.3;
                dStack_108 = 0.3;
                param_3 = local_70;
              }
            }
            else {
              local_a0 = 0.0;
            }
          }
        }
        else if (local_a0 <= 0.0) {
          dStack_108 = -local_70;
          if (local_a0 < dStack_108) {
            local_a8 = local_a0 + local_70;
            dStack_108 = 0.3;
            local_a0 = local_a8 * 0.3 - local_70;
            param_3 = local_70;
          }
        }
        else {
          local_a0 = 0.0;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
        local_d0 = local_a0;
        local_f0 = local_a0;
        local_110 = local_a0;
        local_100 = param_3;
        uStack_f8 = param_4;
        dStack_e8 = dStack_108;
        local_e0 = param_3;
        uStack_d8 = param_4;
        dStack_c8 = dStack_108;
        local_c0 = param_3;
        uStack_b8 = param_4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a0,dStack_108,param_3,param_4,local_28,PTR_s_setFrame__026ca960);
        local_118 = ABS(local_60);
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_WCRefine_feedbackTriggered_026a5798);
        if (((uVar4 & 1) == 0) && (local_78 <= local_118)) {
          uVar4 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_WCRefine_feedbackGenerator_026a5788);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar4);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_setWCRefine_feedbackTriggered__026a57a0,1);
        }
      }
      else {
        lVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
        if ((lVar3 == 3) ||
           (lVar3 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20),
           lVar3 == 4)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
          local_148 = 0x4044000000000000;
          local_149 = dVar5 < 0.0;
          local_14a = 0.0 < dVar5;
          local_14b = 40.0 < ABS(dVar5);
          local_161 = 0;
          local_171 = 0;
          local_2d0 = PTR_WCRefineConfig_026cdf58;
          local_140 = dVar5;
          local_138 = param_1;
          local_130 = param_3;
          local_128 = param_4;
          local_120 = dVar5;
          if ((bool)local_149) {
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            local_161 = 1;
            local_160 = local_2d0;
            (*(code *)PTR__objc_msgSend_02578628)();
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            local_171 = 1;
            local_170 = local_2d0;
            (*(code *)PTR__objc_msgSend_02578628)();
          }
          if ((local_171 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_170);
          }
          if ((local_161 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_160);
          }
          local_158 = local_2d0;
          if (((local_14b & 1) != 0) &&
             (uVar4 = local_28,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_28,PTR_s_WCRefine_feedbackTriggered_026a5798), (uVar4 & 1) == 0)) {
            uVar4 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_WCRefine_feedbackGenerator_026a5788);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar4);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_setWCRefine_feedbackTriggered__026a57a0,1);
          }
          _objc_initWeak(auStack_180,local_28);
          puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
          puVar1 = PTR___NSConcreteStackBlock_02578660;
          local_1a8 = PTR___NSConcreteStackBlock_02578660;
          local_1a0 = 0xc2000000;
          local_19c = 0;
          local_198 = FUN_005ce5e0;
          local_190 = &DAT_02578da0;
          _objc_copyWeak(auStack_188,auStack_180);
          local_1e0 = puVar1;
          local_1d8 = 0xc2000000;
          local_1d4 = 0;
          local_1d0 = FUN_005ce6fc;
          local_1c8 = &DAT_0257e318;
          _objc_copyWeak(auStack_1c0,auStack_180);
          local_1b0 = local_14b & 1;
          local_1b8 = local_158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x3fd0000000000000,0,puVar2,PTR_s_animateWithDuration_delay_option_026ca4f0,
                     0x20000,&local_1a8,&local_1e0);
          _objc_destroyWeak(auStack_1c0);
          _objc_destroyWeak(auStack_188);
          _objc_destroyWeak(auStack_180);
        }
      }
    }
    local_50 = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

