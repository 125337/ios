// canSpawnOnTrack:bubbleWidth:maxTrackCount: @ 00ff427c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

bool __thiscall
WCRefineKeywordAlertDanmakuPresenter::canSpawnOnTrack_bubbleWidth_maxTrackCount_
          (WCRefineKeywordAlertDanmakuPresenter *this,ID param_1,SEL param_2,long_long param_3,
          double param_4,long_long param_5)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  double in_d1;
  ulong local_188;
  ulong local_180;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  double local_e0;
  long_long local_d8;
  double local_d0;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = param_5;
  local_d0 = param_4;
  local_c8 = param_3;
  local_c0 = param_2;
  local_b8 = param_1;
  if (((long)param_3 < 0) || ((long)param_5 <= (long)param_3)) {
    local_a9 = 0;
  }
  else {
    if (param_4 <= 0.0) {
      local_d0 = 109.0;
    }
    dVar6 = -local_d0;
    local_e0 = dVar6;
    _memset(auStack_128,0,0x40);
    IVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_activeBubbles_026ad690);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_180 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_180 != 0) {
      lVar4 = *local_118;
      local_188 = 0;
      do {
        do {
          if (*local_118 - lVar4 != 0) {
            _objc_enumerationMutation(*local_118 - lVar4,IVar3);
          }
          uVar5 = *(ulong *)(local_120 + local_188 * 8);
          local_e8 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_trackIndex_026ad6b0);
          if ((uVar5 == local_c8) &&
             (uVar5 = local_e8,
             (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_dismissing_026ad680),
             (uVar5 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_currentFrameForBubble__026ad6e0,local_e8);
            _CGRectGetMaxX(dVar6,in_d1);
            dVar6 = dVar6 + 10.0;
            in_d1 = local_e0;
            if (local_e0 < dVar6) {
              local_a9 = 0;
              bVar1 = true;
              goto LAB_00ff4554;
            }
          }
          local_188 = local_188 + 1;
        } while (local_188 < local_180);
        local_180 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_188 = 0;
      } while (local_180 != 0);
    }
    bVar1 = false;
LAB_00ff4554:
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if (!bVar1) {
      local_a9 = 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

