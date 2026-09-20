// FUN_019cf800 @ 019cf800

byte FUN_019cf800(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong local_170;
  ulong local_168;
  long local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  long local_f0;
  byte local_e1;
  undefined *local_e0;
  char *local_d8;
  char *local_d0;
  undefined4 local_c4;
  ulong local_c0;
  long local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  lVar4 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  if ((lVar4 == 0) ||
     (uVar1 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0),
     uVar1 == 0)) {
    local_a9 = 0;
    local_c4 = 1;
  }
  else {
    pcVar2 = "ZipArchive";
    _objc_getClass();
    local_d0 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_a9 = 0;
      local_c4 = 1;
    }
    else {
      _objc_alloc_init();
      local_d8 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_CreateZipFile2__026acf60);
      if (((((ulong)pcVar2 & 1) == 0) ||
          (pcVar2 = local_d8,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_respondsToSelector__026ca818,
                     PTR_s_addFileToZip_newname__026acf68), ((ulong)pcVar2 & 1) == 0)) ||
         (pcVar2 = local_d8,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_d8,PTR_s_respondsToSelector__026ca818,PTR_s_CloseZipFile2_026acf70),
         ((ulong)pcVar2 & 1) == 0)) {
        local_a9 = 0;
        local_c4 = 1;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        local_e0 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_removeItemAtPath_error__0269f910,local_b8,0);
        pcVar2 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_CreateZipFile2__026acf60,local_b8);
        if (((ulong)pcVar2 & 1) == 0) {
          local_a9 = 0;
        }
        else {
          local_e1 = 0;
          _memset(auStack_130,0,0x40);
          uVar1 = local_c0;
          (*(code *)PTR__objc_retain_02578638)();
          local_168 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          if (local_168 != 0) {
            lVar4 = *local_120;
            local_170 = 0;
            do {
              do {
                if (*local_120 - lVar4 != 0) {
                  _objc_enumerationMutation(*local_120 - lVar4,uVar1);
                }
                lVar5 = *(long *)(local_128 + local_170 * 8);
                local_f0 = lVar5;
                (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
                if ((lVar5 != 0) &&
                   (puVar3 = local_e0,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_e0,PTR_s_fileExistsAtPath__026ca630,local_f0),
                   ((ulong)puVar3 & 1) != 0)) {
                  lVar5 = local_f0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_lastPathComponent_026ca780);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar2 = local_d8;
                  local_138 = lVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_d8,PTR_s_addFileToZip_newname__026acf68,local_f0,lVar5);
                  if (((ulong)pcVar2 & 1) != 0) {
                    local_e1 = 1;
                  }
                  _objc_storeStrong(&local_138,0);
                }
                local_170 = local_170 + 1;
              } while (local_170 < local_168);
              local_168 = uVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,
                         auStack_a8,0x10);
              local_170 = 0;
            } while (local_168 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar1);
          if ((local_e1 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_removeItemAtPath_error__0269f910,local_b8,0);
            local_a9 = 0;
          }
          else {
            pcVar2 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_CloseZipFile2_026acf70);
            local_a9 = (byte)pcVar2 & 1;
          }
        }
        local_c4 = 1;
        _objc_storeStrong(&local_e0,0);
      }
      _objc_storeStrong(&local_d8,0);
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

