// openAddSheet @ 01e46b5c

/* Function Stack Size: 0x10 bytes */

void WCRefineTelegramGroupingTabsViewController::openAddSheet(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  undefined1 auStack_98 [8];
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined1 auStack_70 [24];
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRTGQuickAddViewController_026cf660;
  _objc_alloc_init();
  local_28 = puVar1;
  _objc_initWeak(auStack_30,local_18);
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_01e46de4;
  local_40 = &DAT_0257be28;
  _objc_copyWeak(auStack_38,auStack_30);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOnAdded__026c6588,&local_58);
  local_90 = PTR___NSConcreteStackBlock_02578660;
  local_88 = 0xc2000000;
  local_84 = 0;
  local_80 = FUN_01e46e34;
  local_78 = &DAT_0257be28;
  _objc_copyWeak(auStack_70,auStack_30);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOnCreateGroup__026c6590,&local_90);
  local_b8 = PTR___NSConcreteStackBlock_02578660;
  local_b0 = 0xc2000000;
  local_ac = 0;
  local_a8 = FUN_01e46e84;
  local_a0 = &DAT_0257be28;
  _objc_copyWeak(auStack_98,auStack_30);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOnLinkGroups__026c65a0,&local_b8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pushController__026b46d8,local_28);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_28,0);
  return;
}

