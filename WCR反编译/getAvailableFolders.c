// getAvailableFolders @ 01f2556c

/* Function Stack Size: 0x10 bytes */

ID WCRefineTouchTrailViewController::getAvailableFolders(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_1c8;
  undefined *local_1c0;
  byte local_171;
  undefined8 local_170;
  undefined1 auStack_168 [8];
  long local_160;
  long *local_158;
  undefined8 local_128;
  undefined *local_120;
  undefined8 local_118;
  undefined *local_110;
  long local_108;
  undefined4 local_fc;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  SEL local_d8;
  ID local_d0;
  undefined *local_c8;
  cfstringStruct *local_c0;
  undefined1 auStack_b8 [128];
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  uVar1 = 9;
  local_d8 = param_2;
  local_d0 = param_1;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_e0 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar2 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e0,PTR_s_stringByAppendingPathComponent__026cab30,&cf_WCRefine);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_stringByAppendingPathComponent__026cab30,&cf_xdh);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_f0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_f8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_fileExistsAtPath__026ca630,local_f0);
  if (((ulong)puVar3 & 1) == 0) {
    local_30 = &::cf__;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1
              );
    _objc_retainAutoreleasedReturnValue();
    local_fc = 1;
    local_c8 = puVar3;
  }
  else {
    local_108 = 0;
    local_118 = 0;
    puVar3 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f8,PTR_s_contentsOfDirectoryAtPath_error__0269e088,local_f0,&local_118);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_108,local_118);
    local_110 = puVar3;
    if ((local_108 == 0) &&
       ((*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_count_0269cfe0),
       puVar3 != (undefined *)0x0)) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_120 = puVar3;
      _memset(auStack_168,0,0x40);
      puVar3 = local_110;
      (*(code *)PTR__objc_retain_02578638)();
      local_1c0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_b8,0x10)
      ;
      if (local_1c0 != (undefined *)0x0) {
        lVar5 = *local_158;
        local_1c8 = (undefined *)0x0;
        do {
          do {
            if (*local_158 - lVar5 != 0) {
              _objc_enumerationMutation(*local_158 - lVar5,puVar3);
            }
            local_128 = *(undefined8 *)(local_160 + (long)local_1c8 * 8);
            uVar2 = local_f0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_f0,PTR_s_stringByAppendingPathComponent__026cab30,local_128);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = local_f8;
            local_170 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_f8,PTR_s_fileExistsAtPath_isDirectory__026ca638,uVar2,&local_171);
            if ((((ulong)puVar4 & 1) != 0) && ((local_171 & 1) != 0)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_addObject__0269d180,local_128);
            }
            _objc_storeStrong(&local_170,0);
            local_1c8 = local_1c8 + 1;
          } while (local_1c8 < local_1c0);
          local_1c0 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_168,auStack_b8,
                     0x10);
          local_1c8 = (undefined *)0x0;
        } while (local_1c0 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_count_0269cfe0);
      local_c8 = local_120;
      if (puVar3 == (undefined *)0x0) {
        local_c0 = &::cf__;
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_c0,1);
        _objc_retainAutoreleasedReturnValue();
        local_c8 = puVar3;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
      }
      local_fc = 1;
      _objc_storeStrong(&local_120,0);
    }
    else {
      local_38 = &::cf__;
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      local_fc = 1;
      local_c8 = puVar3;
    }
    _objc_storeStrong(&local_110);
    _objc_storeStrong(&local_108,0);
  }
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_c8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

