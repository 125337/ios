// wcr_syncStyleHeader @ 01bed508

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsDraftListViewController::wcr_syncStyleHeader(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  _memset(auStack_108,0,0x40);
  IVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_138 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_138 != 0) {
    lVar4 = *local_f8;
    local_140 = 0;
    do {
      do {
        if (*local_f8 - lVar4 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar4,IVar1);
        }
        uVar5 = *(ulong *)(local_100 + local_140 * 8);
        puVar2 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
        local_c8 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UISegmentedControl_026ce290,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar5 & 1) != 0) {
          puVar2 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_setSelectedSegmentIndex__0269e9e0,puVar3);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          goto LAB_01bed774;
        }
        local_140 = local_140 + 1;
      } while (local_140 < local_138);
      local_138 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
      local_140 = 0;
    } while (local_138 != 0);
  }
LAB_01bed774:
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

