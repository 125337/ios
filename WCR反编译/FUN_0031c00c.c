// FUN_0031c00c @ 0031c00c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0031c00c(double param_1,double param_2,double param_3,double param_4,undefined8 param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  uint local_2f0;
  ulong local_260;
  ulong local_258;
  uint local_1e8;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  undefined4 local_d0;
  byte local_c9;
  ulong local_c8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_5);
  local_c9 = 0;
  local_1e8 = 1;
  if (local_b0 != 0) {
    uVar7 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    local_c9 = 1;
    local_c8 = uVar7;
    FUN_0031c71c();
    local_1e8 = (uint)uVar7 ^ 1;
  }
  if ((local_c9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  if ((local_1e8 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_bounds_026ca548);
    local_f0 = param_1;
    dStack_e8 = param_2;
    local_e0 = param_3;
    dStack_d8 = param_4;
    _memset(auStack_138,0,0x40);
    uVar7 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar7);
    local_258 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_258 != 0) {
      lVar6 = *local_128;
      local_260 = 0;
      do {
        do {
          if (*local_128 - lVar6 != 0) {
            _objc_enumerationMutation(*local_128 - lVar6,uVar3);
          }
          uVar7 = *(ulong *)(local_130 + local_260 * 8);
          pcVar4 = &cf_NewChatRoomMemberContainView;
          local_f8 = uVar7;
          _NSClassFromString();
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,pcVar4);
          if ((uVar7 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_frame_026ca640);
            dVar8 = param_4;
            _CGRectGetWidth(param_4,param_3,param_2,param_1);
            dVar9 = local_f0;
            dVar10 = local_e0;
            dVar11 = dStack_d8;
            _CGRectGetWidth(local_f0,dStack_e8);
            bVar1 = false;
            if (dVar9 <= dVar8) {
              _CGRectGetHeight(param_4,param_3,param_2,param_1);
              dVar9 = local_f0;
              dVar11 = dStack_d8;
              _CGRectGetHeight(local_f0,dStack_e8,local_e0);
              bVar1 = dVar9 * 3.0 <= param_4;
              dVar8 = param_4;
              dVar9 = dVar9 * 3.0;
              dVar10 = 3.0;
            }
            param_1 = dVar11;
            param_2 = dVar10;
            param_3 = dVar9;
            param_4 = dVar8;
            uVar7 = local_f8;
            puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isMemberOfClass__026a2030,puVar5);
            uVar2 = local_f8;
            local_2f0 = 1;
            if ((uVar7 & 1) == 0) {
              puVar5 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
              local_2f0 = (uint)uVar2;
            }
            if (((local_2f0 & 1) != 0) && (bVar1)) {
              FUN_0031bdd8(local_f8);
            }
          }
          local_260 = local_260 + 1;
        } while (local_260 < local_258);
        local_258 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
                  );
        local_260 = 0;
      } while (local_258 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_d0 = 0;
  }
  else {
    local_d0 = 1;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

