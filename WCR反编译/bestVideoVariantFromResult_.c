// bestVideoVariantFromResult: @ 0100d4c8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkMediaSender::bestVideoVariantFromResult_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_280;
  ulong local_260;
  ulong local_258;
  ulong local_1f8;
  ulong local_1f0;
  ulong local_1c0;
  ulong local_1b0;
  ulong local_160;
  long local_158;
  ulong local_148;
  undefined1 local_139;
  ulong local_138;
  long local_130;
  undefined4 local_124;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _memset(auStack_118,0,0x40);
  uVar3 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_videoVariants_026ada88);
  _objc_retainAutoreleasedReturnValue();
  local_1f0 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_1f0 != 0) {
    lVar5 = *local_108;
    local_1f8 = 0;
    do {
      do {
        if (*local_108 - lVar5 != 0) {
          _objc_enumerationMutation(*local_108 - lVar5,uVar3);
        }
        uVar6 = *(ulong *)(local_110 + local_1f8 * 8);
        local_d8 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_url_026a5a28);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar6);
        if (uVar4 != 0) {
          uVar4 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_url_026a5a28);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_120 = uVar6;
          (*(code *)PTR__objc_release_02578630)(uVar4);
          uVar4 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_containsString__0269d0b0,&cf_playwm)
          ;
          if ((((uVar4 & 1) == 0) &&
              (uVar4 = local_120,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_120,PTR_s_containsString__0269d0b0,&cf_watermark_1), (uVar4 & 1) == 0
              )) && (uVar4 = local_120,
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_120,PTR_s_containsString__0269d0b0,
                               &cf_www_douyin_com_aweme_v1_play), (uVar4 & 1) == 0)) {
            local_130 = 0;
            for (local_138 = 0; uVar4 = local_138, uVar6 = local_120,
                (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0),
                uVar4 < uVar6; local_138 = local_138 + 1) {
              uVar4 = local_120;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_120,PTR_s_characterAtIndex__0269fa18,local_138);
              if ((int)uVar4 == 0x26) {
                local_130 = local_130 + 1;
              }
            }
            uVar4 = local_120;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_120,PTR_s_containsString__0269d0b0,&cf_aweme_snssdk_com_aweme_v1_play_)
            ;
            if ((uVar4 & 1) == 0) {
              uVar4 = local_120;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_120,PTR_s_containsString__0269d0b0,&cf_iesdouyin_com_aweme_v1_play_);
              local_139 = false;
              if ((uVar4 & 1) != 0) goto LAB_0100d83c;
            }
            else {
LAB_0100d83c:
              local_139 = local_130 < 3;
            }
            if ((bool)local_139 == false) {
              if (local_d0 == 0) {
                _objc_storeStrong(&local_d0,local_d8);
                local_124 = 3;
              }
              else {
                uVar4 = local_d0;
                (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_url_026a5a28);
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar4;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                local_148 = uVar6;
                (*(code *)PTR__objc_release_02578630)(uVar4);
                uVar4 = local_120;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_120,PTR_s_containsString__0269d0b0,&cf_x_expires);
                bVar2 = true;
                if ((uVar4 & 1) == 0) {
                  uVar4 = local_120;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_120,PTR_s_containsString__0269d0b0,&cf_x_signature);
                  bVar2 = true;
                  if ((uVar4 & 1) == 0) {
                    uVar4 = local_120;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_120,PTR_s_containsString__0269d0b0,&cf_watermark_0);
                    bVar2 = true;
                    if ((uVar4 & 1) == 0) {
                      bVar2 = 2 < local_130;
                    }
                  }
                }
                local_158 = 0;
                for (local_160 = 0; uVar4 = local_148,
                    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0),
                    local_160 < uVar4; local_160 = local_160 + 1) {
                  uVar4 = local_148;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_148,PTR_s_characterAtIndex__0269fa18,local_160);
                  if ((int)uVar4 == 0x26) {
                    local_158 = local_158 + 1;
                  }
                }
                uVar4 = local_148;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_148,PTR_s_containsString__0269d0b0,&cf_x_expires);
                bVar1 = true;
                if ((uVar4 & 1) == 0) {
                  uVar4 = local_148;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_148,PTR_s_containsString__0269d0b0,&cf_x_signature);
                  bVar1 = true;
                  if ((uVar4 & 1) == 0) {
                    uVar4 = local_148;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_148,PTR_s_containsString__0269d0b0,&cf_watermark_0);
                    bVar1 = true;
                    if ((uVar4 & 1) == 0) {
                      bVar1 = 2 < local_158;
                    }
                  }
                }
                if (bVar2 == bVar1) {
                  local_258 = local_d0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_width_026a12d0);
                  uVar4 = local_d0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_height_026a12d8);
                  if ((long)local_258 < (long)uVar4) {
                    local_258 = uVar4;
                  }
                  local_260 = local_d8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_width_026a12d0);
                  uVar4 = local_d8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_height_026a12d8);
                  if ((long)local_260 < (long)uVar4) {
                    local_260 = uVar4;
                  }
                  if ((long)local_258 < (long)local_260) {
LAB_0100dcc8:
                    _objc_storeStrong(&local_d0,local_d8);
                  }
                  else {
                    if (local_260 == local_258) {
                      uVar4 = local_d8;
                      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_dataSize_026adaa8);
                      uVar6 = local_d0;
                      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_dataSize_026adaa8);
                      if ((long)uVar6 < (long)uVar4) goto LAB_0100dcc8;
                    }
                    if (((local_260 == local_258) &&
                        (uVar4 = local_120,
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_120,PTR_s_containsString__0269d0b0,&cf_ratio_1080),
                        (uVar4 & 1) != 0)) &&
                       (uVar4 = local_148,
                       (*(code *)PTR__objc_msgSend_02578628)
                                 (local_148,PTR_s_containsString__0269d0b0,&cf_ratio_1080),
                       (uVar4 & 1) == 0)) {
                      _objc_storeStrong(&local_d0,local_d8);
                    }
                  }
                  local_124 = 0;
                }
                else {
                  if (bVar2 != false) {
                    _objc_storeStrong(&local_d0,local_d8);
                  }
                  local_124 = 3;
                }
                _objc_storeStrong(&local_148,0);
              }
            }
            else {
              local_124 = 3;
            }
          }
          else {
            local_124 = 3;
          }
          _objc_storeStrong(&local_120,0);
        }
        local_1f8 = local_1f8 + 1;
      } while (local_1f8 < local_1f0);
      local_1f0 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_1f8 = 0;
    } while (local_1f0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  local_280 = local_d0;
  bVar2 = local_d0 == 0;
  if (bVar2) {
    local_1b0 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_videoVariants_026ada88);
    _objc_retainAutoreleasedReturnValue();
    local_280 = local_1b0;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_1c0 = local_280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = local_280;
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_1c0);
    (*(code *)PTR__objc_release_02578630)(local_1b0);
  }
  local_124 = 1;
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return local_b0;
}

