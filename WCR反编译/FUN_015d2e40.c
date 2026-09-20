// FUN_015d2e40 @ 015d2e40

void FUN_015d2e40(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *local_260;
  undefined *local_258;
  undefined *local_168;
  long local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  undefined8 local_118;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined **local_e0;
  undefined *local_d8;
  long local_d0;
  long local_c8;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  lVar1 = *(long *)(param_1 + 0x20);
  local_b8 = param_1;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_createDirectoryAtPath_withInterm_0269e230,
               *(undefined8 *)(param_1 + 0x20),1,0);
    lVar3 = 5;
    _NSSearchPathForDirectoriesInDomains(5,1,1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_c8 = lVar1;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    lVar3 = 9;
    _NSSearchPathForDirectoriesInDomains(9,1,1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = lVar1;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_c8;
    local_d8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
    puVar2 = local_d8;
    if (lVar1 != 0) {
      lVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_stringByAppendingPathComponent__026cab30,&cf_W);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(lVar1);
      puVar2 = local_d8;
      lVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_stringByAppendingPathComponent__026cab30,&cf_WCRefine_Themes);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(lVar1);
      puVar2 = local_d8;
      lVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_stringByAppendingPathComponent__026cab30,&cf_WCRefine_Theme);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    lVar1 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
    puVar2 = local_d8;
    if (lVar1 != 0) {
      lVar1 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_stringByAppendingPathComponent__026cab30,&cf_W);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(lVar1);
      puVar2 = local_d8;
      lVar1 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_stringByAppendingPathComponent__026cab30,&cf_WCRefine_Theme);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    ppuVar5 = &local_110;
    local_110 = PTR___NSConcreteStackBlock_02578660;
    local_108 = 0xc2000000;
    local_104 = 0;
    local_100 = FUN_015d3554;
    local_f8 = &DAT_0257cbd8;
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = local_c0;
    local_f0 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = puVar2;
    _objc_retainBlock();
    local_e0 = ppuVar5;
    _memset(auStack_158,0,0x40);
    puVar2 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_258 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10);
    if (local_258 != (undefined *)0x0) {
      lVar1 = *local_148;
      local_260 = (undefined *)0x0;
      do {
        do {
          if (*local_148 - lVar1 != 0) {
            _objc_enumerationMutation(*local_148 - lVar1,puVar2);
          }
          local_118 = *(undefined8 *)(local_150 + (long)local_260 * 8);
          (*(code *)local_e0[2])(local_e0,local_118);
          local_260 = local_260 + 1;
        } while (local_260 < local_258);
        local_258 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,
                   0x10);
        local_260 = (undefined *)0x0;
      } while (local_258 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    lVar1 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      lVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c8,PTR_s_stringByAppendingPathComponent__026cab30,&cf_WCRefine);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_c0;
      local_160 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_contentsOfDirectoryAtPath_error__0269e088,lVar1,0);
      _objc_retainAutoreleasedReturnValue();
      local_168 = puVar2;
      if ((puVar2 != (undefined *)0x0) &&
         ((*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0),
         puVar2 == (undefined *)0x0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_removeItemAtPath_error__0269f910,local_160,0);
      }
      _objc_storeStrong(&local_168);
      _objc_storeStrong(&local_160,0);
    }
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_d0,0);
    _objc_storeStrong(&local_c8,0);
    _objc_storeStrong(&local_c0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

