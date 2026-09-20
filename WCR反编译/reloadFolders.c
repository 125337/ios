// reloadFolders @ 01f823d0

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackPathPickerViewController::reloadFolders(ID param_1,SEL param_2)

{
  byte bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  cfstringStruct *local_318;
  cfstringStruct *local_310;
  cfstringStruct *local_2e8;
  undefined *local_290;
  undefined *local_288;
  undefined *local_270;
  char *local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  undefined8 local_1e0;
  cfstringStruct *local_1d8;
  bool local_1c9;
  cfstringStruct *local_1c8;
  undefined *local_1c0;
  char *local_1b8;
  byte local_1a9;
  cfstringStruct *local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  ulong local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined *local_148;
  undefined8 local_140;
  SEL local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_140 = 0;
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_138 = param_2;
  local_130 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_directory_026ba278);
  _objc_retainAutoreleasedReturnValue();
  local_150 = local_140;
  puVar4 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_contentsOfDirectoryAtPath_error__0269e088,pcVar3,&local_150);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_140,local_150);
  local_148 = puVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_158 = puVar2;
  _memset(auStack_1a0,0,0x40);
  if (local_148 == (undefined *)0x0) {
    local_270 = *(undefined **)PTR____NSArray0___02578280;
  }
  else {
    local_270 = local_148;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_288 = local_270;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_270,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10);
  if (local_288 != (undefined *)0x0) {
    lVar7 = *local_190;
    local_290 = (undefined *)0x0;
    do {
      do {
        if (*local_190 - lVar7 != 0) {
          _objc_enumerationMutation(*local_190 - lVar7,local_270);
        }
        uVar8 = *(ulong *)(local_198 + (long)local_290 * 8);
        local_160 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_hasPrefix__0269d320,&::cf__);
        if ((uVar8 & 1) == 0) {
          pcVar3 = local_130;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_directory_026ba278);
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_1a8 = pcVar5;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          local_1a9 = 0;
          puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = 0;
          if (((ulong)puVar4 & 1) != 0) {
            bVar1 = local_1a9;
          }
          (*(code *)PTR__objc_release_02578630)(puVar2);
          if ((bVar1 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_addObject__0269d180,local_160);
          }
          _objc_storeStrong(&local_1a8,0);
        }
        local_290 = local_290 + 1;
      } while (local_290 < local_288);
      local_288 = local_270;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_270,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,
                 0x10);
      local_290 = (undefined *)0x0;
    } while (local_288 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(local_270);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_158,PTR_s_sortUsingSelector__0269e0a0,PTR_s_localizedStandardCompare__0269e098);
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_setFolders__026c9ad8,local_158);
  pcVar3 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar6 = "WCTableViewNormalCellManager";
  _objc_getClass();
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_1b8 = pcVar6;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_130;
  local_1c0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_footerTitle_026af6c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar5 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_1c9 = false;
  if (pcVar5 == (cfstringStruct *)0x0) {
    local_2e8 = &cf_pSN0_udkY0nxS_MRvU__NS_;
  }
  else {
    local_2e8 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_footerTitle_026af6c0);
    _objc_retainAutoreleasedReturnValue();
    local_1c8 = local_2e8;
  }
  local_1c9 = pcVar5 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_setFooterTitle__0269e3c8,local_2e8);
  if ((local_1c9 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_1c8);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)();
  FUN_01f82c78();
  _objc_retainAutoreleasedReturnValue();
  local_1d8 = pcVar3;
  _memset(auStack_220,0,0x40);
  pcVar3 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_folders_026c9ae0);
  _objc_retainAutoreleasedReturnValue();
  local_310 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_310 != (cfstringStruct *)0x0) {
    lVar7 = *local_210;
    local_318 = (cfstringStruct *)0x0;
    do {
      do {
        if (*local_210 - lVar7 != 0) {
          _objc_enumerationMutation(*local_210 - lVar7,pcVar3);
        }
        local_1e0 = *(undefined8 *)(local_218 + (long)local_318 * 8);
        pcVar6 = local_1b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1b8,PTR_s_normalCellForSel_target_title_de_026b3248,
                   PTR_s_handleFolderTap__026c9ae8,local_130,local_1e0,0,local_1d8,1);
        _objc_retainAutoreleasedReturnValue();
        local_228 = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar6,PTR_s_setValue_forKey__0269d300,local_1e0,&cf_userInfo);
        (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_addCell__0269e3f8,local_228);
        _objc_storeStrong(&local_228,0);
        local_318 = (cfstringStruct *)((long)&local_318->field0_0x0 + 1);
      } while (local_318 < local_310);
      local_310 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,auStack_128,0x10
                );
      local_318 = (cfstringStruct *)0x0;
    } while (local_310 != (cfstringStruct *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  _objc_storeStrong(&local_1d8);
  _objc_storeStrong(&local_1c0,0);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_140,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

