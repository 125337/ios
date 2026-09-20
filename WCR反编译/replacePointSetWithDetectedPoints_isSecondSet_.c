// replacePointSetWithDetectedPoints:isSecondSet: @ 01d51e1c

/* Function Stack Size: 0x1c bytes */

void WCRefineScreenshotFrameEditorViewController::replacePointSetWithDetectedPoints_isSecondSet_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ulong uVar1;
  ID IVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 in_d0;
  undefined8 uVar5;
  undefined8 in_d1;
  undefined8 uVar6;
  ulong local_1f8;
  ulong local_1f0;
  ID local_1c8;
  ID local_1b8;
  ulong local_168;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  undefined8 local_120;
  byte local_111;
  ID local_110;
  byte local_101;
  ID local_100;
  ID local_f8;
  byte local_e9;
  ID local_e8;
  byte local_d9;
  ID local_d8;
  ID local_d0;
  undefined4 local_c8;
  byte local_c1;
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
  local_c1 = (byte)param_4;
  uVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  if (uVar1 == 4) {
    local_d9 = 0;
    local_e9 = 0;
    local_1b8 = local_b0;
    if ((local_c1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_points_026c4688);
      _objc_retainAutoreleasedReturnValue();
      local_e9 = 1;
      local_e8 = local_1b8;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_points2_026c4690);
      _objc_retainAutoreleasedReturnValue();
      local_d9 = 1;
      local_d8 = local_1b8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = local_1b8;
    if ((local_e9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e8);
    }
    if ((local_d9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d8);
    }
    local_101 = 0;
    local_111 = 0;
    local_1c8 = local_b0;
    if ((local_c1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_pointViews_026c4800);
      _objc_retainAutoreleasedReturnValue();
      local_111 = 1;
      local_110 = local_1c8;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_pointViews2_026c4818);
      _objc_retainAutoreleasedReturnValue();
      local_101 = 1;
      local_100 = local_1c8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_f8 = local_1c8;
    if ((local_111 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_110);
    }
    if ((local_101 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_100);
    }
    _memset(auStack_160,0,0x40);
    IVar2 = local_f8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1f0 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,0x10);
    if (local_1f0 != 0) {
      lVar4 = *local_150;
      local_1f8 = 0;
      do {
        do {
          if (*local_150 - lVar4 != 0) {
            _objc_enumerationMutation(*local_150 - lVar4,IVar2);
          }
          local_120 = *(undefined8 *)(local_158 + local_1f8 * 8);
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_removeFromSuperview_026ca800);
          local_1f8 = local_1f8 + 1;
        } while (local_1f8 < local_1f0);
        local_1f0 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,0x10
                  );
        local_1f8 = 0;
      } while (local_1f0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_removeAllObjects_0269d508);
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_removeAllObjects_0269d508);
    local_168 = 0;
    while( true ) {
      uVar1 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
      if (uVar1 <= local_168) break;
      uVar1 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_objectAtIndexedSubscript__0269cc78,local_168);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      IVar2 = local_b0;
      uVar5 = in_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_templateImage_026c46b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      uVar6 = 0;
      FUN_01d524d0(in_d0,0,uVar5);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_templateImage_026c46b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      FUN_01d524d0(in_d1,0,uVar6);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      IVar2 = local_d0;
      puVar3 = PTR__OBJC_CLASS___NSValue_026ce1f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (in_d0,in_d1,PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithCGPoint__0269e328);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      IVar2 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_displayPointFromImagePoint__026c47b8);
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_createPointMarkerAtLocation_inde_026c47c0,local_168,local_c1 & 1);
      local_168 = local_168 + 1;
    }
    _objc_storeStrong(local_168 - uVar1,&local_f8);
    _objc_storeStrong(&local_d0,0);
    local_c8 = 0;
  }
  else {
    local_c8 = 1;
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

