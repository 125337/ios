// processAlbumEnhancementScanFromLibraryChange @ 007115a0

/* WARNING: Removing unreachable block (ram,0x00711798) */
/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineScreenshotFrameProcessor::processAlbumEnhancementScanFromLibraryChange
          (WCRefineScreenshotFrameProcessor *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  double in_d0;
  undefined *local_250;
  undefined *local_248;
  undefined *local_218;
  undefined *local_180;
  undefined4 local_178;
  undefined4 local_174;
  code *local_170;
  undefined *local_168;
  long local_160;
  long local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  long local_110;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined1 *local_e8;
  ID local_e0;
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
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_resetFrameAlbumEnhancementDe_026a75f8);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_gestureScreenshotPostProcessOnly_026a1f28);
  if (((((ulong)puVar2 & 1) != 0) ||
      (puVar2 = local_c8,
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_screenshotFrameEnabled_026a1ef0),
      ((ulong)puVar2 & 1) == 0)) ||
     (puVar2 = local_c8,
     (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_screenshotFrameAlbumEnhancementE_026a75c8)
     , ((ulong)puVar2 & 1) == 0)) {
    local_d8 = 1;
    goto LAB_00712068;
  }
  IVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isDoubleModeTemplate_026a7658);
  if ((IVar3 & 1) != 0) {
    local_d8 = 1;
    goto LAB_00712068;
  }
  IVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_effectiveFrameTemplateRelativePa_026a7608);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_length_0269cca0);
  if (IVar3 == 0) {
    local_d8 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,
               PTR_s_authorizationStatusForAccessLeve_026a1760,2);
    local_e8 = puVar2;
    if ((puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) ||
       ((dword *)puVar2 == &MACH_HEADER.cputype)) {
      puVar2 = PTR__OBJC_CLASS___PHFetchOptions_026ce868;
      _objc_alloc_init();
      puVar4 = PTR__OBJC_CLASS___NSSortDescriptor_026ce870;
      local_f0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSSortDescriptor_026ce870,
                 PTR_s_sortDescriptorWithKey_ascending__026a6f68,&cf_creationDate,0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_30 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setSortDescriptors__026a6f70);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setFetchLimit__026a6f78,0x32);
      puVar2 = PTR__OBJC_CLASS___NSPredicate_026ce8f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSPredicate_026ce8f0,PTR_s_predicateWithFormat__026a76e8,
                 &cf__mediaSubtype__u___0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setPredicate__026a76f0);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar4 = PTR__OBJC_CLASS___PHAsset_026ce530;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___PHAsset_026ce530,PTR_s_fetchAssetsWithMediaType_options_026a6f80,
                 1,local_f0);
      _objc_retainAutoreleasedReturnValue();
      local_f8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_count_0269cfe0);
      puVar2 = PTR__OBJC_CLASS___NSSet_026ce150;
      if (puVar4 == (undefined *)0x0) {
        local_d8 = 1;
      }
      else {
        puVar4 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_screenshotFrameAlbumEnhancementP_026a7740);
        _objc_retainAutoreleasedReturnValue();
        local_218 = puVar4;
        if (puVar4 == (undefined *)0x0) {
          local_218 = *(undefined **)PTR____NSArray0___02578280;
        }
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setWithArray__0269d9a0,local_218);
        _objc_retainAutoreleasedReturnValue();
        local_100 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_108 = puVar2;
        _memset(auStack_150,0,0x40);
        puVar2 = local_f8;
        (*(code *)PTR__objc_retain_02578638)();
        local_248 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_b0,
                   0x10);
        if (local_248 != (undefined *)0x0) {
          lVar6 = *local_140;
          local_250 = (undefined *)0x0;
          do {
            do {
              if (*local_140 - lVar6 != 0) {
                _objc_enumerationMutation(*local_140 - lVar6,puVar2);
              }
              lVar7 = *(long *)(local_148 + (long)local_250 * 8);
              local_110 = lVar7;
              (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_creationDate_026a6fb0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_release_02578630)();
              puVar4 = local_100;
              if (lVar7 != 0) {
                lVar7 = local_110;
                (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_localIdentifier_026a6f90);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_containsObject__0269cbb8);
                (*(code *)PTR__objc_release_02578630)(lVar7);
                puVar1 = local_108;
                if (((ulong)puVar4 & 1) == 0) {
                  lVar6 = local_110;
                  (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_creationDate_026a6fb0);
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar1,PTR_s_timeIntervalSinceDate__0269cb78);
                  (*(code *)PTR__objc_release_02578630)(lVar6);
                  if (in_d0 <= 60.0) {
                    lVar7 = local_110;
                    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_localIdentifier_026a6f90);
                    _objc_retainAutoreleasedReturnValue();
                    IVar3 = local_b8;
                    lVar6 = local_110;
                    local_180 = PTR___NSConcreteStackBlock_02578660;
                    local_178 = 0xc2000000;
                    local_174 = 0;
                    local_170 = FUN_0071211c;
                    local_168 = &DAT_025790c0;
                    local_158 = lVar7;
                    (*(code *)PTR__objc_retain_02578638)();
                    local_160 = lVar7;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (IVar3,PTR_s_processLatestScreenshotWithNotif_026a7618,0,lVar6,1,
                               &local_180);
                    local_d8 = 1;
                    _objc_storeStrong(&local_160);
                    _objc_storeStrong(&local_158,0);
                  }
                  else {
                    local_d8 = 6;
                  }
                  goto LAB_00711fdc;
                }
              }
              local_250 = local_250 + 1;
            } while (local_250 < local_248);
            local_248 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_b0
                       ,0x10);
            local_250 = (undefined *)0x0;
          } while (local_248 != (undefined *)0x0);
        }
        local_d8 = 0;
LAB_00711fdc:
        (*(code *)PTR__objc_release_02578630)(puVar2);
        if (local_d8 == 0) {
          iVar5 = 0;
LAB_00712010:
          local_d8 = 0;
        }
        else {
          iVar5 = local_d8 + -6;
          if (iVar5 == 0) goto LAB_00712010;
        }
        _objc_storeStrong(iVar5,&local_108);
        _objc_storeStrong(&local_100,0);
      }
      _objc_storeStrong(&local_f8);
      _objc_storeStrong(&local_f0,0);
    }
    else {
      local_d8 = 1;
    }
  }
  _objc_storeStrong(&local_e0,0);
LAB_00712068:
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

