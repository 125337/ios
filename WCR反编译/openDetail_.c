// openDetail: @ 01c544a4

/* Function Stack Size: 0x18 bytes */

void WCRefineNameplateSpecialUsersViewController::openDetail_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ID IVar4;
  long lVar5;
  ulong uVar6;
  ulong local_178;
  ulong local_170;
  undefined *local_130;
  uint local_124;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
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
  local_c8 = 0;
  uVar6 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,PTR_s_respondsToSelector__026ca818,PTR_s_getUserInfoValueForKey__026a83f8);
  if ((uVar6 & 1) != 0) {
    uVar6 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c0,PTR_s_getUserInfoValueForKey__026a83f8,&cf_username);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_d0 = uVar6;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar6 & 1) != 0) {
      _objc_storeStrong(&local_c8,local_d0);
    }
    _objc_storeStrong(&local_d0,0);
  }
  uVar6 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (uVar6 == 0) {
    uVar2 = local_c0;
    _objc_getAssociatedObject(local_c0,"WCRNameplateUsername");
    _objc_retainAutoreleasedReturnValue();
    uVar6 = local_c8;
    local_c8 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar6);
  }
  uVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  uVar6 = local_c0;
  if (uVar2 == 0) {
    puVar1 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar2 = local_c0;
    if ((uVar6 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_d8 = uVar2;
      _memset(auStack_120,0,0x40);
      uVar6 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(uVar6);
      local_170 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      if (local_170 != 0) {
        lVar5 = *local_110;
        local_178 = 0;
        do {
          do {
            if (*local_110 - lVar5 != 0) {
              _objc_enumerationMutation(*local_110 - lVar5,uVar2);
            }
            uVar6 = *(ulong *)(local_118 + local_178 * 8);
            puVar1 = PTR__OBJC_CLASS___UISwitch_026cea90;
            local_e0 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UISwitch_026cea90,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar1);
            if ((uVar6 & 1) != 0) {
              uVar3 = local_e0;
              _objc_getAssociatedObject(local_e0,DAT_028c6880);
              _objc_retainAutoreleasedReturnValue();
              uVar6 = local_c8;
              local_c8 = uVar3;
              (*(code *)PTR__objc_release_02578630)(uVar6);
              local_124 = 2;
              goto LAB_01c54864;
            }
            local_178 = local_178 + 1;
          } while (local_178 < local_170);
          local_170 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,
                     0x10);
          local_178 = 0;
        } while (local_170 != 0);
      }
      local_124 = 0;
LAB_01c54864:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      _objc_storeStrong(&local_d8,0);
    }
  }
  uVar6 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (uVar6 != 0) {
    puVar1 = PTR_WCRefineNameplateSpecialUserDetailViewController_026cecd8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar4 = local_b0;
    local_130 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_storeStrong(&local_130,0);
  }
  local_124 = (uint)(uVar6 == 0);
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

