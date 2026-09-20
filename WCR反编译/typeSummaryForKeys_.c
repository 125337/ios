// typeSummaryForKeys: @ 0109ad74

/* Function Stack Size: 0x18 bytes */

ID WCRefineMessageBlockSupport::typeSummaryForKeys_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  cfstringStruct *local_e0;
  undefined4 local_d4;
  ID local_d0;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  IVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_allTypeKeys_026ae488);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_c8;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_d0 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) != 0) &&
     (uVar3 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0),
     uVar3 != 0)) {
    uVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
    IVar1 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
    if (uVar3 < IVar1) {
      pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = pcVar4;
      _memset(auStack_128,0,0x40);
      uVar3 = local_c8;
      (*(code *)PTR__objc_retain_02578638)();
      local_168 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
      if (local_168 != 0) {
        lVar5 = *local_118;
        local_170 = 0;
        do {
          do {
            if (*local_118 - lVar5 != 0) {
              _objc_enumerationMutation(*local_118 - lVar5,uVar3);
            }
            pcVar4 = local_e0;
            local_e8 = *(undefined8 *)(local_120 + local_170 * 8);
            IVar1 = local_b8;
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_titleForTypeKey__026a41e8,local_e8)
            ;
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(IVar1);
            local_170 = local_170 + 1;
          } while (local_170 < local_168);
          local_168 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          local_170 = 0;
        } while (local_168 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      pcVar4 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
      local_b0 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      if ((cfstringStruct *)((long)&MACH_HEADER.magic + 3) < pcVar4) {
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        pcVar4 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e0,PTR_s_componentsJoinedByString__0269d140,&cf__);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = pcVar4;
      }
      local_d4 = 1;
      _objc_storeStrong(&local_e0,0);
      goto LAB_0109b13c;
    }
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = &cf_hQ__W;
  local_d4 = 1;
LAB_0109b13c:
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

