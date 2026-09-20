// unwrapHostOnTableView:reason: @ 00fd0458

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x20 bytes */

void WCRefineHomeTableHeaderHost::unwrapHostOnTableView_reason_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  double dVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double in_d2;
  double local_240;
  ulong local_210;
  ulong local_208;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  ID local_e0;
  undefined4 local_d4;
  ID local_d0 [3];
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0[2] = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(local_d0 + 2,param_3);
  local_d0[1] = 0;
  _objc_storeStrong(local_d0 + 1,param_4);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_hostForTableView__026ad160,local_d0[2]);
  _objc_retainAutoreleasedReturnValue();
  local_d0[0] = IVar1;
  if (IVar1 == 0) {
    local_d4 = 1;
  }
  else {
    _objc_getAssociatedObject(IVar1,&DAT_028e3044);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = IVar1;
    FUN_00fcee64();
    if ((IVar1 & 1) == 0) {
      _objc_storeStrong(&local_e0,0);
      _memset(auStack_128,0,0x40);
      IVar1 = local_d0[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_d0[0],PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_208 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_208 != 0) {
        lVar3 = *local_118;
        local_210 = 0;
        do {
          do {
            if (*local_118 - lVar3 != 0) {
              _objc_enumerationMutation(*local_118 - lVar3,IVar1);
            }
            uVar4 = *(ulong *)(local_120 + local_210 * 8);
            local_e8 = uVar4;
            FUN_00fcee64();
            if ((uVar4 & 1) != 0) {
              _objc_storeStrong(&local_e0,local_e8);
              local_d4 = 2;
              goto LAB_00fd0678;
            }
            local_210 = local_210 + 1;
          } while (local_210 < local_208);
          local_208 = IVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_210 = 0;
        } while (local_208 != 0);
      }
      local_d4 = 0;
LAB_00fd0678:
      (*(code *)PTR__objc_release_02578630)(IVar1);
    }
    IVar1 = local_d0[2];
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(IVar1,&DAT_028e3045,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_e0 == 0) {
      IVar1 = local_d0[2];
      (*(code *)PTR__objc_msgSend_02578628)(local_d0[2],PTR_s_tableHeaderView_0269ea08);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      if (lVar3 == 0x7f152) {
        (*(code *)PTR__objc_msgSend_02578628)(local_d0[2],PTR_s_setTableHeaderView__0269ea10,0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_removeFromSuperview_026ca800);
      (*(code *)PTR__objc_msgSend_02578628)(local_d0[2],PTR_s_bounds_026ca548);
      if (in_d2 <= 1.0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_bounds_026ca548);
        local_240 = in_d2;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_d0[2],PTR_s_bounds_026ca548);
        local_240 = in_d2;
      }
      dVar5 = local_240;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_stableBaseHeightForBase_width_ta_026ad178,local_e0,local_d0[2]);
      uVar7 = 0;
      uVar6 = 0;
      FUN_00fcfd30();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar6,uVar7,local_240,dVar5,local_e0,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_msgSend_02578628)(local_d0[2],PTR_s_setTableHeaderView__0269ea10,local_e0)
      ;
    }
    _objc_setAssociatedObject(local_d0[2],&DAT_028e3045);
    _objc_setAssociatedObject(local_d0[2],&DAT_028e3043,0,3);
    _objc_setAssociatedObject(local_d0[2],&DAT_028e3040,0,1);
    _objc_storeStrong(&local_e0,0);
    local_d4 = 0;
  }
  _objc_storeStrong(local_d0);
  _objc_storeStrong(local_d0 + 1,0);
  _objc_storeStrong(local_d0 + 2,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

