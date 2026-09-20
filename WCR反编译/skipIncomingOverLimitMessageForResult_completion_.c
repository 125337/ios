// skipIncomingOverLimitMessageForResult:completion: @ 0100ad10

/* Function Stack Size: 0x20 bytes */

void WCRefineLinkMediaSender::skipIncomingOverLimitMessageForResult_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long lVar9;
  uint local_24c;
  ulong local_230;
  ulong local_228;
  byte local_204;
  undefined *local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  code *local_1e0;
  undefined *local_1d8;
  ID local_1d0;
  undefined **local_1c8;
  byte local_1b9;
  ID local_1b8;
  undefined *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  code *local_1a0;
  undefined *local_198;
  long local_190;
  undefined *local_188;
  undefined **local_180;
  ID local_178;
  byte local_169;
  ID local_168;
  byte local_159;
  undefined8 local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined8 local_110;
  ID local_108;
  uint local_100;
  byte local_f9;
  ID local_f8;
  byte local_e9;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  long local_d0;
  ID local_c8;
  SEL local_c0;
  ID local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3,param_3,param_4,param_5);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_autoParseLinkIncomingSkipVideoMa_026ada78);
  puVar3 = local_d8;
  local_e0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_autoParseLinkIncomingSkipVideoMa_026ada80);
  IVar4 = local_c8;
  local_e8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_videoURL_026ad970);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_f9 = 0;
  if (IVar5 == 0) {
    IVar5 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_videoVariants_026ada88);
    _objc_retainAutoreleasedReturnValue();
    local_f9 = 1;
    local_f8 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_204 = 0;
    if (IVar5 == 0) goto LAB_0100ae98;
  }
  IVar5 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isImageNote_026ad960);
  local_204 = (byte)IVar5 ^ 1;
LAB_0100ae98:
  if ((local_f9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f8);
  }
  (*(code *)PTR__objc_release_02578630)(IVar4);
  local_e9 = local_204 & 1;
  puVar2 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_autoParseLinkDefaultSendCardEnab_0269dbb8);
  if ((((ulong)puVar2 & 1) == 0) ||
     (IVar4 = local_b8,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_b8,PTR_s_shouldOfferLinkCardForResult__026ad9f0,local_c8), (IVar4 & 1) == 0))
  {
    if (((local_e9 & 1) == 0) || (((long)local_e0 < 1 && ((long)local_e8 < 1)))) {
      if (local_d0 != 0) {
        (**(code **)(local_d0 + 0x10))(local_d0,0);
      }
      local_100 = 1;
    }
    else if ((((long)local_e8 < 1) ||
             (IVar4 = local_c8,
             (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_durationSeconds_026ada90),
             IVar4 == 0)) ||
            (IVar4 = local_c8,
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_durationSeconds_026ada90),
            IVar4 <= (ulong)((long)local_e8 * 0x3c))) {
      if ((long)local_e0 < 1) {
        if (local_d0 != 0) {
          (**(code **)(local_d0 + 0x10))(local_d0,0);
        }
        local_100 = 1;
      }
      else {
        local_108 = 0;
        puVar2 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d8,PTR_s_autoParseLinkDefaultBestQualityE_026ada98);
        if (((ulong)puVar2 & 1) == 0) {
          _memset(auStack_150,0,0x40);
          IVar4 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_videoVariants_026ada88);
          _objc_retainAutoreleasedReturnValue();
          local_228 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_228 != 0) {
            lVar9 = *local_140;
            local_230 = 0;
            do {
              do {
                if (*local_140 - lVar9 != 0) {
                  _objc_enumerationMutation(*local_140 - lVar9,IVar4);
                }
                local_110 = *(undefined8 *)(local_148 + local_230 * 8);
                IVar5 = local_c8;
                (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_videoURL_026ad970);
                _objc_retainAutoreleasedReturnValue();
                IVar6 = IVar5;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_159 = 0;
                local_169 = 0;
                local_24c = 0;
                if (IVar6 != 0) {
                  uVar7 = local_110;
                  (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_url_026a5a28);
                  _objc_retainAutoreleasedReturnValue();
                  local_159 = 1;
                  IVar6 = local_c8;
                  local_158 = uVar7;
                  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_videoURL_026ad970);
                  _objc_retainAutoreleasedReturnValue();
                  local_169 = 1;
                  local_168 = IVar6;
                  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isEqualToString__0269ccc8);
                  local_24c = (uint)uVar7;
                }
                if ((local_169 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_168);
                }
                if ((local_159 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_158);
                }
                (*(code *)PTR__objc_release_02578630)(IVar5);
                if ((local_24c & 1) != 0) {
                  _objc_storeStrong(&local_108,local_110);
                  local_100 = 2;
                  goto LAB_0100b388;
                }
                local_230 = local_230 + 1;
              } while (local_230 < local_228);
              local_228 = IVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (IVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,
                         auStack_a8,0x10);
              local_230 = 0;
            } while (local_228 != 0);
          }
          local_100 = 0;
