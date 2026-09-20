// FUN_00017d30 @ 00017d30

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00017d30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  char *pcVar6;
  char *pcVar7;
  cfstringStruct *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined *local_318;
  undefined *local_2a0;
  undefined *local_298;
  cfstringStruct *local_260;
  cfstringStruct *local_250;
  undefined *local_1b0;
  undefined *local_1a0;
  undefined *local_190;
  undefined *local_188;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  undefined8 local_140;
  undefined *local_138;
  char *local_130;
  char *local_128;
  char *local_120;
  char *local_118;
  uint local_10c;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8 [3];
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = (undefined *)0x0;
  _objc_storeStrong(&local_b0,param_1);
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c0,param_3);
  puVar5 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar9 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar5 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = local_b0;
    local_108 = PTR___NSConcreteStackBlock_02578660;
    local_100 = 0xc2000000;
    local_fc = 0;
    local_f8 = FUN_00020f80;
    local_f0 = &DAT_02578f80;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar4 = local_b8;
    local_e8 = puVar5;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar8 = local_c0;
    local_e0 = pcVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_d8[0] = pcVar8;
    _dispatch_async(puVar9,&local_108);
    (*(code *)PTR__objc_release_02578630)(puVar9);
    local_10c = 1;
    _objc_storeStrong(local_d8);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_e8,0);
    goto LAB_00018938;
  }
  pcVar6 = "WCActionSheet";
  _objc_getClass();
  pcVar7 = "WCActionSheetItem";
  local_118 = pcVar6;
  _objc_getClass();
  local_120 = pcVar7;
  if ((local_118 == (char *)0x0) || (pcVar7 == (char *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el9_QVb);
    local_10c = 1;
    goto LAB_00018938;
  }
  FUN_00021080();
  _objc_retainAutoreleasedReturnValue();
  local_128 = pcVar7;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_setController__0269d2d8,local_b0);
  pcVar8 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  if (pcVar8 == (cfstringStruct *)0x0) {
    local_250 = &cf___;
  }
  else {
    local_250 = local_b8;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setSession__0269d2e0,local_250);
  pcVar8 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  if (pcVar8 == (cfstringStruct *)0x0) {
    local_260 = &cf___;
  }
  else {
    local_260 = local_c0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_setExtra__0269d2e8,local_260);
  pcVar6 = local_118;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar6,PTR_s_initWithTitle_delegate_cancelBut_0269d2f0,&cf_bRgV,local_128,&cf_Sm,0);
  local_130 = pcVar6;
  if (pcVar6 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el9_QVb);
    local_10c = 1;
  }
  else {
    puVar9 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_138 = puVar9;
    _memset(auStack_180,0,0x40);
    puVar9 = PTR_WCRefineAIStore_026ce048;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineAIStore_026ce048,PTR_s_groupChatAnalysisRangeTitles_0269cfd8);
    _objc_retainAutoreleasedReturnValue();
    local_298 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_298 != (undefined *)0x0) {
      lVar11 = *local_170;
      local_2a0 = (undefined *)0x0;
      do {
        do {
          if (*local_170 - lVar11 != 0) {
            _objc_enumerationMutation(*local_170 - lVar11,puVar9);
          }
          puVar5 = local_138;
          local_140 = *(undefined8 *)(local_178 + (long)local_2a0 * 8);
          pcVar6 = local_120;
          _objc_alloc();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_initWithTitle__0269d2f8,local_140);
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180,pcVar6);
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          local_2a0 = local_2a0 + 1;
        } while (local_2a0 < local_298);
        local_298 = puVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,
                   0x10);
        local_2a0 = (undefined *)0x0;
      } while (local_298 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar9);
    puVar9 = local_138;
    pcVar6 = local_120;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_initWithTitle__0269d2f8,&cf__INeg);
    (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_addObject__0269d180,pcVar6);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_130,PTR_s_setValue_forKey__0269d300,local_138,&cf_buttonTitleList);
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
    puVar9 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_isViewLoaded_0269cde0);
    if (((ulong)puVar9 & 1) == 0) {
LAB_00018578:
      local_318 = (undefined *)0x0;
    }
    else {
      local_190 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      bVar3 = true;
      local_1a0 = local_190;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      if (local_1a0 == (undefined *)0x0) goto LAB_00018578;
      local_318 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_1b0 = local_318;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_188 = local_318;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_1b0);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_1a0);
    }
    if (bVar3) {
      (*(code *)PTR__objc_release_02578630)(local_190);
    }
    if (local_188 == (undefined *)0x0) {
      puVar5 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = local_188;
      local_188 = puVar10;
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    if (local_188 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___UIApplication_026ce010;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = local_188;
      local_188 = puVar10;
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(puVar5);
    }
    bVar1 = local_188 != (undefined *)0x0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_showInView__0269d310,local_188);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el9_QVb);
    }
    local_10c = (uint)!bVar1;
    _objc_storeStrong(&local_188);
    _objc_storeStrong(&local_138,0);
  }
  _objc_storeStrong(&local_130);
  _objc_storeStrong(&local_128,0);
LAB_00018938:
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

