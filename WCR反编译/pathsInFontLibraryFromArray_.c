// pathsInFontLibraryFromArray: @ 019eae94

/* Function Stack Size: 0x18 bytes */

ID WCRefineFontConvertViewController::pathsInFontLibraryFromArray_
             (ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  ulong local_e8;
  undefined *local_e0;
  ID local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  IVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_fontBasePath_026baec0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (IVar2 == 0) {
    puVar3 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_cc = 1;
    local_b0 = puVar3;
  }
  else {
    IVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_fontBasePath_026baec0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar3;
    _memset(auStack_128,0,0x40);
    IVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_validPathsFromArray__026bb1a0,local_c8);
    _objc_retainAutoreleasedReturnValue();
    local_168 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_168 != 0) {
      lVar4 = *local_118;
      local_170 = 0;
      do {
        do {
          if (*local_118 - lVar4 != 0) {
            _objc_enumerationMutation(*local_118 - lVar4,IVar1);
          }
          uVar5 = *(ulong *)(local_120 + local_170 * 8);
          local_e8 = uVar5;
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_hasPrefix__0269d320,local_d8);
          if ((uVar5 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_e8);
          }
          local_170 = local_170 + 1;
        } while (local_170 < local_168);
        local_168 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10
                  );
        local_170 = 0;
      } while (local_168 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar3 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_copy_0269d150);
    local_cc = 1;
    local_b0 = puVar3;
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

