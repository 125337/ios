// douyinResultHasPrimaryMedia: @ 0102f8dc

/* Function Stack Size: 0x18 bytes */

bool WCRefineLinkParser::douyinResultHasPrimaryMedia_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  ID IVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *local_3b0;
  undefined *local_3a8;
  ulong local_350;
  ulong local_348;
  ulong local_2f0;
  ulong local_2e8;
  undefined1 auStack_2c0 [8];
  long local_2b8;
  long *local_2b0;
  undefined8 local_280;
  undefined1 auStack_278 [8];
  long local_270;
  long *local_268;
  long local_238;
  undefined *local_230;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  long local_1e8;
  byte local_1d9;
  ulong local_1d8;
  int local_1cc;
  ulong local_1c8;
  SEL local_1c0;
  ID local_1b8;
  byte local_1a9;
  undefined1 auStack_1a8 [128];
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1c8 = 0;
  local_1c0 = param_2;
  local_1b8 = param_1;
  _objc_storeStrong(&local_1c8,param_3);
  uVar2 = local_1c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_imagesFromPageScan_026ade90);
  if ((uVar2 & 1) == 0) {
    uVar2 = local_1c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_isImageNote_026ad960);
    local_1d9 = 0;
    bVar1 = false;
    if ((uVar2 & 1) != 0) {
      uVar2 = local_1c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_imageURLs_026adac8);
      _objc_retainAutoreleasedReturnValue();
      local_1d9 = 1;
      local_1d8 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = uVar2 != 0;
    }
    if ((local_1d9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1d8);
    }
    if (bVar1) {
      local_1a9 = 1;
      local_1cc = 1;
    }
    else {
      _memset(auStack_228,0,0x40);
      uVar2 = local_1c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_imageURLs_026adac8);
      _objc_retainAutoreleasedReturnValue();
      local_2e8 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_2e8 != 0) {
        lVar6 = *local_218;
        local_2f0 = 0;
        do {
          do {
            if (*local_218 - lVar6 != 0) {
              _objc_enumerationMutation(*local_218 - lVar6,uVar2);
            }
            lVar7 = *(long *)(local_220 + local_2f0 * 8);
            local_1e8 = lVar7;
            (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
            if ((lVar7 != 0) &&
               (IVar3 = local_1b8,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_1b8,PTR_s_URLLooksWatermarked__026add20,local_1e8), (IVar3 & 1) == 0
               )) {
              local_1a9 = 1;
              local_1cc = 1;
              goto LAB_0102fbc4;
            }
            local_2f0 = local_2f0 + 1;
          } while (local_2f0 < local_2e8);
          local_2e8 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,auStack_a8,
                     0x10);
          local_2f0 = 0;
        } while (local_2e8 != 0);
      }
      local_1cc = 0;
LAB_0102fbc4:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_1cc == 0) {
        puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = local_1c8;
        local_230 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_videoURL_026ad970);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        puVar4 = local_230;
        if (uVar5 != 0) {
          uVar2 = local_1c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_videoURL_026ad970);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        _memset(auStack_278,0,0x40);
        uVar2 = local_1c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_videoVariants_026ada88);
        _objc_retainAutoreleasedReturnValue();
        local_348 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_348 != 0) {
          lVar6 = *local_268;
          local_350 = 0;
          do {
            do {
              if (*local_268 - lVar6 != 0) {
                _objc_enumerationMutation(*local_268 - lVar6,uVar2);
              }
              lVar8 = *(long *)(local_270 + local_350 * 8);
              local_238 = lVar8;
              (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_url_026a5a28);
              _objc_retainAutoreleasedReturnValue();
              lVar7 = lVar8;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(lVar8);
              puVar4 = local_230;
              if (lVar7 != 0) {
                lVar7 = local_238;
                (*(code *)PTR__objc_msgSend_02578628)(local_238,PTR_s_url_026a5a28);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
                (*(code *)PTR__objc_release_02578630)(lVar7);
              }
              local_350 = local_350 + 1;
            } while (local_350 < local_348);
            local_348 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_278,auStack_128
                       ,0x10);
            local_350 = 0;
          } while (local_348 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar2);
        _memset(auStack_2c0,0,0x40);
        puVar4 = local_230;
        (*(code *)PTR__objc_retain_02578638)();
        local_3a8 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_1a8,
                   0x10);
        if (local_3a8 != (undefined *)0x0) {
          lVar6 = *local_2b0;
          local_3b0 = (undefined *)0x0;
          do {
            do {
              if (*local_2b0 - lVar6 != 0) {
                _objc_enumerationMutation(*local_2b0 - lVar6,puVar4);
              }
              local_280 = *(undefined8 *)(local_2b8 + (long)local_3b0 * 8);
              IVar3 = local_1b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_douyinURLLooksLikeSignedPlayable_026adea8,local_280);
              if ((IVar3 & 1) != 0) {
                local_1a9 = 1;
                local_1cc = 1;
                goto LAB_01030020;
              }
              local_3b0 = local_3b0 + 1;
            } while (local_3b0 < local_3a8);
            local_3a8 = puVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,
                       auStack_1a8,0x10);
            local_3b0 = (undefined *)0x0;
          } while (local_3a8 != (undefined *)0x0);
        }
        local_1cc = 0;
LAB_01030020:
        (*(code *)PTR__objc_release_02578630)(puVar4);
        if (local_1cc == 0) {
          local_1a9 = 0;
          local_1cc = 1;
        }
        _objc_storeStrong(&local_230,0);
      }
    }
  }
  else {
    local_1a9 = 0;
    local_1cc = 1;
  }
  _objc_storeStrong(&local_1c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_1a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

