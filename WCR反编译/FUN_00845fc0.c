// FUN_00845fc0 @ 00845fc0

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00845fc0(undefined8 param_1)

{
  uint uVar1;
  ulong uVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint local_20c;
  uint local_204;
  uint local_1fc;
  ulong local_198;
  ulong local_190;
  ulong local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  ulong local_c8;
  int local_c0;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  ulong *puVar2;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar2 = &local_b0;
  local_b0 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  if ((local_b0 == 0) || (FUN_00821330(), (uVar1 & 1) == 0)) {
    local_c0 = 1;
  }
  else {
    uVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_backgroundView_026a0320);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    local_c8 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((uVar3 & 1) == 0) ||
       (uVar3 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_tag_026cab98),
       uVar3 != 0x24f6e7)) {
      _memset(auStack_110,0,0x40);
      uVar3 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_190 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_190 != 0) {
        lVar9 = *local_100;
        local_198 = 0;
        do {
          do {
            if (*local_100 - lVar9 != 0) {
              _objc_enumerationMutation(*local_100 - lVar9,uVar3);
            }
            uVar10 = *(ulong *)(local_108 + local_198 * 8);
            puVar4 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
            local_d0 = uVar10;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isKindOfClass__0269cd68,puVar4);
            if (((uVar10 & 1) != 0) &&
               (uVar10 = local_d0,
               (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_tag_026cab98),
               uVar10 == 0x24f6e7)) {
              local_c0 = 1;
              goto LAB_00846338;
            }
            local_198 = local_198 + 1;
          } while (local_198 < local_190);
          local_190 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,
                     0x10);
          local_198 = 0;
        } while (local_190 != 0);
      }
      local_c0 = 0;
LAB_00846338:
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (local_c0 == 0) {
        uVar3 = local_b0;
        FUN_0082fb1c();
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = "NewSettingViewController";
        local_118 = uVar3;
        _objc_getClass();
        pcVar6 = "ChatRoomInfoViewController";
        _objc_getClass();
        pcVar7 = "AddContactToChatRoomViewController";
        _objc_getClass();
        local_1fc = 0;
        if (pcVar5 != (char *)0x0) {
          uVar3 = local_118;
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_isKindOfClass__0269cd68,pcVar5);
          local_1fc = (uint)uVar3;
        }
        local_204 = 0;
        if (pcVar6 != (char *)0x0) {
          uVar3 = local_118;
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_isKindOfClass__0269cd68,pcVar6);
          local_204 = (uint)uVar3;
        }
        local_20c = 0;
        if (pcVar7 != (char *)0x0) {
          uVar3 = local_118;
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_isKindOfClass__0269cd68,pcVar7);
          local_20c = (uint)uVar3;
        }
        if ((((local_1fc & 1) == 0) && ((local_204 & 1) == 0)) && ((local_20c & 1) == 0)) {
          local_c0 = 1;
        }
        else {
          uVar3 = local_118;
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_traitCollection_026caba8);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar3);
          lVar9 = _WCRPageBackgroundSceneGlobal;
          FUN_00821f48(_WCRPageBackgroundSceneGlobal,uVar10 == 2);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar9;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar9);
          if (lVar8 == 0) {
            local_c0 = 1;
          }
          else {
            _objc_storeStrong(&DAT_026f4830,&cf_table_first_layout);
            FUN_008437a4(local_118);
            local_c0 = 0;
          }
        }
        _objc_storeStrong(&local_118,0);
      }
    }
    else {
      local_c0 = 1;
    }
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

