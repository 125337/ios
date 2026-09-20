// FUN_0077a358 @ 0077a358

byte FUN_0077a358(double param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_190;
  undefined *local_188;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  int local_e0;
  undefined1 local_d9;
  undefined *local_d8;
  ulong local_d0;
  byte local_c1;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_3);
  local_d8 = PTR_s_isMenuHidden_026a7fb0;
  uVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d0,PTR_s_respondsToSelector__026ca818,PTR_s_isMenuHidden_026a7fb0);
  if ((uVar1 & 1) != 0) {
    uVar1 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,local_d8);
    local_d9 = (undefined1)uVar1;
    if ((uVar1 & 1) == 0) {
      local_c1 = 1;
      local_e0 = 1;
      goto LAB_0077a734;
    }
  }
  _memset(auStack_128,0,0x40);
  local_c0 = &cf_m_itemView;
  local_b8 = &cf__actualContentView;
  local_b0 = &cf_m_contactsItemView;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3);
  _objc_retainAutoreleasedReturnValue();
  local_188 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_188 != (undefined *)0x0) {
    lVar4 = *local_118;
    local_190 = (undefined *)0x0;
    do {
      do {
        if (*local_118 - lVar4 != 0) {
          _objc_enumerationMutation(*local_118 - lVar4,puVar2);
        }
        local_e8 = *(undefined8 *)(local_120 + (long)local_190 * 8);
        uVar1 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_valueForKey__0269d128,local_e8);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
        local_130 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar1 & 1) == 0) {
LAB_0077a638:
          local_e0 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_frame_026ca640);
          _CGRectGetMinX(param_1,param_2);
          param_1 = ABS(param_1);
          param_2 = 0x4020000000000000;
          if (param_1 <= 8.0) goto LAB_0077a638;
          local_c1 = 1;
          local_e0 = 1;
        }
        _objc_storeStrong(&local_130,0);
        if (local_e0 != 0) goto LAB_0077a6c4;
        local_190 = local_190 + 1;
      } while (local_190 < local_188);
      local_188 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10)
      ;
      local_190 = (undefined *)0x0;
    } while (local_188 != (undefined *)0x0);
  }
  local_e0 = 0;
LAB_0077a6c4:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_e0 == 0) {
    local_c1 = 0;
    local_e0 = 1;
  }
LAB_0077a734:
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_c1 & 1;
}

