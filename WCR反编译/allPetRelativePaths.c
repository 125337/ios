// allPetRelativePaths @ 01dfd728

/* Function Stack Size: 0x10 bytes */

ID WCRefineSuperFloatBallWarehouseViewController::allPetRelativePaths(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_168;
  undefined *local_160;
  undefined *local_138;
  undefined *local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8;
  undefined *local_d0;
  ID local_c8;
  undefined *local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_b0;
  local_c0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_petsDirectory_026c5bc0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_c0;
  local_c8 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,PTR_s_contentsOfDirectoryAtPath_error__0269e088,IVar2,0);
  _objc_retainAutoreleasedReturnValue();
  local_138 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_138 = *(undefined **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d0 = local_138;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar1;
  _memset(auStack_120,0,0x40);
  puVar1 = local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_160 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_160 != (undefined *)0x0) {
    lVar4 = *local_110;
    local_168 = (undefined *)0x0;
    do {
      do {
        if (*local_110 - lVar4 != 0) {
          _objc_enumerationMutation(*local_110 - lVar4,puVar1);
        }
        uVar5 = *(ulong *)(local_118 + (long)local_168 * 8);
        local_e0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_hasPrefix__0269d320,&::cf__);
        if ((uVar5 & 1) == 0) {
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______)
          ;
          _objc_retainAutoreleasedReturnValue();
          IVar2 = local_b0;
          local_128 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isPetRel__026c5bc8,puVar3);
          if ((IVar2 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addObject__0269d180,local_128);
          }
          _objc_storeStrong(&local_128,0);
        }
        local_168 = local_168 + 1;
      } while (local_168 < local_160);
      local_160 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10)
      ;
      local_168 = (undefined *)0x0;
    } while (local_160 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_d8,PTR_s_sortUsingSelector__0269e0a0,
             PTR_s_localizedCaseInsensitiveCompare__026b05e0);
  puVar1 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_copy_0269d150);
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

