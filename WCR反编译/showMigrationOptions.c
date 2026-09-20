// showMigrationOptions @ 0199d4b0

/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::showMigrationOptions(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  code *local_1a8;
  undefined *local_1a0;
  undefined1 auStack_198 [8];
  undefined *local_190;
  undefined4 local_188;
  undefined4 local_184;
  code *local_180;
  undefined *local_178;
  undefined1 auStack_170 [12];
  undefined1 local_164;
  undefined1 local_163;
  undefined1 local_162;
  undefined1 local_161;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  undefined *local_148;
  undefined1 auStack_140 [8];
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  undefined1 auStack_118 [8];
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  undefined1 auStack_f0 [8];
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined1 auStack_c8 [8];
  undefined *local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [8];
  ID local_88;
  undefined4 local_80;
  undefined1 auStack_70 [8];
  undefined *local_68;
  undefined *local_60;
  SEL local_58;
  ID local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR_WCRFileManagerState_026cf1c8;
  local_58 = param_2;
  local_50 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_migrationSource_026ba340);
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar1;
  _objc_initWeak(auStack_70,local_50);
  puVar1 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_eN9Yy
               ,&cf_HQ_cyveN9YbyeN9Y0,&cf_bwSN,0);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar1);
    local_80 = 1;
  }
  else {
    IVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_resolvedDirectory_026ba370);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_68;
    local_88 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_stringByDeletingLastPathComponen_0269fb90);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_stringByStandardizingPath_026cab38);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isEqualToString__0269ccc8);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    IVar2 = local_88;
    puVar1 = PTR_WCRefineHelper_026ce000;
    if (((ulong)puVar4 & 1) == 0) {
      puVar1 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_stringByAppendingPathComponent__026cab30);
      _objc_retainAutoreleasedReturnValue();
      local_b8 = IVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar4 = PTR_WCRFileSheetAction_026cf1c0;
      puVar3 = PTR_WCRefineHelper_026ce000;
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      if (((ulong)puVar5 & 1) == 0) {
        puVar5 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf__0_);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR___NSConcreteStackBlock_02578660;
        local_190 = PTR___NSConcreteStackBlock_02578660;
        local_188 = 0xc2000000;
        local_184 = 0;
        local_180 = FUN_0199e1e8;
        local_178 = &DAT_025810b0;
        _objc_copyWeak();
        local_1b8 = puVar4;
        local_1b0 = 0xc2000000;
        local_1ac = 0;
        local_1a8 = FUN_0199e264;
        local_1a0 = &DAT_025810b0;
        _objc_copyWeak(auStack_198,auStack_70);
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,&cf_nxy,puVar1,&cf_Smy,
                   &local_190,&cf_nx_y,&local_1b8,puVar6);
        _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        _objc_destroyWeak(auStack_198);
        _objc_destroyWeak(auStack_170);
      }
      else {
        local_e8 = PTR___NSConcreteStackBlock_02578660;
        local_e0 = 0xc2000000;
        local_dc = 0;
        local_d8 = FUN_0199e09c;
        local_d0 = &DAT_0257be28;
        _objc_copyWeak(auStack_c8,auStack_70);
        local_164 = 1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_destructiveActionWithTitle_handl_026ba5d8,&cf_fbc,&local_e8);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR_WCRFileSheetAction_026cf1c0;
        local_110 = PTR___NSConcreteStackBlock_02578660;
        local_108 = 0xc2000000;
        local_104 = 0;
        local_100 = FUN_0199e0f0;
        local_f8 = &DAT_0257be28;
        local_48 = puVar4;
        _objc_copyWeak(auStack_f0,auStack_70);
        local_163 = 1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_actionWithTitle_handler__026b9738,&cf_qQX_,&local_110);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_WCRFileSheetAction_026cf1c0;
        local_138 = PTR___NSConcreteStackBlock_02578660;
        local_130 = 0xc2000000;
        local_12c = 0;
        local_128 = FUN_0199e144;
        local_120 = &DAT_0257be28;
        local_40 = puVar1;
        _objc_copyWeak(auStack_118,auStack_70);
        local_162 = 1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_actionWithTitle_handler__026b9738,&cf_Tv_TTQ_,&local_138);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR_WCRFileSheetAction_026cf1c0;
        local_160 = PTR___NSConcreteStackBlock_02578660;
        local_158 = 0xc2000000;
        local_154 = 0;
        local_150 = FUN_0199e198;
        local_148 = &DAT_0257be28;
        local_38 = puVar3;
        _objc_copyWeak(auStack_140,auStack_70);
        local_161 = 1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_destructiveActionWithTitle_handl_026ba5d8,&cf_Smy,&local_160);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_30 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_48,4);
        _objc_retainAutoreleasedReturnValue();
        local_161 = 0;
        local_162 = 0;
        local_163 = 0;
        local_164 = 0;
        local_c0 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        IVar2 = local_50;
        puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
        puVar3 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_lastPathComponent_026ca780);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf__X__W0_);
        _objc_retainAutoreleasedReturnValue();
        FUN_0199377c(IVar2,puVar1,local_c0,&cf_zT);
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        _objc_storeStrong(&local_c0,0);
        _objc_destroyWeak(auStack_140);
        _objc_destroyWeak(auStack_118);
        _objc_destroyWeak(auStack_f0);
        _objc_destroyWeak(auStack_c8);
      }
      _objc_storeStrong(&local_b8,0);
      local_80 = 0;
    }
    else {
      local_b0 = PTR___NSConcreteStackBlock_02578660;
      local_a8 = 0xc2000000;
      local_a4 = 0;
      local_a0 = FUN_0199e020;
      local_98 = &DAT_025810b0;
      _objc_copyWeak(auStack_90,auStack_70);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,&cf_ely,
                 &cf_vhvU_1__feN9YS_MR_b_WvU_bvQNvU_0,&cf_Smy,&local_b0,&cf___b,0);
      _objc_unsafeClaimAutoreleasedReturnValue(puVar1);
      local_80 = 1;
      _objc_destroyWeak(auStack_90);
    }
    _objc_storeStrong(&local_88,0);
  }
  _objc_destroyWeak(auStack_70);
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

