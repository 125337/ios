// showAtMeGroupSettingsMenu @ 01ab2f64

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRGroupListViewController::showAtMeGroupSettingsMenu(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
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
  undefined1 auStack_90 [8];
  cfstringStruct *local_88;
  cfstringStruct *local_80 [3];
  cfstringStruct *local_68;
  undefined1 auStack_60 [8];
  undefined *local_58;
  SEL local_50;
  ID local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = param_2;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar3;
  _objc_initWeak(auStack_60,local_48);
  puVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_homeGroupingAtMeGroupIncludeAtMe_026a2e50);
  local_68 = &cf_sQ6e_0_;
  if (((ulong)puVar3 & 1) == 0) {
    local_68 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  puVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_homeGroupingAtMeGroupIncludeAtAl_026a2e58);
  local_80[0] = &cf_sQ6e_0_;
  if (((ulong)puVar3 & 1) == 0) {
    local_80[0] = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  puVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_homeGroupingAtMeGroupExcludeFold_026a2e48);
  local_88 = &cf_AQ6e_bSJ_Yv_yr;
  if (((ulong)puVar3 & 1) == 0) {
    local_88 = &cf_cdbSJ_Yv_yr;
  }
  (*(code *)PTR__objc_retain_02578638)();
  IVar2 = local_48;
  pcVar1 = local_68;
  puVar3 = PTR_WCRGroupSheetAction_026cf308;
  puVar4 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_homeGroupingAtMeGroupIncludeAtMe_026a2e50);
  local_b0 = PTR___NSConcreteStackBlock_02578660;
  local_a8 = 0xc2000000;
  local_a4 = 0;
  local_a0 = FUN_01ab3578;
  local_98 = &DAT_0257be28;
  _objc_copyWeak(auStack_90,auStack_60);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_actionWithTitle_destructive_hand_026a2db8,pcVar1,
             (ulong)puVar4 & 0xffffffff,&local_b0);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_80[0];
  puVar4 = PTR_WCRGroupSheetAction_026cf308;
  puVar5 = local_58;
  local_40 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_homeGroupingAtMeGroupIncludeAtAl_026a2e58);
  local_d8 = PTR___NSConcreteStackBlock_02578660;
  local_d0 = 0xc2000000;
  local_cc = 0;
  local_c8 = FUN_01ab3640;
  local_c0 = &DAT_0257be28;
  _objc_copyWeak(auStack_b8,auStack_60);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_actionWithTitle_destructive_hand_026a2db8,pcVar1,
             (ulong)puVar5 & 0xffffffff,&local_d8);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_88;
  puVar5 = PTR_WCRGroupSheetAction_026cf308;
  puVar6 = local_58;
  local_38 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_homeGroupingAtMeGroupExcludeFold_026a2e48);
  local_100 = PTR___NSConcreteStackBlock_02578660;
  local_f8 = 0xc2000000;
  local_f4 = 0;
  local_f0 = FUN_01ab3708;
  local_e8 = &DAT_0257be28;
  _objc_copyWeak(auStack_e0,auStack_60);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_actionWithTitle_destructive_hand_026a2db8,pcVar1,
             (ulong)puVar6 & 0xffffffff,&local_100);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3);
  _objc_retainAutoreleasedReturnValue();
  FUN_01aa2934(IVar2,&::cf__,puVar6,&cf__b);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_90);
  _objc_storeStrong(&local_88);
  _objc_storeStrong(local_80,0);
  _objc_storeStrong(&local_68,0);
  _objc_destroyWeak(auStack_60);
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

