// hide @0x64340

/* Function Stack Size: 0x10 bytes */

void WCMYBImageBrowser::hide(ID param_1,SEL param_2)

{
  ID IVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong local_190;
  ulong local_188;
  undefined8 local_150;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_00110518;
  local_c0 = 0;
  local_c8 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_msgSend_collectionView(param_1);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_centerCell(uVar3,local_150);
  local_d0 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar3);
  uVar4 = _objc_opt_respondsToSelector(local_d0,"wcm_yb_foregroundView");
  if ((uVar4 & 1) != 0) {
    _objc_msgSend_wcm_yb_foregroundView(local_d0,local_150);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    uVar3 = local_c0;
    local_c0 = uVar5;
    (*(code *)PTR__objc_release_00110458)(uVar3);
  }
  _objc_msgSend_wcm_yb_cellData(local_d0,local_150);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  uVar2 = _objc_opt_respondsToSelector(uVar3,"wcm_yb_projectiveView");
  (*(code *)PTR__objc_release_00110458)(uVar3);
  if ((uVar2 & 1) != 0) {
    _objc_msgSend_wcm_yb_cellData(local_d0,local_150);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_wcm_yb_projectiveView(uVar5,local_150);
    uVar6 = _objc_retainAutoreleasedReturnValue();
    uVar3 = local_c8;
    local_c8 = uVar6;
    (*(code *)PTR__objc_release_00110458)(uVar3);
    (*(code *)PTR__objc_release_00110458)(uVar5);
  }
  _memset(auStack_118,0,0x40);
  _objc_msgSend_toolViewHandlers(local_b0,local_150);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  local_188 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                        (uVar3,local_150,auStack_118,auStack_a8,0x10);
  if (local_188 != 0) {
    lVar9 = *local_108;
    local_190 = 0;
    do {
      do {
        if (*local_108 - lVar9 != 0) {
          _objc_enumerationMutation(*local_108 - lVar9,uVar3);
        }
        local_d8 = *(undefined8 *)(local_110 + local_190 * 8);
        _objc_msgSend_wcm_yb_hide_(local_d8,local_150,1);
        local_190 = local_190 + 1;
      } while (local_190 < local_188);
      local_188 = _objc_msgSend_countByEnumeratingWithState_objects_count_
                            (uVar3,local_150,auStack_118,auStack_a8,0x10);
      local_190 = 0;
    } while (local_188 != 0);
  }
  (*(code *)PTR__objc_release_00110458)(uVar3);
  _objc_msgSend_showStatusBar(local_b0,local_150);
  _objc_msgSend_setTransitioning_isShow_(local_b0,local_150,1,0);
  _objc_msgSend_animatedTransition(local_b0,local_150);
  uVar6 = _objc_retainAutoreleasedReturnValue();
  IVar1 = local_b0;
  uVar5 = local_c0;
  uVar3 = local_c8;
  _objc_msgSend_rotationHandler(local_b0,local_150);
  uVar7 = _objc_retainAutoreleasedReturnValue();
  uVar8 = _objc_msgSend_currentOrientation(uVar7,local_150);
  local_140 = PTR___NSConcreteStackBlock_001104f0;
  local_138 = 0xc2000000;
  local_134 = 0;
  local_130 = ___25__WCMYBImageBrowser_hide__block_invoke;
  local_128 = &___block_descriptor_40_e8_32s_e5_v8__0l;
  local_120 = (*(code *)PTR__objc_retain_00110460)(local_b0);
  _objc_msgSend_wcm_yb_hideTransitioningWithContainer_startView_endView_orientation_completion_
            (uVar6,local_150,IVar1,uVar5,uVar3,uVar8,&local_140);
  (*(code *)PTR__objc_release_00110458)(uVar7);
  (*(code *)PTR__objc_release_00110458)(uVar6);
  _objc_storeStrong(&local_120);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_00110518 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_00110518 - local_28);
}

