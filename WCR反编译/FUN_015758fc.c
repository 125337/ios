// FUN_015758fc @ 015758fc

void FUN_015758fc(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong local_138;
  ulong local_130;
  long local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  long local_c8;
  undefined4 local_bc;
  ulong *local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = &local_b0;
  local_b0 = 0;
  _objc_storeStrong(puVar1,param_1);
  FUN_015770bc();
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar1;
  if (puVar1 == (ulong *)0x0) {
    local_bc = 1;
  }
  else {
    _memset(auStack_108,0,0x40);
    uVar2 = local_b0;
    FUN_01574f3c();
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
          local_c8 = *(long *)(local_100 + local_138 * 8);
          puVar1 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_respondsToSelector__026ca818,
                     PTR_s_forceDownloadMedia_downloadType__026a5ba8);
          if (((ulong)puVar1 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_forceDownloadMedia_downloadType__026a5ba8,local_c8,2);
          }
          lVar3 = local_c8;
          FUN_015768d4();
          _objc_retainAutoreleasedReturnValue();
          local_110 = lVar3;
          if ((lVar3 != 0) &&
             (puVar1 = local_b8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_b8,PTR_s_respondsToSelector__026ca818,
                        PTR_s_startDownloadSightMedia_Download_026a5648), ((ulong)puVar1 & 1) != 0))
          {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b8,PTR_s_startDownloadSightMedia_Download_026a5648,local_110,0x22);
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
    local_bc = 0;
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

