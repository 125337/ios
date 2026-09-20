// showUnreadGroupSettingsMenu @ 01ab39cc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRGroupListViewController::showUnreadGroupSettingsMenu(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined1 auStack_b0 [8];
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined1 auStack_88 [8];
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  byte local_6d;
  byte local_59;
  undefined1 auStack_58 [8];
  undefined *local_50;
  SEL local_48;
  ID local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = param_2;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar3;
  _objc_initWeak(auStack_58,local_40);
  puVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_homeGroupingUnreadGroupIncludeFo_026bda00);
  local_59 = (byte)puVar3;
  puVar3 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_homeGroupingUnreadGroupIncludeMu_026bda08);
  local_6d = (byte)puVar3;
  local_78 = &::cf__;
  if ((local_59 & 1) == 0) {
    local_78 = &cf_6e_bS_J_g;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = &::cf__;
  if ((local_6d & 1) == 0) {
    local_80 = &cf_6e_MQSbpb_g;
  }
  (*(code *)PTR__objc_retain_02578638)();
  IVar2 = local_40;
  pcVar1 = local_78;
  puVar3 = PTR_WCRGroupSheetAction_026cf308;
  local_a8 = PTR___NSConcreteStackBlock_02578660;
  local_a0 = 0xc2000000;
  local_9c = 0;
  local_98 = FUN_01ab3e38;
  local_90 = &DAT_0257be28;
  _objc_copyWeak(auStack_88,auStack_58);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_actionWithTitle_destructive_hand_026a2db8,pcVar1,0,&local_a8);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_80;
  puVar4 = PTR_WCRGroupSheetAction_026cf308;
  local_d0 = PTR___NSConcreteStackBlock_02578660;
  local_c8 = 0xc2000000;
  local_c4 = 0;
  local_c0 = FUN_01ab3f00;
  local_b8 = &DAT_0257be28;
  local_38 = puVar3;
  _objc_copyWeak(auStack_b0,auStack_58);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_actionWithTitle_destructive_hand_026a2db8,pcVar1,0,&local_d0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  FUN_01aa2934(IVar2,&cf__gR_6e_n_,puVar5,&cf__b);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_destroyWeak(auStack_b0);
  _objc_destroyWeak(auStack_88);
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
  _objc_destroyWeak(auStack_58);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

