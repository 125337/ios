// beginRenameValue: @ 01874b60

/* Function Stack Size: 0x18 bytes */

void WCRefineActionMenuConfigViewController::beginRenameValue_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_148;
  ulong local_140;
  char *local_120;
  undefined4 local_114;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setPendingRenameValue__026b6d18,local_c0);
  local_c8 = 0;
  _memset(auStack_110,0,0x40);
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_entries_026a25d0);
  _objc_retainAutoreleasedReturnValue();
  local_140 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_140 != 0) {
    lVar6 = *local_100;
    local_148 = 0;
    do {
      do {
        if (*local_100 - lVar6 != 0) {
          _objc_enumerationMutation(*local_100 - lVar6,IVar1);
        }
        uVar7 = *(ulong *)(local_108 + local_148 * 8);
        local_d0 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_value);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar7);
        if ((uVar2 & 1) != 0) {
          _objc_storeStrong(&local_c8,local_d0);
          local_114 = 2;
          goto LAB_01874d6c;
        }
        local_148 = local_148 + 1;
      } while (local_148 < local_140);
      local_140 = IVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_148 = 0;
    } while (local_140 != 0);
  }
  local_114 = 0;
LAB_01874d6c:
  (*(code *)PTR__objc_release_02578630)(IVar1);
  pcVar3 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_120 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x14);
  pcVar4 = local_120;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_120,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98);
  pcVar3 = local_120;
  if (((ulong)pcVar4 & 1) != 0) {
    uVar5 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setTextFieldDefaultText__0269fd98);
    (*(code *)PTR__objc_release_02578630)(uVar5);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_120,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_120,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_b0,
             PTR_s_confirmRename__026b6d20);
  (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_show_0269d280);
  _objc_storeStrong(&local_120,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

