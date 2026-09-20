// copyPath:toPath:token: @ 01994118

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

bool WCRefineFileManagerViewController::copyPath_toPath_token_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *local_198;
  undefined *local_190;
  byte local_151;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  undefined *local_f8;
  byte local_e9;
  undefined *local_e8;
  int local_dc;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_5);
  uVar1 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_isCancelled_026a1c20);
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_e9 = 0;
    local_e8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_c8,&local_e9);
    if (((ulong)puVar2 & 1) == 0) {
      local_a9 = 0;
      local_dc = 1;
    }
    else if ((local_e9 & 1) == 0) {
      puVar2 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_copyItemAtPath_toPath_error__026a1758,local_c8,local_d0,0);
      local_a9 = (byte)puVar2 & 1;
      local_dc = 1;
    }
    else {
      puVar2 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_e8,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_d0,1,0);
      if (((ulong)puVar2 & 1) == 0) {
        local_a9 = 0;
        local_dc = 1;
      }
      else {
        puVar2 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_enumeratorAtPath__026ad0c8,local_c8);
        _objc_retainAutoreleasedReturnValue();
        local_f8 = puVar2;
        _memset(auStack_140,0,0x40);
        puVar2 = local_f8;
        (*(code *)PTR__objc_retain_02578638)();
        local_190 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                   0x10);
        if (local_190 != (undefined *)0x0) {
          lVar6 = *local_130;
          local_198 = (undefined *)0x0;
          do {
            do {
              if (*local_130 - lVar6 != 0) {
                _objc_enumerationMutation(*local_130 - lVar6,puVar2);
              }
              local_100 = *(undefined8 *)(local_138 + (long)local_198 * 8);
              uVar1 = local_d8;
              (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_isCancelled_026a1c20);
              if ((uVar1 & 1) != 0) {
                local_a9 = 0;
                local_dc = 1;
                goto LAB_019945c0;
              }
              uVar3 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_stringByAppendingPathComponent__026cab30,local_100);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = local_d0;
              local_148 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d0,PTR_s_stringByAppendingPathComponent__026cab30,local_100);
              _objc_retainAutoreleasedReturnValue();
              local_151 = 0;
              puVar5 = local_e8;
              local_150 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e8,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_148,&local_151)
              ;
              if (((ulong)puVar5 & 1) == 0) {
                local_dc = 3;
              }
              else {
                if ((local_151 & 1) == 0) {
                  puVar5 = local_e8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_e8,PTR_s_copyItemAtPath_toPath_error__026a1758,local_148,
                             local_150,0);
                  if (((ulong)puVar5 & 1) == 0) {
                    local_a9 = 0;
                    local_dc = 1;
                    goto LAB_0199451c;
                  }
                }
                else {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_e8,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_150,1,0)
                  ;
                }
                local_dc = 0;
              }
LAB_0199451c:
              _objc_storeStrong(&local_150);
              _objc_storeStrong(&local_148,0);
              if ((local_dc != 0) && (local_dc != 3)) goto LAB_019945c0;
              local_198 = local_198 + 1;
            } while (local_198 < local_190);
            local_190 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8
                       ,0x10);
            local_198 = (undefined *)0x0;
          } while (local_190 != (undefined *)0x0);
        }
        local_dc = 0;
LAB_019945c0:
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (local_dc == 0) {
          uVar1 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_isCancelled_026a1c20);
          local_a9 = ((byte)uVar1 ^ 1) & 1;
          local_dc = 1;
        }
        _objc_storeStrong(&local_f8,0);
      }
    }
    _objc_storeStrong(&local_e8,0);
  }
  else {
    local_a9 = 0;
    local_dc = 1;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

