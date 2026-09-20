// wcr_latestScreenRecordingAssetIdsWithLimit: @ 006ed7dc

/* Function Stack Size: 0x18 bytes */

ID WCRefineScreenRecordingFrameProcessor::wcr_latestScreenRecordingAssetIdsWithLimit_
             (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *local_1a0;
  undefined *local_198;
  unsigned_long_long local_168;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  long local_100;
  undefined *local_f8;
  undefined *local_f0 [3];
  undefined *local_d8;
  unsigned_long_long local_d0;
  SEL local_c8;
  ID local_c0;
  undefined *local_b8;
  undefined1 auStack_b0 [128];
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = param_3;
  local_c8 = param_2;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_hasPhotoReadWriteAuthorizati_026a6f18);
  if ((param_1 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSSet_026ce150;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = puVar1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___PHFetchOptions_026ce868;
    _objc_alloc_init();
    puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_026ce870;
    local_d8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSSortDescriptor_026ce870,
               PTR_s_sortDescriptorWithKey_ascending__026a6f68,&cf_creationDate,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setSortDescriptors__026a6f70);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_d0 == 0) {
      local_168 = 1;
    }
    else {
      local_168 = local_d0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setFetchLimit__026a6f78,local_168);
    puVar1 = PTR__OBJC_CLASS___PHAsset_026ce530;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___PHAsset_026ce530,PTR_s_fetchAssetsWithMediaType_options_026a6f80,2,
               local_d8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
    local_f0[0] = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = puVar2;
    _memset(auStack_140,0,0x40);
    puVar1 = local_f0[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_198 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_b0,0x10);
    if (local_198 != (undefined *)0x0) {
      lVar6 = *local_130;
      local_1a0 = (undefined *)0x0;
      do {
        do {
          if (*local_130 - lVar6 != 0) {
            _objc_enumerationMutation(*local_130 - lVar6,puVar1);
          }
          local_100 = *(long *)(local_138 + (long)local_1a0 * 8);
          IVar3 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_wcr_isScreenRecordingAsset__026a6fa8,local_100);
          if ((IVar3 & 1) != 0) {
            lVar4 = local_100;
            (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_localIdentifier_026a6f90);
            _objc_retainAutoreleasedReturnValue();
            lVar5 = lVar4;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(lVar4);
            puVar2 = local_f8;
            if (lVar5 != 0) {
              lVar4 = local_100;
              (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_localIdentifier_026a6f90);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(lVar4);
            }
          }
          local_1a0 = local_1a0 + 1;
        } while (local_1a0 < local_198);
        local_198 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_b0,
                   0x10);
        local_1a0 = (undefined *)0x0;
      } while (local_198 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_f8;
    (*(code *)PTR__objc_retain_02578638)();
    local_b8 = puVar1;
    _objc_storeStrong(&local_f8);
    _objc_storeStrong(local_f0,0);
    _objc_storeStrong(&local_d8,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_b8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

