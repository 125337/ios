// FUN_0077fb64 @ 0077fb64

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0077fb64(double param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  ulong local_328;
  uint local_2ec;
  uint local_2d4;
  uint local_2a4;
  uint local_28c;
  undefined1 auStack_1d0 [48];
  undefined1 auStack_1a0 [48];
  double local_170;
  double local_168;
  undefined1 auStack_160 [55];
  byte local_129;
  double local_128;
  undefined1 auStack_120 [48];
  double local_f0;
  undefined8 uStack_e8;
  ulong local_e0;
  byte local_d1;
  undefined *local_d0;
  byte local_c1;
  undefined *local_c0;
  byte local_b1;
  undefined *local_b0;
  byte local_a1;
  undefined *local_a0;
  undefined1 *local_98;
  byte local_89;
  undefined1 *local_88;
  byte local_79;
  undefined8 local_78;
  double dStack_70;
  double local_68;
  undefined8 uStack_60;
  ulong local_58 [3];
  undefined4 local_3c;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_38 = 0;
  local_30 = param_4;
  local_28 = param_3;
  _objc_storeStrong(&local_38,param_5);
  if (local_38 == 0) {
    local_3c = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (((ulong)puVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrefine_resetSwipeAnimated__026a8008,1);
      local_3c = 1;
    }
    else {
      uVar5 = local_28;
      FUN_0077b5c0();
      if ((uVar5 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_wcrefine_resetSwipeAnimated__026a8008,1);
        local_3c = 1;
      }
      else {
        uVar5 = local_28;
        FUN_00788984();
        _objc_retainAutoreleasedReturnValue();
        local_58[0] = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_translationInView__026cabb0,local_28);
        local_68 = param_1;
        uStack_60 = param_2;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_velocityInView__026cabd0,local_28);
        uVar5 = local_28;
        local_78 = param_2;
        dStack_70 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrefine_isMyMessage_026a42e0);
        local_79 = (byte)uVar5;
        local_89 = 0;
        uVar2 = (uint)uVar5 & 1;
        FUN_00784100();
        if ((uVar2 & 1) == 0) {
          local_c1 = 0;
          local_2d4 = 0;
          if ((local_79 & 1) != 0) {
            puVar3 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            local_c1 = 1;
            local_c0 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_2d4 = (uint)puVar3;
          }
          if ((local_c1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_c0);
          }
          if ((local_2d4 & 1) == 0) {
            local_d1 = 0;
            local_2ec = 0;
            if ((local_79 & 1) != 0) {
              puVar3 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              local_d1 = 1;
              local_d0 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_2ec = (uint)puVar3 ^ 1;
            }
            if ((local_d1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_d0);
            }
            if ((local_2ec & 1) == 0) {
              puVar3 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              puVar6 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_88 = puVar6;
              (*(code *)PTR__objc_release_02578630)(puVar3);
            }
            else {
              local_88 = (undefined1 *)0x0;
            }
          }
          else {
            local_88 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
          }
        }
        else {
          if ((local_79 & 1) == 0) {
            puVar3 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_98 = (undefined1 *)(long)(int)(uint)(puVar4 == (undefined *)0x0);
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          else {
            puVar3 = PTR_WCRefineConfig_026cdf58;
            (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0)
            ;
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_98 = (undefined1 *)(long)(int)(uint)(((ulong)puVar4 & 1) == 0);
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          if (((local_98 == (undefined1 *)0x0) && (local_68 < 0.0)) ||
             ((local_98 == (undefined1 *)((long)&MACH_HEADER.magic + 1) && (0.0 < local_68)))) {
            local_88 = local_98;
            local_89 = 1;
          }
          else {
            local_a1 = 0;
            local_28c = 0;
            if ((local_79 & 1) != 0) {
              puVar3 = PTR_WCRefineConfig_026cdf58;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
              _objc_retainAutoreleasedReturnValue();
              local_a1 = 1;
              local_a0 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_28c = (uint)puVar3;
            }
            if ((local_a1 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_a0);
            }
            if ((local_28c & 1) == 0) {
              local_b1 = 0;
              local_2a4 = 0;
              if ((local_79 & 1) != 0) {
                puVar3 = PTR_WCRefineConfig_026cdf58;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                _objc_retainAutoreleasedReturnValue();
                local_b1 = 1;
                local_b0 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_2a4 = (uint)puVar3 ^ 1;
              }
              if ((local_b1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_b0);
              }
              if ((local_2a4 & 1) == 0) {
                puVar3 = PTR_WCRefineConfig_026cdf58;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                _objc_retainAutoreleasedReturnValue();
                puVar6 = puVar3;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_88 = puVar6;
                (*(code *)PTR__objc_release_02578630)(puVar3);
              }
              else {
                local_88 = (undefined1 *)0x0;
              }
            }
            else {
              local_88 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
            }
          }
        }
        if ((local_89 & 1) == 0) {
          local_328 = 7;
        }
        else {
          local_328 = (ulong)(local_79 & 1);
          FUN_00784138();
        }
        local_e0 = local_328;
        uStack_e8 = uStack_60;
        local_f0 = local_68;
        puVar6 = local_88;
        dVar8 = local_68;
        FUN_00789588(local_68,uStack_60);
        if (((ulong)puVar6 & 1) == 0) {
          FUN_00789888(local_28);
          puVar3 = PTR_WCRefineConfig_026cdf58;
          local_128 = dVar8;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_129 = (byte)puVar4;
          lVar7 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
          if (lVar7 == 1) {
            uVar5 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_wcrefine_feedbackGenerator_026a7fd8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar5);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_setWcrefine_feedbackTriggered__026a7ff0,0);
          }
          else if (lVar7 == 2) {
            if ((local_129 & 1) == 0) {
              FUN_00789a10(local_28);
              dVar9 = local_68;
              local_168 = dVar8;
              FUN_00789c38(local_68,dVar8,local_88);
              local_170 = dVar9;
              _CGAffineTransformMakeTranslation(dVar9,0);
              _memcpy(auStack_1d0,auStack_1a0,0x30);
              FUN_00789644(auStack_1d0,local_58[0]);
            }
            else {
              _memcpy(auStack_160,PTR__CGAffineTransformIdentity_025782d8,0x30);
              FUN_00789644(auStack_160,local_58[0]);
            }
            if (local_88 == (undefined1 *)0x0) {
              bVar1 = local_68 <= -local_128;
            }
            else {
              bVar1 = local_128 <= local_68;
            }
            uVar5 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_wcrefine_feedbackTriggered_026a7fe8);
            if (((uVar5 & 1) == 0) && (bVar1)) {
              uVar5 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_28,PTR_s_wcrefine_feedbackGenerator_026a7fd8);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar5);
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_28,PTR_s_setWcrefine_feedbackTriggered__026a7ff0,1);
            }
          }
          else if (lVar7 == 3 || lVar7 == 4) {
            puVar6 = local_88;
            FUN_00789cf4(local_68,uStack_60,local_78,dStack_70,local_128);
            if (((ulong)puVar6 & 1) != 0) {
              uVar5 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_28,PTR_s_wcrefine_feedbackTriggered_026a7fe8);
              if ((uVar5 & 1) == 0) {
                uVar5 = local_28;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_28,PTR_s_wcrefine_feedbackGenerator_026a7fd8);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
                (*(code *)PTR__objc_release_02578630)(uVar5);
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_28,PTR_s_setWcrefine_feedbackTriggered__026a7ff0,1);
              }
              if ((local_89 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_28,PTR_s_wcrefine_triggerQuoteReply_026a8018);
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_28,PTR_s_wcrefine_triggerRevokeOrDelete_026a8010);
              }
            }
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_wcrefine_resetSwipeAnimated__026a8008,1);
          }
          local_3c = 0;
        }
        else {
          _memcpy(auStack_120,PTR__CGAffineTransformIdentity_025782d8,0x30);
          FUN_00789644(auStack_120,local_58[0]);
          lVar7 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
          if ((lVar7 == 3) ||
             (lVar7 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20)
             , lVar7 == 4)) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_wcrefine_resetSwipeAnimated__026a8008,1);
          }
          local_3c = 1;
        }
        _objc_storeStrong(local_58,0);
      }
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

