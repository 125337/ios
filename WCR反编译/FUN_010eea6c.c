// FUN_010eea6c @ 010eea6c

long FUN_010eea6c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_148;
  undefined *local_140;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  undefined8 local_d8;
  long local_d0;
  cfstringStruct *local_c8;
  undefined4 local_bc;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  if (local_b8 == 0) {
    local_b0 = 0;
  }
  else {
    pcVar1 = &cf_loadColorFromXMLByPath_;
    _NSSelectorFromString();
    uVar2 = local_b8;
    local_c8 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_respondsToSelector__026ca818,pcVar1);
    if ((uVar2 & 1) == 0) {
      local_b0 = 0;
    }
    else {
      local_d0 = 0;
      _memset(auStack_118,0,0x40);
      puVar3 = PTR_WCRefineWechatThemeStore_026ce6d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineWechatThemeStore_026ce6d0,PTR_s_sharedStore_026a3d08);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_140 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10)
      ;
      if (local_140 != (undefined *)0x0) {
        lVar5 = *local_108;
        local_148 = (undefined *)0x0;
        do {
          do {
            if (*local_108 - lVar5 != 0) {
              _objc_enumerationMutation(*local_108 - lVar5,puVar4);
            }
            local_d8 = *(undefined8 *)(local_110 + (long)local_148 * 8);
            uVar2 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,local_c8,local_d8);
            if ((uVar2 & 1) != 0) {
              local_d0 = local_d0 + 1;
            }
            local_148 = local_148 + 1;
          } while (local_148 < local_140);
          local_140 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                     0x10);
          local_148 = (undefined *)0x0;
        } while (local_140 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_b0 = local_d0;
    }
  }
  local_bc = 1;
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

