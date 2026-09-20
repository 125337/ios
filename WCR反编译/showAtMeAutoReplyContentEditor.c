// showAtMeAutoReplyContentEditor @ 01a5fe10

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::showAtMeAutoReplyContentEditor(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_180;
  undefined4 local_178;
  undefined4 local_174;
  code *local_170;
  undefined *local_168;
  undefined1 auStack_160 [8];
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  undefined1 auStack_138 [8];
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_124;
  code *local_120;
  undefined *local_118;
  undefined1 auStack_110 [8];
  undefined4 local_108;
  undefined1 local_103;
  undefined1 local_102;
  undefined1 local_101;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  undefined1 auStack_e0 [8];
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined1 auStack_b8 [8];
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [8];
  undefined1 *local_70;
  SEL local_68;
  ID local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = param_2;
  local_60 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_70 = puVar2;
  _objc_initWeak(auStack_78,local_60);
  puVar3 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_atMeAutoReplyCountMode_026a36e0);
  IVar1 = local_60;
  puVar2 = PTR_WCRKeywordAutoReplySheetAction_026cf258;
  if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    local_b0 = PTR___NSConcreteStackBlock_02578660;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_01a60638;
    local_98 = &DAT_0257be28;
    _objc_copyWeak(auStack_90,auStack_78);
    local_103 = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_actionWithTitle_handler__026b9738,&cf__YagQ_,&local_b0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_WCRKeywordAutoReplySheetAction_026cf258;
    local_d8 = PTR___NSConcreteStackBlock_02578660;
    local_d0 = 0xc2000000;
    local_cc = 0;
    local_c8 = FUN_01a60688;
    local_c0 = &DAT_0257be28;
    local_40 = puVar2;
    _objc_copyWeak(auStack_b8,auStack_78);
    local_102 = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_actionWithTitle_handler__026b9738,&cf_Rmo_N_,&local_d8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_WCRKeywordAutoReplySheetAction_026cf258;
    local_100 = PTR___NSConcreteStackBlock_02578660;
    local_f8 = 0xc2000000;
    local_f4 = 0;
    local_f0 = FUN_01a606d8;
    local_e8 = &DAT_0257be28;
    local_38 = puVar4;
    _objc_copyWeak(auStack_e0,auStack_78);
    local_101 = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_actionWithTitle_handler__026b9738,&cf_ndQ_,&local_100);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_01a0aaac(IVar1,&cf__yrb,&cf_wcrAtMeAutoReplyMultiSheet);
    local_101 = 0;
    local_102 = 0;
    local_103 = 0;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_108 = 1;
    _objc_destroyWeak(auStack_e0);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_90);
  }
  else {
    local_130 = PTR___NSConcreteStackBlock_02578660;
    local_128 = 0xc2000000;
    local_124 = 0;
    local_120 = FUN_01a607a8;
    local_118 = &DAT_0257be28;
    _objc_copyWeak(auStack_110,auStack_78);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_actionWithTitle_handler__026b9738,&cf_eQe_g,&local_130);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_WCRKeywordAutoReplySheetAction_026cf258;
    local_158 = PTR___NSConcreteStackBlock_02578660;
    local_150 = 0xc2000000;
    local_14c = 0;
    local_148 = FUN_01a607f8;
    local_140 = &DAT_0257be28;
    local_58 = puVar2;
    _objc_copyWeak(auStack_138,auStack_78);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_actionWithTitle_handler__026b9738,&cf_beHhN_,&local_158);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_WCRKeywordAutoReplySheetAction_026cf258;
    local_180 = PTR___NSConcreteStackBlock_02578660;
    local_178 = 0xc2000000;
    local_174 = 0;
    local_170 = FUN_01a60848;
    local_168 = &DAT_0257be28;
    local_50 = puVar4;
    _objc_copyWeak(auStack_160,auStack_78);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_actionWithTitle_handler__026b9738,&cf_ndQ_,&local_180);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_48 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,3
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_01a0aaac(IVar1,&cf__yrb,&cf_wcrAtMeAutoReplySheet);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_destroyWeak(auStack_160);
    _objc_destroyWeak(auStack_138);
    _objc_destroyWeak(auStack_110);
    local_108 = 0;
  }
  _objc_destroyWeak(auStack_78);
  _objc_storeStrong(&local_70,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

