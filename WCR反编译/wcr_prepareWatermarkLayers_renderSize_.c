// wcr_prepareWatermarkLayers:renderSize: @ 006fcffc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

void WCRefineScreenRecordingFrameProcessor::wcr_prepareWatermarkLayers_renderSize_
               (ID param_1,SEL param_2,ID param_3,CGSize param_4)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar6;
  long lVar7;
  double in_d0;
  double dVar8;
  double dVar9;
  double in_d1;
  double in_d2;
  double in_d3;
  ulong local_270;
  ulong local_268;
  undefined1 auStack_240 [48];
  undefined1 auStack_210 [48];
  long local_1e0;
  double local_1d8;
  double local_1c0;
  double local_1a8;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_130;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  long local_d8;
  ulong local_d0;
  SEL local_c8;
  ID local_c0;
  double local_b8;
  double dStack_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  ID IVar5;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  local_c8 = param_2;
  local_c0 = param_1;
  local_b8 = in_d0;
  dStack_b0 = in_d1;
  _objc_storeStrong(&local_d0,param_3,param_3,param_4.field0_0x0,param_4.field1_0x8);
  _memset(auStack_118,0,0x40);
  uVar2 = local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_268 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_268 != 0) {
    lVar7 = *local_108;
    local_270 = 0;
    do {
      do {
        dVar8 = in_d0;
        dVar9 = in_d1;
        if (*local_108 - lVar7 != 0) {
          _objc_enumerationMutation(*local_108 - lVar7,uVar2);
          dVar8 = in_d0;
          dVar9 = in_d1;
        }
        local_d8 = *(long *)(local_110 + local_270 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setPreparedImage__026a72b8,0);
        lVar4 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_image_026ca678);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        in_d0 = dVar8;
        in_d1 = dVar9;
        if (lVar4 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_imageSize_026a7288);
          bVar1 = true;
          in_d0 = dVar8;
          in_d1 = dVar8;
          local_130 = dVar9;
          if (0.0 < dVar8) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_imageSize_026a7288);
            bVar1 = in_d0 <= 0.0;
            in_d1 = dVar8;
          }
        }
        (*(code *)PTR__objc_release_02578630)(lVar4);
        if (!bVar1) {
          IVar5 = local_c0;
          in_d0 = local_b8;
          in_d1 = dStack_b0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_wcr_watermarkRectForLayer_render_026a7298,local_d8);
          uVar3 = (uint)IVar5;
          local_168 = in_d0;
          dStack_160 = in_d1;
          local_158 = in_d2;
          dStack_150 = in_d3;
          _CGRectIsEmpty();
          if ((((uVar3 & 1) == 0) && (in_d0 = local_158, 0.0 < local_158)) &&
             (in_d0 = dStack_150, 0.0 < dStack_150)) {
            dVar9 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_imageSize_026a7288);
            dVar8 = dStack_150;
            local_1a8 = local_158 / dVar9;
            in_d2 = dStack_150;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_imageSize_026a7288);
            local_1c0 = dVar8 / dVar9;
            local_1d8 = (dStack_b0 - dStack_160) - dStack_150;
            lVar4 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_image_026ca678);
            _objc_retainAutoreleasedReturnValue();
            _CGAffineTransformMakeScale(local_1a8,local_1c0);
            lVar6 = lVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (lVar4,PTR_s_imageByApplyingTransform__026a7208,auStack_210);
            _objc_retainAutoreleasedReturnValue();
            local_1e0 = lVar6;
            (*(code *)PTR__objc_release_02578630)(lVar4);
            lVar4 = local_1e0;
            in_d1 = local_1d8;
            _CGAffineTransformMakeTranslation();
            (*(code *)PTR__objc_msgSend_02578628)
                      (lVar4,PTR_s_imageByApplyingTransform__026a7208,auStack_240);
            _objc_retainAutoreleasedReturnValue();
            lVar6 = local_1e0;
            local_1e0 = lVar4;
            (*(code *)PTR__objc_release_02578630)(lVar6);
            IVar5 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_opacity_026a1fa0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar5,PTR_s_wcr_imageByApplyingOpacity_toIma_026a72a0,local_1e0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setPreparedImage__026a72b8);
            (*(code *)PTR__objc_release_02578630)(IVar5);
            _objc_storeStrong(&local_1e0,0);
            in_d0 = local_168;
          }
        }
        local_270 = local_270 + 1;
      } while (local_270 < local_268);
      local_268 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_270 = 0;
    } while (local_268 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

