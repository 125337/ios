// FUN_00274abc @ 00274abc

void FUN_00274abc(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *local_1b8;
  undefined *local_1b0;
  ulong local_160;
  ulong local_158;
  undefined8 local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0 [3];
  uint local_d4;
  ulong local_d0;
  ulong local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_1);
  if (local_d0 == 0) {
    local_c8 = 0;
    local_d4 = 1;
    goto LAB_00274f74;
  }
  uVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d0,PTR_s_respondsToSelector__026ca818,PTR_s_mediaPath_026a1650);
  if ((uVar1 & 1) != 0) {
    uVar1 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_mediaPath_026a1650);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_d0;
    local_f0[0] = uVar1;
    FUN_00278ee8(local_d0,uVar1);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = uVar2;
    if (uVar2 != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = uVar2;
    }
    local_d4 = (uint)(uVar2 != 0);
    _objc_storeStrong(&local_f8);
    _objc_storeStrong(local_f0,0);
    if (local_d4 != 0) goto LAB_00274f74;
  }
  uVar1 = local_d0;
  FUN_0027b0fc();
  _objc_retainAutoreleasedReturnValue();
  local_100 = uVar1;
  if (uVar1 == 0) {
LAB_00274f44:
    local_c8 = 0;
    local_d4 = 1;
  }
  else {
    _memset(auStack_148,0,0x40);
    local_c0 = &cf_getFormatVideoPath;
    local_b8 = &cf_getTempVideoPath;
    local_b0 = &cf_currentVideoPath;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3
              );
    _objc_retainAutoreleasedReturnValue();
    local_1b0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1b0 != (undefined *)0x0) {
      lVar4 = *local_138;
      local_1b8 = (undefined *)0x0;
      do {
        do {
          if (*local_138 - lVar4 != 0) {
            _objc_enumerationMutation(*local_138 - lVar4,puVar3);
          }
          uVar5 = *(undefined8 *)(local_140 + (long)local_1b8 * 8);
          local_108 = uVar5;
          _NSSelectorFromString();
          uVar1 = local_100;
          local_150 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_respondsToSelector__026ca818,uVar5);
          if ((uVar1 & 1) != 0) {
            uVar1 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)(local_100,local_150);
            _objc_retainAutoreleasedReturnValue();
            uVar2 = local_d0;
            local_158 = uVar1;
            FUN_00278ee8(local_d0,uVar1);
            _objc_retainAutoreleasedReturnValue();
            local_160 = uVar2;
            if (uVar2 != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_c8 = uVar2;
            }
            local_d4 = (uint)(uVar2 != 0);
            _objc_storeStrong(&local_160);
            _objc_storeStrong(&local_158,0);
            if (local_d4 != 0) goto LAB_00274f0c;
          }
          local_1b8 = local_1b8 + 1;
        } while (local_1b8 < local_1b0);
        local_1b0 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,
                   0x10);
        local_1b8 = (undefined *)0x0;
      } while (local_1b0 != (undefined *)0x0);
    }
    local_d4 = 0;
LAB_00274f0c:
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_d4 == 0) goto LAB_00274f44;
  }
  _objc_storeStrong(&local_100,0);
LAB_00274f74:
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

