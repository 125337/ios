// FUN_01bd8e88 @ 01bd8e88

void FUN_01bd8e88(long param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  cfstringStruct *local_108;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_98;
  byte local_89;
  cfstringStruct *local_88;
  byte local_79;
  cfstringStruct *local_78;
  byte local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined4 local_54;
  ulong local_50;
  long local_48;
  long local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  uVar2 = param_1 + 0x60;
  local_48 = param_1;
  local_40 = param_1;
  _objc_loadWeakRetained();
  local_50 = uVar2;
  if (uVar2 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isCancelled_026a1c20);
    if (((uVar2 & 1) == 0) &&
       (uVar7 = *(ulong *)(param_1 + 0x68), uVar2 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_filterGeneration_026c0748),
       uVar7 == uVar2)) {
      uVar3 = *(undefined8 *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setFilteredItems__026c0848);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setYearSections__026c0850,*(undefined8 *)(param_1 + 0x30));
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setItemsByYear__026c0858);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = *(undefined8 *)(param_1 + 0x40);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setUserCounts__026c0860);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar3 = *(undefined8 *)(param_1 + 0x48);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setSampleItems__026c0868);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_rebuildRightMenus_026c07d8);
      lVar4 = *(long *)(param_1 + 0x50);
      (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
      local_69 = 0;
      local_79 = 0;
      local_89 = 0;
      if (lVar4 == 0) {
        local_f8 = &cf___;
      }
      else {
        local_f0 = *(cfstringStruct **)(param_1 + 0x48);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f0,PTR_s_objectForKeyedSubscript__0269d098,*(undefined8 *)(param_1 + 0x50))
        ;
        _objc_retainAutoreleasedReturnValue();
        local_69 = 1;
        local_68 = local_f0;
        if (local_f0 == (cfstringStruct *)0x0) {
          local_38 = &cf_username;
          local_30 = *(undefined8 *)(param_1 + 0x50);
          local_f0 = (cfstringStruct *)PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,
                     PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
          _objc_retainAutoreleasedReturnValue();
          local_79 = 1;
          local_78 = local_f0;
        }
        FUN_01bc7c2c();
        _objc_retainAutoreleasedReturnValue();
        local_89 = 1;
        local_f8 = local_f0;
        local_88 = local_f0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = local_f8;
      if ((local_89 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_88);
      }
      if ((local_79 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      if ((local_69 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      pcVar5 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_108 = &cf__g0WgSW;
      }
      else {
        local_108 = local_60;
      }
      (*(code *)PTR__objc_retain_02578638)();
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_98 = local_108;
      (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x28),PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_indexComplete_026c0870);
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_stringWithFormat__0269cca8,&cf_____lu___);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setTitle__0269cef0);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      lVar4 = *(long *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_count_0269cfe0);
      if (lVar4 == 0) {
        lVar4 = *(long *)(param_1 + 0x58);
        (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_count_0269cfe0);
        pcVar5 = &cf_fe_g0W_X_;
        if (lVar4 != 0) {
          pcVar5 = &cf_lg__TagNvQ_;
        }
        pcVar1 = &cf___;
        if (lVar4 != 0) {
          pcVar1 = &cf_n___bnzzd__;
        }
        uVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_wcr_statusPlaceholderWithTitle_s_026c0700,pcVar5,pcVar1,0);
        _objc_retainAutoreleasedReturnValue();
        uVar7 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_tableView_0269e378);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar7);
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      else {
        uVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_tableView_0269e378);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
      }
      uVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_tableView_0269e378);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_namesSourceItems_026c0878);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(ulong *)(param_1 + 0x58);
      (*(code *)PTR__objc_release_02578630)();
      if (uVar2 != uVar7) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_setNamesSourceItems__026c0880,*(undefined8 *)(param_1 + 0x58));
        uVar2 = local_50;
        uVar7 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_namesGeneration_026c0758);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_setNamesGeneration__026c0760);
        uVar2 = local_50;
        uVar3 = *(undefined8 *)(param_1 + 0x48);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_allValues_0269dae8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_warmDisplayNames_offset_generati_026c0838,uVar3,0,uVar7 + 1);
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      _objc_storeStrong(&local_98);
      _objc_storeStrong(&local_60,0);
      local_54 = 0;
      goto LAB_01bd969c;
    }
  }
  local_54 = 1;
LAB_01bd969c:
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

