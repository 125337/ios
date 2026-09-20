// _WCRSideloadShareFixClearGroupMarker @ 015096b4

void _WCRSideloadShareFixClearGroupMarker(ulong param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong local_138;
  ulong local_130;
  long local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  long local_c8;
  undefined *local_c0;
  undefined4 local_b4;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  FUN_01509968();
  _objc_retainAutoreleasedReturnValue();
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  if (param_1 == 0) {
    local_b4 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar1;
    _memset(auStack_108,0,0x40);
    uVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_objectEnumerator_026a8228);
    _objc_retainAutoreleasedReturnValue();
    local_130 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_130 != 0) {
      lVar4 = *local_f8;
      local_138 = 0;
      do {
        do {
          if (*local_f8 - lVar4 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar4,uVar2);
          }
          lVar5 = *(long *)(local_100 + local_138 * 8);
          local_c8 = lVar5;
          FUN_01509a84();
          _objc_retainAutoreleasedReturnValue();
          local_110 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_path_0269d4d8);
          _objc_retainAutoreleasedReturnValue();
          lVar3 = lVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar5);
          if (lVar3 != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c0,PTR_s_removeItemAtURL_error__026a7188,local_110,0);
          }
          _objc_storeStrong(&local_110,0);
          local_138 = local_138 + 1;
        } while (local_138 < local_130);
        local_130 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10
                  );
        local_138 = 0;
      } while (local_130 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_storeStrong(&local_c0,0);
    local_b4 = 0;
  }
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

