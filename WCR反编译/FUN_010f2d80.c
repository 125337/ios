// FUN_010f2d80 @ 010f2d80

void FUN_010f2d80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong local_1c8;
  ulong local_1b0;
  ulong local_e0;
  undefined8 local_68;
  cfstringStruct *local_60;
  undefined8 local_58;
  cfstringStruct *local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 8) & 1) == 0) {
    lVar14 = *(long *)(param_1 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_sourceTrackIDs_026aec78);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar13;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(lVar14,PTR_s_sourceFrameByTrackID__026aec80,uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar13);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    puVar7 = PTR__OBJC_CLASS___NSError_026ce470;
    if (lVar14 == 0) {
      uVar13 = *(undefined8 *)(param_1 + 0x28);
      local_38 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
      local_30 = &cf_elSn__;
      puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_errorWithDomain_code_userInfo__026a1648,
                 &cf_WCRefinePerspectiveVideoCompositor,0xffffffffffffffff);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar13,PTR_s_finishWithError__026aec88);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
    }
    else {
      uVar3 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x88);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_newPixelBuffer_026aec90);
      puVar7 = PTR__OBJC_CLASS___NSError_026ce470;
      if (uVar3 == 0) {
        uVar13 = *(undefined8 *)(param_1 + 0x28);
        local_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
        local_40 = &cf_elR_QP__Q_S;
        puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_48,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar7,PTR_s_errorWithDomain_code_userInfo__026a1648,
                   &cf_WCRefinePerspectiveVideoCompositor,0xfffffffffffffffe);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(uVar13,PTR_s_finishWithError__026aec88);
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(puVar6);
      }
      else {
        lVar4 = *(long *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)
                  (lVar4,PTR_s_applyPerspectiveTransform__026aec98,lVar14);
        if (lVar4 == 0) {
          _CVPixelBufferRelease(uVar3);
          puVar7 = PTR__OBJC_CLASS___NSError_026ce470;
          uVar13 = *(undefined8 *)(param_1 + 0x28);
          local_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
          local_50 = &cf_Sbc1Y_;
          puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_50,&local_58,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar7,PTR_s_errorWithDomain_code_userInfo__026a1648,
                     &cf_WCRefinePerspectiveVideoCompositor,0xfffffffffffffffd);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(uVar13,PTR_s_finishWithError__026aec88);
          (*(code *)PTR__objc_release_02578630)(puVar7);
          (*(code *)PTR__objc_release_02578630)(puVar6);
        }
        else {
          uVar5 = *(ulong *)(param_1 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_compositeFrame__026aeca0,lVar4);
          if (uVar5 == 0) {
            _CVPixelBufferRelease(lVar4);
            _CVPixelBufferRelease(uVar3);
            puVar7 = PTR__OBJC_CLASS___NSError_026ce470;
            uVar13 = *(undefined8 *)(param_1 + 0x28);
            local_68 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_02578048;
            local_60 = &cf_Tb1Y_;
            puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,
                       PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_60,&local_68,1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar7,PTR_s_errorWithDomain_code_userInfo__026a1648,
                       &cf_WCRefinePerspectiveVideoCompositor,0xfffffffffffffffc);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(uVar13,PTR_s_finishWithError__026aec88);
            (*(code *)PTR__objc_release_02578630)(puVar7);
            (*(code *)PTR__objc_release_02578630)(puVar6);
          }
          else {
            _CVPixelBufferLockBaseAddress(uVar5);
            _CVPixelBufferLockBaseAddress(uVar3,0);
            uVar8 = uVar5;
            _CVPixelBufferGetBaseAddress();
            uVar9 = uVar3;
            _CVPixelBufferGetBaseAddress();
            uVar10 = uVar5;
            _CVPixelBufferGetBytesPerRow();
            uVar11 = uVar3;
            _CVPixelBufferGetBytesPerRow();
            uVar12 = uVar5;
            _CVPixelBufferGetHeight();
            local_1b0 = uVar3;
            _CVPixelBufferGetHeight();
            if (uVar12 < local_1b0) {
              local_1b0 = uVar12;
            }
            for (local_e0 = 0; local_e0 < local_1b0; local_e0 = local_e0 + 1) {
              local_1c8 = uVar11;
              if (uVar10 < uVar11) {
                local_1c8 = uVar10;
              }
              ___memcpy_chk(uVar9 + local_e0 * uVar11,uVar8 + local_e0 * uVar10,local_1c8,
                            0xffffffffffffffff);
            }
            _CVPixelBufferUnlockBaseAddress(local_e0 - local_1b0,uVar3);
            _CVPixelBufferUnlockBaseAddress(uVar5,0);
            _CVPixelBufferRelease(lVar4);
            _CVPixelBufferRelease(uVar5);
            (*(code *)PTR__objc_msgSend_02578628)
                      (*(undefined8 *)(param_1 + 0x28),PTR_s_finishWithComposedVideoFrame__026aeca8,
                       uVar3);
            _CVPixelBufferRelease(uVar3);
          }
        }
      }
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_finishCancelledRequest_026aec70);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

