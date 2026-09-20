// FUN_002fc504 @ 002fc504

void FUN_002fc504(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_170;
  undefined *local_168;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  undefined *local_e8;
  long local_e0;
  undefined *local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined4 local_b4;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  plVar1 = &local_b0;
  local_b0 = 0;
  _objc_storeStrong(plVar1,param_1);
  if ((local_b0 == 0) || (FUN_002f8b50(), ((ulong)plVar1 & 1) == 0)) {
    local_b4 = 1;
  }
  else {
    lVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_c0 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar4);
    if (local_c0 != 0) {
      FUN_002f7f58(local_c0);
    }
    lVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tabBarController_026a1c08);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_c8 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar4);
    if (local_c8 != 0) {
      FUN_002f7f58(local_c8);
    }
    lVar4 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_viewIfLoaded_026a1fc8);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = lVar4;
    if (lVar4 == 0) {
      local_b4 = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,lVar4);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = 0x50;
      local_d8 = puVar3;
      while( true ) {
        puVar3 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0);
        lVar4 = local_e0;
        if (puVar3 != (undefined *)0x0) {
          local_e0 = local_e0 + -1;
        }
        if (puVar3 == (undefined *)0x0 || lVar4 < 1) break;
        puVar3 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_lastObject_0269d200);
        _objc_retainAutoreleasedReturnValue();
        local_e8 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_removeLastObject_0269e830);
        puVar3 = local_e8;
        FUN_002f7e80();
        if (((ulong)puVar3 & 1) == 0) {
          _memset(auStack_130,0,0x40);
          puVar3 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          local_168 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_168 != (undefined *)0x0) {
            lVar4 = *local_120;
            local_170 = (undefined *)0x0;
            do {
              do {
                if (*local_120 - lVar4 != 0) {
                  _objc_enumerationMutation(*local_120 - lVar4,puVar3);
                }
                local_f0 = *(undefined8 *)(local_128 + (long)local_170 * 8);
                (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_f0);
                local_170 = local_170 + 1;
              } while (local_170 < local_168);
              local_168 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,
                         auStack_a8,0x10);
              local_170 = (undefined *)0x0;
            } while (local_168 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar3);
          local_b4 = 0;
        }
        else {
          FUN_002f7f58(local_e8);
          local_b4 = 2;
        }
        _objc_storeStrong(&local_e8,0);
      }
      _objc_storeStrong(&local_d8,0);
      local_b4 = 0;
    }
    _objc_storeStrong(&local_d0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_c0,0);
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

