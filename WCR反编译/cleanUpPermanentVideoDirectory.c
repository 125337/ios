// cleanUpPermanentVideoDirectory @ 010b38b8

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsDraftManager::cleanUpPermanentVideoDirectory(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  undefined *local_170;
  undefined *local_168;
  ID local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined *local_d8;
  long local_d0;
  undefined *local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_permanentVideoDirectory_026ae5f0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = 0;
  local_e0 = 0;
  local_c8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_c0,&local_e0);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_d0,local_e0);
  local_d8 = puVar1;
  if (local_d0 == 0) {
    _memset(auStack_130,0,0x40);
    puVar1 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_168 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
    if (local_168 != (undefined *)0x0) {
      lVar3 = *local_120;
      local_170 = (undefined *)0x0;
      do {
        do {
          if (*local_120 - lVar3 != 0) {
            _objc_enumerationMutation(*local_120 - lVar3,puVar1);
          }
          local_f0 = *(undefined8 *)(local_128 + (long)local_170 * 8);
          IVar2 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_stringByAppendingPathComponent__026cab30,local_f0);
          _objc_retainAutoreleasedReturnValue();
          local_138 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_removeItemAtPath_error__0269f910,IVar2);
          _objc_storeStrong(&local_138,0);
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                   0x10);
        local_170 = (undefined *)0x0;
      } while (local_168 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_e4 = 0;
  }
  else {
    local_e4 = 1;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

