// mergeDirectory:intoDirectory:token: @ 0199c024

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

bool WCRefineFileManagerViewController::mergeDirectory_intoDirectory_token_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  long lVar6;
  undefined *local_198;
  undefined *local_190;
  undefined *local_178;
  byte local_142;
  byte local_141;
  undefined8 local_140;
  undefined8 local_138;
  int local_12c;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  undefined *local_e0;
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
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_createDirectoryAtPath_withInterm_0269e230,local_d0,1,0);
  _memset(auStack_128,0,0x40);
  puVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e0,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_c8,0);
  _objc_retainAutoreleasedReturnValue();
  local_178 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_178 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_190 = local_178;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_178,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
  if (local_190 != (undefined *)0x0) {
    lVar6 = *local_118;
    local_198 = (undefined *)0x0;
    do {
      do {
        if (*local_118 - lVar6 != 0) {
          _objc_enumerationMutation(*local_118 - lVar6,local_178);
        }
        local_e8 = *(undefined8 *)(local_120 + (long)local_198 * 8);
        uVar2 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_isCancelled_026a1c20);
        if ((uVar2 & 1) != 0) {
          local_a9 = 0;
          local_12c = 1;
          goto LAB_0199c498;
        }
        uVar3 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_stringByAppendingPathComponent__026cab30,local_e8);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_d0;
        local_138 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d0,PTR_s_stringByAppendingPathComponent__026cab30,local_e8);
        _objc_retainAutoreleasedReturnValue();
        local_141 = 0;
        local_142 = 0;
        local_140 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_138,&local_141);
        puVar1 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_fileExistsAtPath_isDirectory__026ca638,local_140,&local_142);
        if ((((local_141 & 1) == 0) || (((ulong)puVar1 & 1) == 0)) || ((local_142 & 1) == 0)) {
          if (((ulong)puVar1 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_removeItemAtPath_error__0269f910,local_140,0);
          }
          puVar1 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_moveItemAtPath_toPath_error__0269f940,local_138,local_140,0);
          if (((ulong)puVar1 & 1) != 0) goto LAB_0199c400;
          local_a9 = 0;
          local_12c = 1;
        }
        else {
          IVar5 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_b8,PTR_s_mergeDirectory_intoDirectory_tok_026ba680,local_138,local_140,
                     local_d8);
          if ((IVar5 & 1) == 0) {
            local_a9 = 0;
            local_12c = 1;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_removeItemAtPath_error__0269f910,local_138,0);
LAB_0199c400:
            local_12c = 0;
          }
        }
        _objc_storeStrong(&local_140);
        _objc_storeStrong(&local_138,0);
        if (local_12c != 0) goto LAB_0199c498;
        local_198 = local_198 + 1;
      } while (local_198 < local_190);
      local_190 = local_178;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_178,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                 0x10);
      local_198 = (undefined *)0x0;
    } while (local_190 != (undefined *)0x0);
  }
  local_12c = 0;
LAB_0199c498:
  (*(code *)PTR__objc_release_02578630)(local_178);
  if (local_12c == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_removeItemAtPath_error__0269f910,local_c8,0);
    uVar2 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_isCancelled_026a1c20);
    local_a9 = ((byte)uVar2 ^ 1) & 1;
    local_12c = 1;
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

