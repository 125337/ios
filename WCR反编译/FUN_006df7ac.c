// FUN_006df7ac @ 006df7ac

void FUN_006df7ac(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *local_210;
  undefined1 *local_208;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined1 *local_110;
  undefined *local_108;
  byte local_f9;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined4 local_d8;
  undefined1 *local_c8;
  cfstringStruct *local_c0;
  undefined *local_b8;
  undefined1 auStack_b0 [128];
  undefined1 *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined1 *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = &cf_apply;
  puVar2 = local_b8;
  FUN_006e0078();
  puVar3 = local_b8;
  local_c8 = puVar2;
  FUN_006e0078();
  if (puVar3 != (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
    local_d8 = 1;
    goto LAB_006dffa8;
  }
  FUN_006e0174(0);
  if (((ulong)puVar3 & 1) == 0) {
    FUN_006e0238(local_b8);
    local_d8 = 1;
    goto LAB_006dffa8;
  }
  puVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_navigationItem_0269cf08);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = puVar2;
  if (puVar2 == (undefined1 *)0x0) {
    local_d8 = 1;
  }
  else {
    puVar2 = local_b8;
    _objc_getAssociatedObject(local_b8,&DAT_028cc300);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar2;
    if (puVar2 == (undefined1 *)0x0) {
      puVar2 = local_b8;
      FUN_006e085c();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_e8;
      local_e8 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if (local_e8 != (undefined1 *)0x0) {
        _objc_setAssociatedObject(local_b8,&DAT_028cc300,local_e8,1);
        goto LAB_006df9c4;
      }
      local_d8 = 1;
    }
    else {
LAB_006df9c4:
      puVar4 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_rightBarButtonItems_0269eab0);
      _objc_retainAutoreleasedReturnValue();
      local_f9 = 0;
      local_f0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_count_0269cfe0);
      bVar1 = false;
      if (puVar4 == (undefined1 *)0x0) {
        puVar4 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_rightBarButtonItem_0269feb8);
        _objc_retainAutoreleasedReturnValue();
        local_f9 = 1;
        bVar1 = puVar4 != (undefined1 *)0x0;
        local_f8 = puVar4;
      }
      if ((local_f9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_f8);
      }
      if (bVar1) {
        puVar5 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_rightBarButtonItem_0269feb8);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_30 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_30,1);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_f0;
        local_f0 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_108 = puVar2;
      _memset(auStack_150,0,0x40);
      puVar4 = local_f0;
      (*(code *)PTR__objc_retain_02578638)();
      local_208 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_b0,0x10)
      ;
      if (local_208 != (undefined1 *)0x0) {
        lVar6 = *local_140;
        local_210 = (undefined1 *)0x0;
        do {
          do {
            if (*local_140 - lVar6 != 0) {
              _objc_enumerationMutation(*local_140 - lVar6,puVar4);
            }
            local_110 = *(undefined1 **)(local_148 + (long)local_210 * 8);
            if (local_110 != local_e8) {
              (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_addObject__0269d180,local_110);
            }
            local_210 = local_210 + 1;
          } while (local_210 < local_208);
          local_208 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_b0,
                     0x10);
          local_210 = (undefined1 *)0x0;
        } while (local_208 != (undefined1 *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar2 = local_108;
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_count_0269cfe0);
      if (puVar2 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_addObject__0269d180,local_e8);
        puVar4 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_isEqualToArray__0269e9b0,local_108);
        if (((ulong)puVar4 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_setRightBarButtonItems__0269eac8,local_108);
        }
      }
      puVar2 = local_b8;
      FUN_006e0c70();
      local_158 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_setEnabled__026ca938,puVar2 != (undefined1 *)0x0);
      puVar4 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_customView_0269ea28);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIControl_026ce2d0;
      local_160 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIControl_026ce2d0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)puVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_isEnabled_026a0ef0);
      }
      _objc_storeStrong(&local_160);
      _objc_storeStrong(&local_108,0);
      _objc_storeStrong(&local_f0,0);
      local_d8 = 0;
    }
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_e0,0);
LAB_006dffa8:
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

