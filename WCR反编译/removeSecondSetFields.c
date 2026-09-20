// removeSecondSetFields @ 01d4e04c

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotFrameEditorViewController::removeSecondSetFields(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  long lVar5;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_100 [8];
  long local_f8;
  long *local_f0;
  long local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_coordinatePanel_026c4718);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 != 0) {
    _memset(auStack_100,0,0x40);
    IVar1 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_coordinatePanel_026c4718);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    local_138 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10);
    if (local_138 != 0) {
      lVar4 = *local_f0;
      local_140 = 0;
      do {
        do {
          if (*local_f0 - lVar4 != 0) {
            _objc_enumerationMutation(*local_f0 - lVar4,IVar3);
          }
          lVar5 = *(long *)(local_f8 + local_140 * 8);
          local_c0 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_tag_026cab98);
          if ((29999 < lVar5) &&
             (lVar5 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_tag_026cab98),
             lVar5 < 40000)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_removeFromSuperview_026ca800);
          }
          lVar5 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_tag_026cab98);
          if ((1999 < lVar5) &&
             (lVar5 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_tag_026cab98),
             lVar5 < 3000)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_removeFromSuperview_026ca800);
          }
          local_140 = local_140 + 1;
        } while (local_140 < local_138);
        local_138 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_100,auStack_a8,0x10
                  );
        local_140 = 0;
      } while (local_138 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setLeftTopX2Field__026c4858);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setLeftTopY2Field__026c4860,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setRightTopX2Field__026c4868,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setRightTopY2Field__026c4870,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setLeftBottomX2Field__026c4878,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setLeftBottomY2Field__026c4880,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setRightBottomX2Field__026c4888,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setRightBottomY2Field__026c4890,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

