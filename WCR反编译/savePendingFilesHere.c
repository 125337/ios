// savePendingFilesHere @ 019818b0

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::savePendingFilesHere(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  ID IVar3;
  undefined1 *puVar4;
  ID IVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  cfstringStruct *local_110;
  cfstringStruct *local_e0;
  undefined8 local_a0;
  cfstringStruct *local_98;
  ID local_90;
  undefined *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  cfstringStruct *local_70;
  long local_68;
  undefined *local_60;
  ID local_58;
  undefined1 *local_50;
  undefined4 local_44;
  undefined1 *local_40;
  undefined1 *local_38;
  SEL local_30;
  ID local_28;
  
  puVar1 = PTR_WCRFileManagerState_026cf1c8;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_pendingSaveSourcePaths_026ba220);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_40 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
  if (puVar2 == (undefined1 *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_lg_OX_veN);
    local_44 = 1;
  }
  else {
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_pendingSavePreferredName_026ba368);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_resolvedDirectory_026ba370);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_58 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = 0;
    local_70 = (cfstringStruct *)0x0;
    local_60 = puVar1;
    for (local_78 = (undefined1 *)0x0; puVar2 = local_78, puVar4 = local_40,
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0), puVar2 < puVar4;
        local_78 = local_78 + 1) {
      puVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectAtIndexedSubscript__0269cc78,local_78);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_60;
      local_80 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_fileExistsAtPath__026ca630,puVar2);
      if (((ulong)puVar1 & 1) == 0) {
        _objc_storeStrong(&local_70,&cf_neNNX__Wb__gN_);
        local_44 = 4;
      }
      else {
        local_88 = (undefined1 *)0x0;
        puVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
        if ((puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) &&
           (puVar2 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0)
           , puVar2 != (undefined1 *)0x0)) {
          _objc_storeStrong(puVar2,&local_88,local_50);
        }
        else {
          puVar2 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_lastPathComponent_026ca780);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = local_88;
          local_88 = puVar2;
          (*(code *)PTR__objc_release_02578630)(puVar1);
        }
        puVar1 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
        if (puVar1 == (undefined1 *)0x0) {
          _objc_storeStrong(&local_88,&cf__g_TTeN);
        }
        IVar3 = local_28;
        IVar5 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_stringByAppendingPathComponent__026cab30,local_88);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_uniqueDestinationForPath__026ba378);
        _objc_retainAutoreleasedReturnValue();
        local_90 = IVar3;
        (*(code *)PTR__objc_release_02578630)(IVar5);
        local_98 = (cfstringStruct *)0x0;
        local_a0 = 0;
        puVar1 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_60,PTR_s_copyItemAtPath_toPath_error__026a1758,local_80,local_90,&local_a0)
        ;
        _objc_storeStrong(&local_98,local_a0);
        if (((ulong)puVar1 & 1) == 0) {
          pcVar6 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_localizedDescription_0269ced0);
          _objc_retainAutoreleasedReturnValue();
          local_e0 = pcVar6;
          if (pcVar6 == (cfstringStruct *)0x0) {
            local_e0 = &cf_Y6R1Y_;
          }
          _objc_storeStrong(&local_70,local_e0);
          (*(code *)PTR__objc_release_02578630)(pcVar6);
        }
        else {
          local_68 = local_68 + 1;
        }
        _objc_storeStrong(&local_98);
        _objc_storeStrong(&local_90,0);
        _objc_storeStrong(&local_88,0);
        local_44 = 0;
      }
      _objc_storeStrong(&local_80,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_clearPendingSave_026b2df0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setupNavBar_026ba288);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reload_026af6c8);
    puVar1 = PTR_WCRefineHelper_026ce000;
    if (local_68 == 0) {
      if (local_70 == (cfstringStruct *)0x0) {
        local_110 = &cf_OX_1Y_;
      }
      else {
        local_110 = local_70;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_110);
    }
    else {
      puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__OX_);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78);
      (*(code *)PTR__objc_release_02578630)(puVar7);
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

