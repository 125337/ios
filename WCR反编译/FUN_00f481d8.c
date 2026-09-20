// FUN_00f481d8 @ 00f481d8

void FUN_00f481d8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  dispatch_time_t dVar7;
  cfstringStruct *pcVar8;
  cfstringStruct *local_328;
  cfstringStruct *local_308;
  undefined *local_2d8;
  undefined *local_2d0;
  undefined8 local_1d0;
  undefined *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  code *local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_190;
  cfstringStruct *local_188;
  byte local_179;
  cfstringStruct *local_178;
  undefined1 auStack_170 [8];
  long local_168;
  long *local_160;
  cfstringStruct *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  undefined *local_100;
  bool local_f1;
  undefined8 local_f0;
  byte local_e1;
  undefined *local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  int local_c4;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  local_b0 = param_1;
  _objc_storeStrong(&local_b8);
  lVar2 = local_b8;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastErrorWithText__0269ced8,&cf_h_eNNX__W);
    local_c4 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_ensureRootDirectoryExists__026a3c70,0);
    puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_listPacksSortMode__026ac360,0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x20);
    local_d0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    local_e1 = 0;
    local_f1 = false;
    if (lVar2 == 0) {
      local_1d0 = 0;
    }
    else {
      local_1d0 = *(undefined8 *)(param_1 + 0x20);
      puVar1 = PTR_WCRefineLocalEmoticonStore_026ce440;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_extensionForData__026ac368,local_b8);
      _objc_retainAutoreleasedReturnValue();
      local_e1 = 1;
      local_e0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1d0,PTR_s_stringByAppendingPathExtension__026a4580);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = local_1d0;
    }
    local_f1 = lVar2 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = local_1d0;
    if ((local_f1 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f0);
    }
    if ((local_e1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e0);
    }
    puVar1 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
    if (puVar1 == (undefined *)0x0) {
      puVar5 = PTR_WCRefineLocalEmoticonStore_026ce440;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLocalEmoticonStore_026ce440,
                 PTR_s_importData_fileName_intoPack_err_026abfa0,local_b8,local_d8,
                 _WCRLocalEmoticonUngroupedId,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      puVar6 = PTR_WCRefineHelper_026ce000;
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      if (puVar5 == (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_X_eQ1Y_);
      }
      else {
        puVar5 = PTR_WCRefineLocalEmoticonStore_026ce440;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_ungroupedDisplayName_026a1040);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf__X_eQ0_);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_showModernToast__0269ce78);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      local_c4 = 1;
    }
    else {
      puVar1 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
      if (puVar1 + -1 == (undefined *)0x0) {
        puVar1 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_firstObject_0269d1f8);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_100 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar5 = PTR_WCRefineLocalEmoticonStore_026ce440;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineLocalEmoticonStore_026ce440,
                   PTR_s_importData_fileName_intoPack_err_026abfa0,local_b8,local_d8,local_100,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        puVar6 = PTR_WCRefineHelper_026ce000;
        puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
        if (puVar5 == (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_X_eQ1Y_);
        }
        else {
          puVar5 = local_d0;
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_firstObject_0269d1f8);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf__X_eQ0_)
          ;
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_showModernToast__0269ce78);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(puVar5);
        }
        local_c4 = 1;
        _objc_storeStrong(&local_100,0);
      }
      else {
        pcVar8 = &cf_WCActionSheet;
        _NSClassFromString(puVar1 + -1);
        pcVar4 = &cf_WCActionSheetItem;
        local_108 = pcVar8;
        _NSClassFromString();
        local_110 = pcVar4;
        if ((local_108 == (cfstringStruct *)0x0) || (pcVar4 == (cfstringStruct *)0x0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineLocalEmoticonStore_026ce440,
                     PTR_s_importData_fileName_intoPack_err_026abfa0,local_b8,local_d8,
                     _WCRLocalEmoticonUngroupedId,0);
          _objc_unsafeClaimAutoreleasedReturnValue();
          puVar6 = PTR_WCRefineHelper_026ce000;
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          puVar5 = PTR_WCRefineLocalEmoticonStore_026ce440;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_ungroupedDisplayName_026a1040);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf__X_eQ_);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_showModernToast__0269ce78);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          local_c4 = 1;
        }
        else {
          puVar1 = PTR_WCREmoticonRepoSaveProxy_026ceb70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCREmoticonRepoSaveProxy_026ceb70,PTR_s_new_0269d288);
          local_118 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setData__026ac380,local_b8);
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setFileName__026ac388,local_d8);
          puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
          local_120 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
          _objc_retainAutoreleasedReturnValue();
          local_128 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120,PTR_s_addObject__0269d180,_WCRLocalEmoticonUngroupedId);
          puVar1 = local_128;
          pcVar8 = local_110;
          _objc_alloc();
          puVar6 = PTR_WCRefineLocalEmoticonStore_026ce440;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_ungroupedDisplayName_026a1040);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_initWithTitle__0269d2f8);
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(pcVar8);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          _memset(auStack_170,0,0x40);
          puVar1 = local_d0;
          (*(code *)PTR__objc_retain_02578638)();
          local_2d0 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_a8,
                     0x10);
          if (local_2d0 != (undefined *)0x0) {
            lVar2 = *local_160;
            local_2d8 = (undefined *)0x0;
            do {
              do {
                if (*local_160 - lVar2 != 0) {
                  _objc_enumerationMutation(*local_160 - lVar2,puVar1);
                }
                puVar6 = local_120;
                pcVar8 = *(cfstringStruct **)(local_168 + (long)local_2d8 * 8);
                local_130 = pcVar8;
                (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_relativePath_026ac370);
                _objc_retainAutoreleasedReturnValue();
                local_308 = pcVar8;
                if (pcVar8 == (cfstringStruct *)0x0) {
                  local_308 = &cf___;
                }
                (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180,local_308);
                (*(code *)PTR__objc_release_02578630)(pcVar8);
                puVar6 = local_128;
                pcVar8 = local_110;
                _objc_alloc();
                pcVar4 = local_130;
                (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_displayName_026ac378);
                _objc_retainAutoreleasedReturnValue();
                local_179 = 0;
                local_328 = pcVar4;
                if (pcVar4 == (cfstringStruct *)0x0) {
                  local_328 = local_130;
                  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_relativePath_026ac370);
                  _objc_retainAutoreleasedReturnValue();
                  local_178 = local_328;
                }
                local_179 = pcVar4 == (cfstringStruct *)0x0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (pcVar8,PTR_s_initWithTitle__0269d2f8,local_328);
                (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addObject__0269d180);
                (*(code *)PTR__objc_release_02578630)(pcVar8);
                if ((local_179 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_178);
                }
                (*(code *)PTR__objc_release_02578630)(pcVar4);
                local_2d8 = local_2d8 + 1;
              } while (local_2d8 < local_2d0);
              local_2d0 = puVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,
                         auStack_a8,0x10);
              local_2d8 = (undefined *)0x0;
            } while (local_2d0 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar1);
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setPackRels__026ac390,local_120);
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setSelfRef__0269fb58,local_118);
          dVar7 = _dispatch_time(0,350000000);
          puVar1 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = local_118;
          local_1b8 = PTR___NSConcreteStackBlock_02578660;
          local_1b0 = 0xc2000000;
          local_1ac = 0;
          local_1a8 = FUN_00f48ebc;
          local_1a0 = &DAT_02582f68;
          local_188 = local_108;
          (*(code *)PTR__objc_retain_02578638)();
          puVar6 = local_128;
          local_198 = puVar5;
          (*(code *)PTR__objc_retain_02578638)();
          local_190 = puVar6;
          _dispatch_after(dVar7,puVar1,&local_1b8);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          _objc_storeStrong(&local_190);
          _objc_storeStrong(&local_198,0);
          _objc_storeStrong(&local_128,0);
          _objc_storeStrong(&local_120,0);
          _objc_storeStrong(&local_118,0);
          local_c4 = 0;
        }
      }
    }
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_d0,0);
    if (local_c4 == 0) {
      local_c4 = 0;
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

