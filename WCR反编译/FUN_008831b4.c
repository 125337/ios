// FUN_008831b4 @ 008831b4

byte FUN_008831b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined *local_1c8;
  undefined *local_1c0;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  int local_d0;
  long local_c0;
  long local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  if ((local_b8 == 0) ||
     (lVar4 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0),
     lVar4 == 0)) {
    local_a9 = 0;
    local_d0 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_b8);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar1;
    do {
      puVar1 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
      if (puVar1 == (undefined *)0x0) {
        local_a9 = 0;
        local_d0 = 1;
        break;
      }
      puVar1 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_removeLastObject_0269e830);
      puVar1 = local_e0;
      puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)puVar1 & 1) == 0) {
LAB_008834d4:
        _memset(auStack_130,0,0x40);
        puVar1 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        local_1c0 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_1c0 != (undefined *)0x0) {
          lVar4 = *local_120;
          local_1c8 = (undefined *)0x0;
          do {
            do {
              if (*local_120 - lVar4 != 0) {
                _objc_enumerationMutation(*local_120 - lVar4,puVar1);
              }
              local_f0 = *(undefined8 *)(local_128 + (long)local_1c8 * 8);
              (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_f0);
              local_1c8 = local_1c8 + 1;
            } while (local_1c8 < local_1c0);
            local_1c0 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8
                       ,0x10);
            local_1c8 = (undefined *)0x0;
          } while (local_1c0 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar1);
        local_d0 = 0;
      }
      else {
        puVar1 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_text_0269ce68);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        FUN_008825d8();
        _objc_retainAutoreleasedReturnValue();
        local_e8 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar1 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
        uVar3 = 0;
        if (puVar1 == (undefined *)0x0) {
LAB_008834b0:
          local_d0 = 0;
        }
        else {
          puVar1 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_containsString__0269d0b0,local_c0);
          uVar3 = (ulong)puVar1 & 0xffffffff;
          if (((ulong)puVar1 & 1) == 0) goto LAB_008834b0;
          uVar3 = 1;
          local_a9 = 1;
          local_d0 = 1;
        }
        _objc_storeStrong(uVar3,&local_e8,0);
        if (local_d0 == 0) goto LAB_008834d4;
      }
      _objc_storeStrong(&local_e0,0);
    } while (local_d0 == 0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

