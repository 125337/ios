// FUN_016c9208 @ 016c9208

void FUN_016c9208(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined8 local_138;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  long local_c0;
  undefined *local_b8;
  undefined1 auStack_b0 [128];
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_1);
  lVar6 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  if (lVar6 == 0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = 1;
    local_b8 = puVar1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_d8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_c0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = *(undefined8 *)PTR__NSURLIsDirectoryKey_02578260;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1
              );
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_enumeratorAtURL_includingPropert_026b0eb8,puVar1,puVar3,0,0);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _memset(auStack_128,0,0x40);
    puVar1 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_b0,0x10);
    if (local_1a8 != (undefined *)0x0) {
      lVar6 = *local_118;
      local_1b0 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar6 != 0) {
            _objc_enumerationMutation(*local_118 - lVar6,puVar1);
          }
          uVar7 = *(ulong *)(local_120 + (long)local_1b0 * 8);
          local_e8 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_path_0269d4d8);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar7);
          if ((uVar5 & 1) == 0) {
            local_130 = 0;
            local_138 = 0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e8,PTR_s_getResourceValue_forKey_error__026b2d98,&local_138,
                       *(undefined8 *)PTR__NSURLIsDirectoryKey_02578260,0);
            _objc_storeStrong(&local_130,local_138);
            uVar5 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_boolValue_026ca540);
            if ((uVar5 & 1) == 0) {
              uVar5 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_pathExtension_0269e090);
              _objc_retainAutoreleasedReturnValue();
              uVar7 = uVar5;
              FUN_016bdfb0();
              (*(code *)PTR__objc_release_02578630)(uVar5);
              puVar2 = local_d8;
              if ((uVar7 & 1) != 0) {
                uVar5 = local_e8;
                (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_path_0269d4d8);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
                (*(code *)PTR__objc_release_02578630)(uVar5);
              }
              local_d0 = 0;
            }
            else {
              local_d0 = 3;
            }
            _objc_storeStrong(&local_130,0);
          }
          local_1b0 = local_1b0 + 1;
        } while (local_1b0 < local_1a8);
        local_1a8 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_b0,
                   0x10);
        local_1b0 = (undefined *)0x0;
      } while (local_1a8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_copy_0269d150);
    local_d0 = 1;
    local_b8 = puVar1;
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

