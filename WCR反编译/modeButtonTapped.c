// modeButtonTapped @ 01d4cdfc

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenshotFrameEditorViewController::modeButtonTapped(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  int iVar4;
  long lVar5;
  double dVar6;
  undefined8 in_d1;
  undefined8 in_d2;
  ulong local_1c0;
  ulong local_1b8;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined8 local_d0;
  ID local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isDoubleMode_026c4670);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setIsDoubleMode__026c47b0,(uint)param_1 ^ 1);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_mainScrollView_026c4668);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_viewWithTag__026cabe0,0x4e22);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = IVar2;
  if (IVar2 != 0) {
    IVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isDoubleMode_026c4670);
    pcVar1 = &cf_SV_j_;
    if ((IVar3 & 1) == 0) {
      pcVar1 = &cf_USV_j_;
    }
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setTitle_forState__026caab8,pcVar1,0);
  }
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isDoubleMode_026c4670);
  if ((IVar2 & 1) == 0) {
    _memset(auStack_110,0,0x40);
    IVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_pointViews2_026c4818);
    _objc_retainAutoreleasedReturnValue();
    local_1b8 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1b8 != 0) {
      lVar5 = *local_100;
      local_1c0 = 0;
      do {
        do {
          if (*local_100 - lVar5 != 0) {
            _objc_enumerationMutation(*local_100 - lVar5,IVar2);
          }
          local_d0 = *(undefined8 *)(local_108 + local_1c0 * 8);
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_removeFromSuperview_026ca800);
          local_1c0 = local_1c0 + 1;
        } while (local_1c0 < local_1b8);
        local_1b8 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_1c0 = 0;
      } while (local_1b8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_pointViews2_026c4818);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_points2_026c4690);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_removeSecondSetFields_026c4848);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_addSecondSetFields_026c4768);
  }
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isDoubleMode_026c4670);
  iVar4 = 0x168;
  if ((IVar2 & 1) == 0) {
    iVar4 = 0xb4;
  }
  IVar2 = local_b0;
  dVar6 = (double)iVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_coordinatePanel_026c4718);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_coordinatePanel_026c4718);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar6,in_d1,in_d2,(double)iVar4);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_updatePointCount_026c47c8);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_redrawCanvas_026c47d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_adjustLayout_026c47e0);
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

