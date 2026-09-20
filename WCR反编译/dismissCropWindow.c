// dismissCropWindow @ 01668610

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::dismissCropWindow(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong local_178;
  ulong local_170;
  uint local_12c;
  ID local_120;
  undefined8 local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  byte local_c1;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_textInputOverlay_026b1e18);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_dismissAnnotateTextInputOverlay_026b2298);
  }
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_imgTranslateLogic_026b2438);
  _objc_retainAutoreleasedReturnValue();
  local_c1 = 0;
  local_12c = 0;
  if (IVar1 != 0) {
    IVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_imgTranslateLogic_026b2438);
    _objc_retainAutoreleasedReturnValue();
    local_c1 = 1;
    pcVar3 = &cf_forceCancelImageTranslate;
    local_c0 = IVar2;
    _NSSelectorFromString(&cf_forceCancelImageTranslate);
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_respondsToSelector__026ca818,pcVar3);
    local_12c = (uint)IVar2;
  }
  if ((local_c1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((local_12c & 1) != 0) {
    IVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_imgTranslateLogic_026b2438);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = &cf_forceCancelImageTranslate;
    _NSSelectorFromString(&cf_forceCancelImageTranslate);
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,pcVar3);
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setImgTranslateLogic__026b2440,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_dismissTranslateSticker_026b2448);
  _memset(auStack_110,0,0x40);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_floatingOverlays_026b1e00);
  _objc_retainAutoreleasedReturnValue();
  local_170 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_170 != 0) {
    lVar4 = *local_100;
    local_178 = 0;
    do {
      do {
        if (*local_100 - lVar4 != 0) {
          _objc_enumerationMutation(*local_100 - lVar4,IVar1);
        }
        uVar5 = *(undefined8 *)(local_108 + local_178 * 8);
        local_d0 = uVar5;
        _objc_getAssociatedObject(uVar5,DAT_028c6018);
        _objc_retainAutoreleasedReturnValue();
        local_118 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_removeFromSuperview_026ca800);
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_removeFromSuperview_026ca800);
        _objc_storeStrong(&local_118,0);
        local_178 = local_178 + 1;
      } while (local_178 < local_170);
      local_170 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_178 = 0;
    } while (local_170 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_floatingOverlays_026b1e00);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_selectStrokeLayer__026b20c0);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_onClose_026b2450);
  _objc_retainAutoreleasedReturnValue();
  local_120 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setOnClose__026b2458,0);
  if (local_120 != 0) {
    (**(code **)(local_120 + 0x10))();
  }
  _objc_storeStrong(&local_120,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

