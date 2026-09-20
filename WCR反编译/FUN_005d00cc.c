// FUN_005d00cc @ 005d00cc

void FUN_005d00cc(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong local_148;
  ulong local_140;
  long local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  long local_d0;
  undefined4 local_c8;
  ulong *local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = &local_b0;
  local_b0 = 0;
  _objc_storeStrong(puVar1,param_1);
  FUN_005a8d0c();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar1;
  if (puVar1 == (ulong *)0x0) {
    local_c8 = 1;
  }
  else {
    _memset(auStack_110,0,0x40);
    uVar2 = local_b0;
    FUN_005a69dc();
    _objc_retainAutoreleasedReturnValue();
    local_140 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_140 != 0) {
      lVar4 = *local_100;
      local_148 = 0;
      do {
        do {
          if (*local_100 - lVar4 != 0) {
            _objc_enumerationMutation(*local_100 - lVar4,uVar2);
          }
          local_d0 = *(long *)(local_108 + local_148 * 8);
          puVar1 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_respondsToSelector__026ca818,
                     PTR_s_forceDownloadMedia_downloadType__026a5ba8);
          if (((ulong)puVar1 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_forceDownloadMedia_downloadType__026a5ba8,local_d0,2);
          }
          lVar3 = local_d0;
          FUN_005c7774();
          _objc_retainAutoreleasedReturnValue();
          local_118 = lVar3;
          if ((lVar3 != 0) &&
             (puVar1 = local_b8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_b8,PTR_s_respondsToSelector__026ca818,
                        PTR_s_startDownloadSightMedia_Download_026a5648), ((ulong)puVar1 & 1) != 0))
          {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_startDownloadSightMedia_Download_026a5648,local_118,0x22);
          }
          _objc_storeStrong(&local_118,0);
          local_148 = local_148 + 1;
        } while (local_148 < local_140);
        local_140 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_148 = 0;
      } while (local_140 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_c8 = 0;
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

