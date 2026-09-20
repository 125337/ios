// FUN_0162e8e8 @ 0162e8e8

void FUN_0162e8e8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *local_168;
  undefined *local_160;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  ulong local_d0;
  ulong local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_1);
  local_d0 = 0;
  _memset(auStack_118,0,0x40);
  local_c0 = &cf_toolView;
  local_b8 = &cf_inputToolView;
  local_b0 = &cf_m_inputToolView;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3);
  _objc_retainAutoreleasedReturnValue();
  local_160 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_160 != (undefined *)0x0) {
    lVar4 = *local_108;
    local_168 = (undefined *)0x0;
    do {
      do {
        if (*local_108 - lVar4 != 0) {
          _objc_enumerationMutation(*local_108 - lVar4,puVar1);
        }
        uVar5 = *(undefined8 *)(local_110 + (long)local_168 * 8);
        local_d8 = uVar5;
        _NSSelectorFromString();
        uVar2 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_respondsToSelector__026ca818,uVar5);
        if ((uVar2 & 1) != 0) {
          uVar3 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,uVar5);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_d0;
          local_d0 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          if (local_d0 != 0) goto LAB_0162eb60;
        }
        local_168 = local_168 + 1;
      } while (local_168 < local_160);
      local_160 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10)
      ;
      local_168 = (undefined *)0x0;
    } while (local_160 != (undefined *)0x0);
  }
LAB_0162eb60:
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar2 = local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,uVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

