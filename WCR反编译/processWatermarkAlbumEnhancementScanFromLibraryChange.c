// processWatermarkAlbumEnhancementScanFromLibraryChange @ 007275cc

/* WARNING: Removing unreachable block (ram,0x00727784) */
/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineScreenshotWatermarkProcessor::processWatermarkAlbumEnhancementScanFromLibraryChange
          (WCRefineScreenshotWatermarkProcessor *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  double in_d0;
  undefined *local_240;
  undefined *local_238;
  undefined *local_208;
  undefined *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  code *local_168;
  undefined *local_160;
  long local_158;
  long local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  long local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined1 *local_e0;
  int local_d8;
  undefined *local_c8;
  SEL local_c0;
  ID local_b8;
  undefined1 auStack_b0 [128];
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = param_2;
  local_b8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_resetWatermarkAlbumEnhanceme_026a7890);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_gestureScreenshotPostProcessOnly_026a1f28);
  if (((((ulong)puVar2 & 1) != 0) ||
      (puVar2 = local_c8,
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_screenshotWatermarkEnabled_026a1ee0),
      ((ulong)puVar2 & 1) == 0)) ||
     (puVar2 = local_c8,
     (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_screenshotWatermarkAlbumEnhancem_026a76c8)
     , ((ulong)puVar2 & 1) == 0)) {
    local_d8 = 1;
    goto LAB_0072802c;
  }
  IVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_wcr_hasAnyScreenshotWatermarkLay_026a79e0);
  if ((IVar3 & 1) == 0) {
    local_d8 = 1;
    goto LAB_0072802c;
  }
  IVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_wcr_shouldDeferWatermarkAlbumSca_026a79e8);
  if ((IVar3 & 1) != 0) {
    local_d8 = 1;
    goto LAB_0072802c;
  }
  puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,
             PTR_s_authorizationStatusForAccessLeve_026a1760,2);
  local_e0 = puVar2;
  if ((puVar2 != (undefined1 *)((long)&MACH_HEADER.magic + 3)) &&
     ((dword *)puVar2 != &MACH_HEADER.cputype)) {
    local_d8 = 1;
    goto LAB_0072802c;
  }
  puVar2 = PTR__OBJC_CLASS___PHFetchOptions_026ce868;
  _objc_alloc_init();
  puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_026ce870;
  local_e8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSSortDescriptor_026ce870,
             PTR_s_sortDescriptorWithKey_ascending__026a6f68,&cf_creationDate,0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setSortDescriptors__026a6f70);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setFetchLimit__026a6f78,0x32);
  puVar2 = PTR__OBJC_CLASS___NSPredicate_026ce8f0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSPredicate_026ce8f0,PTR_s_predicateWithFormat__026a76e8,
             &cf__mediaSubtype__u___0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setPredicate__026a76f0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar4 = PTR__OBJC_CLASS___PHAsset_026ce530;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___PHAsset_026ce530,PTR_s_fetchAssetsWithMediaType_options_026a6f80,1,
             local_e8);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_count_0269cfe0);
  puVar2 = PTR__OBJC_CLASS___NSSet_026ce150;
  if (puVar4 == (undefined *)0x0) {
    local_d8 = 1;
  }
  else {
    puVar4 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_screenshotWatermarkAlbumEnhancem_026a7a20);
    _objc_retainAutoreleasedReturnValue();
    local_208 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_208 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setWithArray__0269d9a0,local_208);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    local_100 = puVar2;
    _memset(auStack_148,0,0x40);
    puVar2 = local_f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_238 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_b0,0x10);
    if (local_238 != (undefined *)0x0) {
      lVar6 = *local_138;
      local_240 = (undefined *)0x0;
      do {
        do {
          if (*local_138 - lVar6 != 0) {
            _objc_enumerationMutation(*local_138 - lVar6,puVar2);
          }
          lVar7 = *(long *)(local_140 + (long)local_240 * 8);
          local_108 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_creationDate_026a6fb0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          puVar4 = local_f8;
          if (lVar7 != 0) {
            lVar7 = local_108;
            (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_localIdentifier_026a6f90);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_containsObject__0269cbb8);
            (*(code *)PTR__objc_release_02578630)(lVar7);
            puVar1 = local_100;
            if (((ulong)puVar4 & 1) == 0) {
              lVar6 = local_108;
              (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_creationDate_026a6fb0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_timeIntervalSinceDate__0269cb78);
              (*(code *)PTR__objc_release_02578630)(lVar6);
              if (in_d0 <= 60.0) {
                lVar7 = local_108;
                (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_localIdentifier_026a6f90);
                _objc_retainAutoreleasedReturnValue();
                IVar3 = local_b8;
                lVar6 = local_108;
                local_178 = PTR___NSConcreteStackBlock_02578660;
                local_170 = 0xc2000000;
                local_16c = 0;
                local_168 = FUN_007280d0;
                local_160 = &DAT_025790c0;
                local_150 = lVar7;
                (*(code *)PTR__objc_retain_02578638)();
                local_158 = lVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (IVar3,PTR_s_wcr_applyWatermarkAlbumEnhanceme_026a7a28,lVar6,&local_178);
                local_d8 = 1;
                _objc_storeStrong(&local_158);
                _objc_storeStrong(&local_150,0);
              }
              else {
                local_d8 = 6;
              }
              goto LAB_00727fb0;
            }
          }
          local_240 = local_240 + 1;
        } while (local_240 < local_238);
        local_238 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_b0,
                   0x10);
        local_240 = (undefined *)0x0;
      } while (local_238 != (undefined *)0x0);
    }
    local_d8 = 0;
LAB_00727fb0:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_d8 == 0) {
      iVar5 = 0;
LAB_00727fe4:
      local_d8 = 0;
    }
    else {
      iVar5 = local_d8 + -6;
      if (iVar5 == 0) goto LAB_00727fe4;
    }
    _objc_storeStrong(iVar5,&local_100);
    _objc_storeStrong(&local_f8,0);
  }
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_e8,0);
LAB_0072802c:
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

