// FUN_008259f8 @ 008259f8

void FUN_008259f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_308;
  undefined *local_300;
  undefined *local_270;
  undefined *local_268;
  undefined1 auStack_210 [8];
  long local_208;
  long *local_200;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  undefined *local_168;
  undefined *local_150;
  undefined4 local_144;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = (undefined *)0x0;
  _objc_storeStrong(&local_130,param_1);
  local_138 = (undefined *)0x0;
  _objc_storeStrong(&local_138,param_2);
  local_140 = (undefined *)0x0;
  _objc_storeStrong(&local_140,param_3);
  if (local_138 == (undefined *)0x0) {
    local_144 = 1;
  }
  else {
    puVar5 = local_140;
    _objc_getAssociatedObject(local_140,&DAT_028cd1d3);
    _objc_retainAutoreleasedReturnValue();
    local_150 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSMapTable_026ce9c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMapTable_026ce9c0,
                 PTR_s_mapTableWithKeyOptions_valueOpti_026a8c58,5,0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_150;
      local_150 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_setAssociatedObject(local_140,&DAT_028cd1d3,local_150,1);
    }
    _memset(auStack_1a8,0,0x40);
    puVar5 = local_150;
    (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_keyEnumerator_026a8c50);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_268 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10);
    if (local_268 != (undefined *)0x0) {
      lVar3 = *local_198;
      local_270 = (undefined *)0x0;
      do {
        do {
          if (*local_198 - lVar3 != 0) {
            _objc_enumerationMutation(*local_198 - lVar3,puVar2);
          }
          puVar4 = *(undefined **)(local_1a0 + (long)local_270 * 8);
          local_168 = puVar4;
          FUN_0082fb1c();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = local_168;
          local_1b0 = puVar4;
          if ((puVar4 == (undefined *)0x0) || (puVar4 == local_130)) {
            local_144 = 3;
          }
          else {
            puVar4 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_objectForKey__0269e048,local_168);
            _objc_retainAutoreleasedReturnValue();
            FUN_0082eba0(puVar5);
            (*(code *)PTR__objc_release_02578630)(puVar4);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_150,PTR_s_removeObjectForKey__0269d700,local_168);
            local_144 = 0;
          }
          _objc_storeStrong(&local_1b0,0);
          local_270 = local_270 + 1;
        } while (local_270 < local_268);
        local_268 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                   0x10);
        local_270 = (undefined *)0x0;
      } while (local_268 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar5 = local_130;
    FUN_00826364();
    _objc_retainAutoreleasedReturnValue();
    local_1b8 = puVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_1c0 = puVar5;
    while( true ) {
      bVar1 = false;
      if ((local_1c0 != (undefined *)0x0) && (bVar1 = false, local_1c0 != local_138)) {
        bVar1 = local_1c0 != local_140;
      }
      if (!bVar1) break;
      FUN_00827dfc(local_1c0,local_150);
      puVar2 = local_1c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_1c0;
      local_1c0 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    local_144 = 4;
    _objc_storeStrong(&local_1c0,0);
    FUN_0082fcdc(local_138,local_140,local_150,5);
    puVar5 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_1c8 = puVar5;
    if (puVar5 != (undefined *)0x0) {
      _memset(auStack_210,0,0x40);
      puVar5 = local_1c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_subviews_026cab40);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      local_300 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_128,0x10
                );
      if (local_300 != (undefined *)0x0) {
        lVar3 = *local_200;
        local_308 = (undefined *)0x0;
        do {
          do {
            if (*local_200 - lVar3 != 0) {
              _objc_enumerationMutation(*local_200 - lVar3,puVar2);
            }
            puVar5 = *(undefined **)(local_208 + (long)local_308 * 8);
            local_1d0 = puVar5;
            if ((((puVar5 != local_138) && ((long)puVar5 - (long)local_140 != 0)) &&
                (FUN_0082e90c((long)puVar5 - (long)local_140,puVar5,local_140),
                ((ulong)puVar5 & 1) == 0)) &&
               ((puVar5 = local_1d0, FUN_0083012c(local_1d0,local_130), ((ulong)puVar5 & 1) == 0 &&
                (puVar5 = local_1d0, FUN_0082f794(local_1d0,local_1c8), ((ulong)puVar5 & 1) != 0))))
            {
              FUN_00827dfc(local_1d0,local_150);
              FUN_0082fcdc(local_1d0,local_140,local_150,4);
            }
            local_308 = local_308 + 1;
          } while (local_308 < local_300);
          local_300 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_210,auStack_128,
                     0x10);
          local_308 = (undefined *)0x0;
        } while (local_300 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    _objc_storeStrong(&local_1c8);
    _objc_storeStrong(&local_1b8,0);
    _objc_storeStrong(&local_150,0);
    local_144 = 0;
  }
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_138,0);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