LAB_0100b388:
          (*(code *)PTR__objc_release_02578630)(IVar4);
          if (local_108 == 0) {
            IVar5 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_videoVariants_026ada88);
            _objc_retainAutoreleasedReturnValue();
            IVar6 = IVar5;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            IVar4 = local_108;
            local_108 = IVar6;
            (*(code *)PTR__objc_release_02578630)(IVar4);
            (*(code *)PTR__objc_release_02578630)(IVar5);
          }
        }
        else {
          IVar5 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_bestVideoVariantFromResult__026adaa0,local_c8);
          _objc_retainAutoreleasedReturnValue();
          IVar4 = local_108;
          local_108 = IVar5;
          (*(code *)PTR__objc_release_02578630)(IVar4);
        }
        if (local_108 == 0) {
          if (local_d0 != 0) {
            (**(code **)(local_d0 + 0x10))(local_d0,0);
          }
          local_100 = 1;
        }
        else {
          IVar4 = local_108;
          (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_dataSize_026adaa8);
          lVar9 = local_d0;
          ppuVar8 = &local_1b0;
          local_1b0 = PTR___NSConcreteStackBlock_02578660;
          local_1a8 = 0xc2000000;
          local_1a4 = 0;
          local_1a0 = FUN_0100b76c;
          local_198 = &DAT_025842b0;
          local_188 = local_e0;
          local_178 = IVar4;
          (*(code *)PTR__objc_retain_02578638)();
          local_190 = lVar9;
          _objc_retainBlock();
          local_1b9 = 0;
          bVar1 = true;
          local_180 = ppuVar8;
          if ((long)local_178 < 1) {
            IVar4 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_url_026a5a28);
            _objc_retainAutoreleasedReturnValue();
            local_1b9 = 1;
            local_1b8 = IVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar1 = IVar4 == 0;
          }
          if ((local_1b9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_1b8);
          }
          puVar2 = PTR_WCRefineLinkParser_026ce168;
          if (!bVar1) {
            local_b0 = local_108;
            puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_b0,1);
            _objc_retainAutoreleasedReturnValue();
            ppuVar8 = local_180;
            local_1f0 = PTR___NSConcreteStackBlock_02578660;
            local_1e8 = 0xc2000000;
            local_1e4 = 0;
            local_1e0 = FUN_0100b81c;
            local_1d8 = &DAT_025842e0;
            (*(code *)PTR__objc_retain_02578638)();
            IVar4 = local_108;
            local_1c8 = ppuVar8;
            (*(code *)PTR__objc_retain_02578638)();
            local_1d0 = IVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_probeVideoVariantSizes_completio_026adab0,puVar3,&local_1f0);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            _objc_storeStrong(&local_1d0);
            _objc_storeStrong(&local_1c8,0);
          }
          else {
            (*(code *)local_180[2])(local_180,local_178);
          }
          local_100 = (uint)bVar1;
          _objc_storeStrong(&local_180);
          _objc_storeStrong(&local_190,0);
        }
        _objc_storeStrong(&local_108,0);
      }
    }
    else {
      if (local_d0 != 0) {
        (**(code **)(local_d0 + 0x10))(local_d0,&cf____eu);
      }
      local_100 = 1;
    }
  }
  else {
    if (local_d0 != 0) {
      (**(code **)(local_d0 + 0x10))(local_d0,0);
    }
    local_100 = 1;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

