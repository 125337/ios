// FUN_003f9374 @ 003f9374

void FUN_003f9374(undefined8 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *local_2a8;
  undefined *local_2a0;
  uint local_188;
  undefined *local_178;
  undefined1 auStack_170 [8];
  long local_168;
  long *local_160;
  ulong local_130;
  undefined *local_128;
  undefined *local_120;
  undefined1 local_111;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  byte local_d1;
  undefined *local_d0;
  byte local_c1;
  undefined4 local_c0;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = (undefined *)0x0;
  _objc_storeStrong(&local_b0,param_1);
  puVar4 = PTR_WCRefineInputBoxGestureSupport_026ce678;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineInputBoxGestureSupport_026ce678,PTR_s_isChatInputGrowTextView__026a3418,
             local_b0);
  uVar3 = (uint)puVar4;
  if (((ulong)puVar4 & 1) == 0) {
    local_c0 = 1;
  }
  else {
    FUN_003f4598();
    if ((uVar3 & 1) == 0) {
      local_c0 = 1;
    }
    else {
      local_d1 = 0;
      FUN_003fa1b4();
      puVar4 = (undefined *)((long)&MACH_HEADER.magic + 1);
      local_188 = 1;
      if ((uVar3 & 1) == 0) {
        puVar4 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        local_d1 = 1;
        local_d0 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_188 = (uint)puVar4;
      }
      if ((local_d1 & 1) != 0) {
        puVar4 = local_d0;
        (*(code *)PTR__objc_release_02578630)();
      }
      local_c1 = (byte)local_188 & 1;
      if ((local_188 & 1) == 0) {
        puVar4 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        local_c0 = 1;
        local_e0 = puVar4;
        _objc_storeStrong(&local_e0,0);
      }
      else {
        FUN_003fa85c();
        _objc_retainAutoreleasedReturnValue();
        local_e8 = puVar4;
        _objc_setAssociatedObject(local_b0,DAT_026e0340,puVar4,1);
        puVar4 = local_b0;
        _objc_getAssociatedObject(local_b0,DAT_026e0300);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (puVar4 == (undefined *)0x0) {
          puVar4 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_initWithTarget_action__026ca718,local_b0,
                     PTR_s_wcr_inputBoxHandlePan__026a3478);
          local_f0 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setDelegate__026ca910,local_e8);
          (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setCancelsTouchesInView__026ca8b8,0);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f0,PTR_s_setMaximumNumberOfTouches__026ca9c0,1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_addGestureRecognizer__026ca4a8,local_f0);
          _objc_setAssociatedObject(local_b0,DAT_026e0300,local_f0,1);
          _objc_storeStrong(&local_f0,0);
        }
        puVar4 = local_b0;
        _objc_getAssociatedObject(local_b0,DAT_026e0300);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = local_b0;
        local_f8 = puVar4;
        FUN_003f1098();
        _objc_retainAutoreleasedReturnValue();
        local_100 = puVar5;
        _objc_getAssociatedObject(puVar5,DAT_026e0308);
        _objc_retainAutoreleasedReturnValue();
        local_111 = 0;
        bVar2 = false;
        uVar1 = puVar5 != (undefined *)0x0;
        local_108 = puVar5;
        if ((bool)uVar1) {
          FUN_003f1f7c();
          _objc_retainAutoreleasedReturnValue();
          bVar2 = puVar5 != local_b0;
          local_111 = uVar1;
          local_110 = puVar5;
          (*(code *)PTR__objc_release_02578630)(puVar5);
          uVar1 = local_111;
        }
        local_111 = uVar1;
        if (bVar2) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_100,PTR_s_removeGestureRecognizer__026ca808,local_108);
          _objc_setAssociatedObject(local_100,DAT_026e0308,0,0);
          _objc_storeStrong(&local_108,0);
        }
        if ((local_100 != (undefined *)0x0) && (local_108 == (undefined *)0x0)) {
          puVar5 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_initWithTarget_action__026ca718,local_b0,
                     PTR_s_wcr_inputBoxHandlePan__026a3478);
          puVar4 = local_108;
          local_108 = puVar5;
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setDelegate__026ca910,local_e8);
          (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_setCancelsTouchesInView__026ca8b8,0)
          ;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_108,PTR_s_setMaximumNumberOfTouches__026ca9c0,1);
          _objc_setAssociatedObject(local_108,DAT_026e0318,local_b0,1);
          puVar4 = local_108;
          uVar8 = DAT_026e0338;
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
          _objc_retainAutoreleasedReturnValue();
          _objc_setAssociatedObject(puVar4,uVar8,puVar5,1);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_100,PTR_s_addGestureRecognizer__026ca4a8,local_108);
          _objc_setAssociatedObject(local_100,DAT_026e0308,local_108,1);
        }
        puVar4 = local_b0;
        _objc_getAssociatedObject(local_b0,DAT_026e0348);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (puVar4 == (undefined *)0x0) {
          puVar4 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_initWithTarget_action__026ca718,local_b0,
                     PTR_s_wcr_inputBoxHandleLongPress__026a3480);
          local_120 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setDelegate__026ca910,local_e8);
          puVar4 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          uVar8 = DAT_02323e88;
          if (((ulong)puVar5 & 1) == 0) {
            uVar8 = DAT_02323c78;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar8,local_120,PTR_s_setMinimumPressDuration__026ca9c8);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_setCancelsTouchesInView__026ca8b8,1)
          ;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_setDelaysTouchesBegan__026a1af0,1);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_addGestureRecognizer__026ca4a8,local_120);
          _objc_setAssociatedObject(local_b0,DAT_026e0348,local_120,1);
          _objc_storeStrong(&local_120,0);
        }
        puVar4 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        if (((ulong)puVar5 & 1) != 0) {
          puVar4 = local_b0;
          _objc_getAssociatedObject(local_b0,DAT_026e0348);
          _objc_retainAutoreleasedReturnValue();
          local_128 = puVar4;
          _memset(auStack_170,0,0x40);
          puVar4 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_gestureRecognizers_026ca650);
          _objc_retainAutoreleasedReturnValue();
          local_2a0 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_2a0 != (undefined *)0x0) {
            lVar6 = *local_160;
            local_2a8 = (undefined *)0x0;
            do {
              do {
                if (*local_160 - lVar6 != 0) {
                  _objc_enumerationMutation(*local_160 - lVar6,puVar4);
                }
                uVar7 = *(ulong *)(local_168 + (long)local_2a8 * 8);
                local_130 = uVar7;
                if ((uVar7 - (long)local_128 != 0) &&
                   (FUN_003f18dc(uVar7 - (long)local_128), (uVar7 & 1) != 0)) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_130,PTR_s_requireGestureRecognizerToFail__026ca810,local_128);
                }
                local_2a8 = local_2a8 + 1;
              } while (local_2a8 < local_2a0);
              local_2a0 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,
                         auStack_a8,0x10);
              local_2a8 = (undefined *)0x0;
            } while (local_2a0 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar4);
          _objc_storeStrong(&local_128,0);
        }
        puVar4 = local_b0;
        _objc_getAssociatedObject(local_b0,DAT_026e0350);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (puVar4 == (undefined *)0x0) {
          puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_initWithTarget_action__026ca718,local_b0,
                     PTR_s_wcr_inputBoxHandleDoubleTap__026a3488);
          local_178 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setDelegate__026ca910,local_e8);
          (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_setNumberOfTapsRequired__026ca9e0,2)
          ;
          (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_setCancelsTouchesInView__026ca8b8,0)
          ;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_addGestureRecognizer__026ca4a8,local_178);
          _objc_setAssociatedObject(local_b0,DAT_026e0350,local_178,1);
          _objc_storeStrong(&local_178,0);
        }
        _objc_storeStrong(&local_108);
        _objc_storeStrong(&local_100,0);
        _objc_storeStrong(&local_f8,0);
        _objc_storeStrong(&local_e8,0);
        local_c0 = 0;
      }
    }
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

