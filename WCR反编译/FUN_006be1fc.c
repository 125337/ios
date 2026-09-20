// FUN_006be1fc @ 006be1fc

byte FUN_006be1fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_1f0;
  ulong local_1e8;
  uint local_194;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  uint local_d8;
  undefined8 local_c8;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_3);
  uVar3 = local_b8;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar5 = local_b8;
  if (((uVar3 & 1) == 0) || (local_c0 == 0)) {
    local_a9 = 0;
    local_d8 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar3 = local_b8;
    if ((uVar5 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_e0 = uVar3;
      _objc_getAssociatedObject(uVar3,&DAT_028cc1bb);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_e0;
      local_e8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_image_026ca678);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_e8;
      local_194 = 1;
      if (uVar5 == local_c0) {
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        local_194 = 1;
        if ((uVar3 & 1) != 0) {
          uVar3 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_isEqualToString__0269ccc8,local_c8);
          local_194 = (uint)uVar3 ^ 1;
        }
      }
      (*(code *)PTR__objc_release_02578630)(uVar5);
      bVar1 = (local_194 & 1) != 0;
      if (bVar1) {
        local_a9 = 1;
      }
      local_d8 = (uint)bVar1;
      _objc_storeStrong(&local_e8);
      _objc_storeStrong(&local_e0,0);
      if (local_d8 != 0) goto LAB_006be730;
    }
    _memset(auStack_130,0,0x40);
    uVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_1e8 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1e8 != 0) {
      lVar4 = *local_120;
      local_1f0 = 0;
      do {
        do {
          if (*local_120 - lVar4 != 0) {
            _objc_enumerationMutation(*local_120 - lVar4,uVar3);
          }
          uVar5 = *(ulong *)(local_128 + local_1f0 * 8);
          local_f0 = uVar5;
          FUN_006be1fc(uVar5,local_c0,local_c8);
          if ((uVar5 & 1) != 0) {
            local_a9 = 1;
            local_d8 = 1;
            goto LAB_006be6f4;
          }
          local_1f0 = local_1f0 + 1;
        } while (local_1f0 < local_1e8);
        local_1e8 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        local_1f0 = 0;
      } while (local_1e8 != 0);
    }
    local_d8 = 0;
LAB_006be6f4:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_d8 == 0) {
      local_a9 = 0;
      local_d8 = 1;
    }
  }
LAB_006be730:
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

