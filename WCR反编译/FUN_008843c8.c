// FUN_008843c8 @ 008843c8

long FUN_008843c8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_238;
  undefined *local_230;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8 [3];
  undefined *local_d0;
  long local_c8;
  undefined4 local_bc;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  if (local_b8 == 0) {
    local_b0 = 0;
    local_bc = 1;
  }
  else {
    local_c8 = 0;
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_b8);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar1;
    while (puVar1 = local_d0, (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0),
          puVar1 != (undefined *)0x0) {
      puVar1 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_e8[0] = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_removeLastObject_0269e830);
      puVar1 = local_e8[0];
      puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      puVar2 = local_e8[0];
      if (((ulong)puVar1 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___UIButton_026cdfc8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        puVar1 = local_e8[0];
        if (((ulong)puVar2 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_f8 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_titleForState__026a2208,0);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          FUN_008825d8();
          _objc_retainAutoreleasedReturnValue();
          local_100 = puVar2;
          (*(code *)PTR__objc_release_02578630)(puVar1);
          puVar1 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
          if (puVar1 == (undefined *)0x0) {
            puVar2 = local_f8;
            (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_titleLabel_026caba0);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            FUN_008825d8();
            _objc_retainAutoreleasedReturnValue();
            puVar1 = local_100;
            local_100 = puVar4;
            (*(code *)PTR__objc_release_02578630)(puVar1);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            (*(code *)PTR__objc_release_02578630)(puVar2);
          }
          puVar1 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
          lVar5 = 0;
          if (puVar1 != (undefined *)0x0) {
            lVar5 = local_c8 + 1;
            local_c8 = lVar5;
          }
          _objc_storeStrong(lVar5,&local_100);
          _objc_storeStrong(&local_f8,0);
        }
      }
      else {
        puVar1 = local_e8[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_text_0269ce68);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        FUN_008825d8();
        _objc_retainAutoreleasedReturnValue();
        local_f0 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar1 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
        lVar5 = 0;
        if (puVar1 != (undefined *)0x0) {
          lVar5 = local_c8 + 1;
          local_c8 = lVar5;
        }
        _objc_storeStrong(lVar5,&local_f0,0);
      }
      _memset(auStack_148,0,0x40);
      puVar1 = local_e8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_e8[0],PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_230 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_230 != (undefined *)0x0) {
        lVar5 = *local_138;
        local_238 = (undefined *)0x0;
        do {
          do {
            if (*local_138 - lVar5 != 0) {
              _objc_enumerationMutation(*local_138 - lVar5,puVar1);
            }
            local_108 = *(undefined8 *)(local_140 + (long)local_238 * 8);
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_108);
            local_238 = local_238 + 1;
          } while (local_238 < local_230);
          local_230 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                     0x10);
          local_238 = (undefined *)0x0;
        } while (local_230 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar1);
      _objc_storeStrong(local_e8,0);
    }
    local_b0 = local_c8;
    local_bc = 1;
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

