// FUN_00199294 @ 00199294

void FUN_00199294(undefined8 param_1,byte param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  ulong local_180;
  ulong local_178;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  long local_e0;
  undefined4 local_d8;
  undefined1 local_d1;
  ulong local_d0;
  byte local_b1;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_d1 = 0;
  bVar2 = true;
  uVar1 = local_b0 != 0;
  local_b1 = param_2;
  if ((bool)uVar1) {
    uVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = uVar3 == 0;
    local_d1 = uVar1;
    local_d0 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar1 = local_d1;
  }
  local_d1 = uVar1;
  if (bVar2) {
    local_d8 = 1;
  }
  else {
    _memset(auStack_120,0,0x40);
    uVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_178 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_178 != 0) {
      lVar6 = *local_110;
      local_180 = 0;
      do {
        do {
          if (*local_110 - lVar6 != 0) {
            _objc_enumerationMutation(*local_110 - lVar6,uVar4);
          }
          lVar7 = *(long *)(local_118 + local_180 * 8);
          local_e0 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_tag_026cab98);
          if (lVar7 != 0x24fb31) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setHidden__026ca970,local_b1 & 1);
          }
          local_180 = local_180 + 1;
        } while (local_180 < local_178);
        local_178 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_180 = 0;
      } while (local_178 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_respondsToSelector__026ca818,PTR_s_contactsItemView_0269fcf0);
    if ((uVar3 & 1) != 0) {
      uVar3 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_contactsItemView_0269fcf0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_128 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setHidden__026ca970,local_b1 & 1);
      }
      _objc_storeStrong(&local_128,0);
    }
    uVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_imageView_0269f230);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_textLabel_0269fd00);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_detailTextLabel_0269fd08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_d8 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

