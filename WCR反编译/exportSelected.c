// exportSelected @ 01e07fcc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineSuperFloatBallWarehouseViewController::exportSelected
          (WCRefineSuperFloatBallWarehouseViewController *this,ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  ID IVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  double in_d0;
  uint local_214;
  ulong local_1c8;
  ulong local_1c0;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  byte local_121;
  ID local_120;
  uint local_114;
  ID local_110;
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  undefined8 local_c8;
  ID local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = param_2;
  local_b0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedExportPaths_026c5c58);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (IVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQb_QvVh);
  }
  else {
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar3 = PTR__OBJC_CLASS___NSUUID_026ce668;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_stringWithFormat__0269cca8,&cf_WCRSFBallExport___);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = IVar6;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _memset(auStack_108,0,0x40);
    IVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_selectedExportPaths_026c5c58);
    _objc_retainAutoreleasedReturnValue();
    local_1c0 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1c0 != 0) {
      lVar11 = *local_f8;
      local_1c8 = 0;
      do {
        do {
          if (*local_f8 - lVar11 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar11,IVar2);
          }
          local_c8 = *(undefined8 *)(local_100 + local_1c8 * 8);
          IVar7 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_absoluteForRel__026c5c40,local_c8);
          _objc_retainAutoreleasedReturnValue();
          local_110 = IVar7;
          (*(code *)PTR__objc_msgSend_02578628)(IVar7,PTR_s_length_0269cca0);
          IVar6 = local_c0;
          if (IVar7 == 0) {
            local_114 = 3;
          }
          else {
            uVar8 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_lastPathComponent_026ca780);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar6,PTR_s_stringByAppendingPathComponent__026cab30);
            _objc_retainAutoreleasedReturnValue();
            local_120 = IVar6;
            (*(code *)PTR__objc_release_02578630)(uVar8);
            local_121 = 0;
            puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar5);
            if ((local_121 & 1) == 0) {
              puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar5);
            }
            else {
              puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(puVar5);
            }
            _objc_storeStrong(&local_120,0);
            local_114 = 0;
          }
          _objc_storeStrong(&local_110,0);
          local_1c8 = local_1c8 + 1;
        } while (local_1c8 < local_1c0);
        local_1c0 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10
                  );
        local_1c8 = 0;
      } while (local_1c0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithInteger__0269e080,(long)in_d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf__nmc_);
    _objc_retainAutoreleasedReturnValue();
    local_130 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)();
    _NSTemporaryDirectory();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar3 = PTR__OBJC_CLASS___NSUUID_026ce668;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_stringWithFormat__0269cca8,&cf_WCRSFBallZip___);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringByAppendingPathComponent__026cab30);
    _objc_retainAutoreleasedReturnValue();
    local_138 = puVar10;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_stringByAppendingPathComponent__026cab30,local_130);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineFrameZipCreator_026cf080;
    local_140 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineFrameZipCreator_026cf080,PTR_s_createZipFileAtPath_withContents_026ae420,
               puVar5,local_c0);
    puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_214 = 1;
    if (((ulong)puVar3 & 1) != 0) {
      puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_214 = (uint)puVar3 ^ 1;
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    bVar1 = (local_214 & 1) == 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_exitMultiSelect_026c1aa8);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_wcr_presentFileShareOptionsAtPat_026b65a8,
                 local_140,local_130,local_b0,local_138);
    }
    else {
      puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__Q1Y_);
    }
    local_114 = (uint)!bVar1;
    _objc_storeStrong(&local_140);
    _objc_storeStrong(&local_138,0);
    _objc_storeStrong(&local_130,0);
    _objc_storeStrong(&local_c0,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

