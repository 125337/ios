// preferredOriginalResourceForAsset: @ 019a0c88

/* Function Stack Size: 0x18 bytes */

ID WCRefineFileManagerViewController::preferredOriginalResourceForAsset_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  long local_c8;
  SEL local_c0;
  ID local_b8;
  undefined1 *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  puVar3 = PTR__OBJC_CLASS___PHAssetResource_026cf0d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___PHAssetResource_026cf0d0,PTR_s_assetResourcesForAsset__026b73e8,
             local_c8);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_firstObject_0269d1f8);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar3;
  _memset(auStack_120,0,0x40);
  puVar2 = local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_148 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_148 != (undefined1 *)0x0) {
    lVar6 = *local_110;
    local_150 = (undefined1 *)0x0;
    do {
      do {
        if (*local_110 - lVar6 != 0) {
          _objc_enumerationMutation(*local_110 - lVar6,puVar2);
        }
        local_e0 = *(undefined1 **)(local_118 + (long)local_150 * 8);
        lVar4 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_mediaType_026a21f8);
        if ((lVar4 == 2) &&
           ((puVar5 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_type_0269e6f8),
            puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 2) ||
            (puVar5 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_type_0269e6f8),
            puVar5 == (undefined1 *)((long)&MACH_HEADER.cputype + 2))))) {
          puVar5 = local_e0;
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = puVar5;
          bVar1 = true;
          goto LAB_019a0f60;
        }
        lVar4 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_mediaType_026a21f8);
        if ((lVar4 == 1) &&
           ((puVar5 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_type_0269e6f8),
            puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 1) ||
            (puVar5 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_type_0269e6f8),
            puVar5 == (undefined1 *)((long)&MACH_HEADER.cputype + 1))))) {
          puVar5 = local_e0;
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = puVar5;
          bVar1 = true;
          goto LAB_019a0f60;
        }
        local_150 = local_150 + 1;
      } while (local_150 < local_148);
      local_148 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10)
      ;
      local_150 = (undefined1 *)0x0;
    } while (local_148 != (undefined1 *)0x0);
  }
  bVar1 = false;
LAB_019a0f60:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_d8;
  if (!bVar1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar2;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

