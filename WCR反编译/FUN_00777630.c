// FUN_00777630 @ 00777630

void FUN_00777630(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  uint local_1c0;
  undefined *local_188;
  undefined *local_180;
  undefined *local_150;
  ulong local_148 [3];
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  uint local_e4;
  ulong local_e0;
  ulong local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_1);
  if (local_e0 == 0) {
    local_d8 = 0;
    local_e4 = 1;
  }
  else {
    _memset(auStack_130,0,0x40);
    local_d0 = &cf_m_nsFilePath;
    local_c8 = &cf_m_nsMsgFilePath;
    local_c0 = &cf_m_nsPath;
    local_b8 = &cf_filePath;
    local_b0 = &cf_path;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_d0,5
              );
    _objc_retainAutoreleasedReturnValue();
    local_180 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_180 != (undefined *)0x0) {
      lVar5 = *local_120;
      local_188 = (undefined *)0x0;
      do {
        do {
          if (*local_120 - lVar5 != 0) {
            _objc_enumerationMutation(*local_120 - lVar5,puVar2);
          }
          local_f0 = *(undefined8 *)(local_128 + (long)local_188 * 8);
          uVar3 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_valueForKey__0269d128,local_f0);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = false;
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_148[0] = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
          local_1c0 = 0;
          if ((uVar3 & 1) != 0) {
            uVar3 = local_148[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_148[0],PTR_s_length_0269cca0);
            local_1c0 = 0;
            if (uVar3 != 0) {
              local_150 = PTR__OBJC_CLASS___NSFileManager_026ce158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
              _objc_retainAutoreleasedReturnValue();
              bVar1 = true;
              puVar4 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_1c0 = (uint)puVar4;
            }
          }
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_150);
          }
          uVar3 = local_148[0];
          bVar1 = (local_1c0 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_d8 = uVar3;
          }
          local_e4 = (uint)bVar1;
          _objc_storeStrong(local_148,0);
          if (local_e4 != 0) goto LAB_00777a40;
          local_188 = local_188 + 1;
        } while (local_188 < local_180);
        local_180 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                   0x10);
        local_188 = (undefined *)0x0;
      } while (local_180 != (undefined *)0x0);
    }
    local_e4 = 0;
LAB_00777a40:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_e4 == 0) {
      local_d8 = 0;
      local_e4 = 1;
    }
  }
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

