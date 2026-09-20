// FUN_00875860 @ 00875860

void FUN_00875860(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_230;
  undefined *local_228;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  undefined *local_100;
  byte local_f1;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8 [3];
  long local_c0;
  undefined4 local_b8;
  byte local_b1;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_2);
  local_b1 = param_3;
  if (local_b0 == 0) {
    local_b8 = 1;
  }
  else {
    lVar4 = local_b0;
    FUN_00877a5c();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_c0 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_b0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_d8[0] = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_arrayWithObject__0269d538);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    while (puVar3 = local_d8[0],
          (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_count_0269cfe0),
          puVar3 != (undefined *)0x0) {
      puVar3 = local_d8[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_e8 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_removeLastObject_0269e830);
      puVar3 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_f0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_removeLastObject_0269e830);
      if (((long)local_e8 - local_b0 != 0) &&
         (puVar3 = local_e8, FUN_00878580((long)local_e8 - local_b0), ((ulong)puVar3 & 1) != 0)) {
        lVar4 = local_b0;
        FUN_008786a8(local_b0,local_c0,local_e8,local_f0);
        local_f1 = (byte)lVar4;
        puVar2 = local_e8;
        _objc_getAssociatedObject(local_e8,&DAT_028cd888);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = local_e8;
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_100 = puVar2;
        if (((local_b1 & 1) == 0) || ((local_f1 & 1) == 0)) {
          if (puVar2 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_doubleValue_026ca608);
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setAlpha__026ca860);
            _objc_setAssociatedObject(local_e8,&DAT_028cd888,0,1);
          }
        }
        else {
          if (puVar2 == (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_alpha_026ca4d8);
            (*(code *)PTR__objc_msgSend_02578628)(param_1,puVar3,PTR_s_numberWithDouble__0269d6d0);
            _objc_retainAutoreleasedReturnValue();
            _objc_setAssociatedObject(puVar1,&DAT_028cd888,puVar3,1);
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          param_1 = 0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setAlpha__026ca860);
        }
        _objc_storeStrong(&local_100,0);
      }
      puVar3 = local_e8;
      puVar1 = PTR__OBJC_CLASS___UIControl_026ce2d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIControl_026ce2d0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((ulong)puVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setUserInteractionEnabled__026caad8,1);
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setHidden__026ca970,0);
      }
      _memset(auStack_148,0,0x40);
      puVar3 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      local_228 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_228 != (undefined *)0x0) {
        lVar4 = *local_138;
        local_230 = (undefined *)0x0;
        do {
          do {
            if (*local_138 - lVar4 != 0) {
              _objc_enumerationMutation(*local_138 - lVar4,puVar3);
            }
            local_108 = *(undefined8 *)(local_140 + (long)local_230 * 8);
            (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_addObject__0269d180,local_108);
            puVar1 = local_e0;
            puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0
                       ,local_f0 + 1);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            local_230 = local_230 + 1;
          } while (local_230 < local_228);
          local_228 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                     0x10);
          local_230 = (undefined *)0x0;
        } while (local_228 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_e8,0);
    }
    _objc_storeStrong(0,&local_e0);
    _objc_storeStrong(local_d8,0);
    _objc_storeStrong(&local_c0,0);
    local_b8 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

