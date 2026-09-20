// ensureDouyinBrowserPlaybackURLForResult: @ 0102ea7c

/* Function Stack Size: 0x18 bytes */

void WCRefineLinkParser::ensureDouyinBrowserPlaybackURLForResult_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  undefined8 uVar6;
  ulong local_160;
  ulong local_158;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  ID local_d0;
  uint local_c4;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  if ((local_c0 == 0) ||
     (uVar1 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_platform_026ad958),
     uVar1 != 1)) {
    local_c4 = 1;
  }
  else {
    uVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_isImageNote_026ad960);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_browserPlaybackURL_026ad968);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      IVar3 = local_b0;
      if (uVar2 == 0) {
        uVar1 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_videoURL_026ad970);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_douyinVideoIDFromURL__026addd8);
        _objc_retainAutoreleasedReturnValue();
        local_d0 = IVar3;
        (*(code *)PTR__objc_release_02578630)(uVar1);
        IVar3 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
        if (IVar3 == 0) {
          _memset(auStack_118,0,0x40);
          uVar1 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_videoVariants_026ada88);
          _objc_retainAutoreleasedReturnValue();
          local_158 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_158 != 0) {
            lVar5 = *local_108;
            local_160 = 0;
            do {
              do {
                if (*local_108 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_108 - lVar5,uVar1);
                }
                IVar4 = local_b0;
                uVar6 = *(undefined8 *)(local_110 + local_160 * 8);
                local_d8 = uVar6;
                (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_url_026a5a28);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_douyinVideoIDFromURL__026addd8);
                _objc_retainAutoreleasedReturnValue();
                IVar3 = local_d0;
                local_d0 = IVar4;
                (*(code *)PTR__objc_release_02578630)(IVar3);
                (*(code *)PTR__objc_release_02578630)(uVar6);
                IVar3 = local_d0;
                (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
                if (IVar3 != 0) {
                  local_c4 = 2;
                  goto LAB_0102edec;
                }
                local_160 = local_160 + 1;
              } while (local_160 < local_158);
              local_158 = uVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,
                         auStack_a8,0x10);
              local_160 = 0;
            } while (local_158 != 0);
          }
          local_c4 = 0;
LAB_0102edec:
          (*(code *)PTR__objc_release_02578630)(uVar1);
        }
        IVar3 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
        if (IVar3 != 0) {
          IVar4 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b0,PTR_s_douyinBrowserPlaybackURLForVideo_026adde0,local_d0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_setBrowserPlaybackURL__026add58);
          (*(code *)PTR__objc_release_02578630)(IVar4);
        }
        local_c4 = (uint)(IVar3 == 0);
        _objc_storeStrong(&local_d0,0);
      }
      else {
        local_c4 = 1;
      }
    }
    else {
      local_c4 = 1;
    }
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

