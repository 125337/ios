// FUN_0021310c @ 0021310c

void FUN_0021310c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *local_198;
  undefined *local_190;
  undefined1 auStack_168 [48];
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  undefined *local_d8;
  undefined4 local_cc;
  ulong local_c8;
  undefined1 auStack_c0 [128];
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_1);
  if (local_c8 == 0) {
    local_cc = 1;
  }
  else {
    local_40 = &cf_contentView;
    local_38 = &cf_titleLabel;
    local_30 = &cf_messageLabel;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar1;
    _memset(auStack_130,0,0x40);
    puVar1 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_190 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_c0,0x10);
    if (local_190 != (undefined *)0x0) {
      lVar5 = *local_120;
      local_198 = (undefined *)0x0;
      do {
        do {
          if (*local_120 - lVar5 != 0) {
            _objc_enumerationMutation(*local_120 - lVar5,puVar1);
          }
          uVar2 = local_c8;
          uVar6 = *(undefined8 *)(local_128 + (long)local_198 * 8);
          local_f0 = uVar6;
          _NSSelectorFromString();
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_respondsToSelector__026ca818,uVar6);
          if ((uVar2 & 1) != 0) {
            uVar3 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_valueForKey__0269d128,local_f0);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
            local_138 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
            uVar2 = local_138;
            if ((uVar3 & 1) == 0) {
              local_cc = 3;
            }
            else {
              _memcpy(auStack_168,PTR__CGAffineTransformIdentity_025782d8,0x30);
              (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setTransform__026caad0,auStack_168);
              local_cc = 0;
            }
            _objc_storeStrong(&local_138,0);
          }
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_c0,
                   0x10);
        local_198 = (undefined *)0x0;
      } while (local_190 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_d8,0);
    local_cc = 0;
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

