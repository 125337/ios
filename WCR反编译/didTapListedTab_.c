// didTapListedTab: @ 01e47284

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineTelegramGroupingTabsViewController::didTapListedTab_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_3e8;
  undefined *local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  code *local_1b0;
  undefined *local_1a8;
  cfstringStruct *local_1a0;
  undefined1 auStack_198 [15];
  undefined1 local_189;
  undefined *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  code *local_178;
  undefined *local_170;
  cfstringStruct *local_168;
  undefined1 auStack_160 [15];
  undefined1 local_151;
  undefined *local_150;
  undefined4 local_148;
  undefined4 local_144;
  code *local_140;
  undefined *local_138;
  cfstringStruct *local_130;
  undefined1 auStack_128 [8];
  cfstringStruct *local_120;
  undefined1 local_111;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  cfstringStruct *local_f0;
  undefined1 auStack_e8 [15];
  undefined1 local_d9;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  undefined1 auStack_b0 [15];
  undefined1 local_a1;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  undefined1 auStack_78 [24];
  undefined *local_60;
  undefined1 auStack_58 [12];
  undefined4 local_4c;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tabIdFromSender__026c65a8,local_38);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_28;
  local_40 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_listedTabWithId__026c65b0,pcVar4);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_4c = 1;
  }
  else {
    _objc_initWeak(auStack_58,local_28);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_48;
    local_60 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_kind_026a27e8);
    puVar1 = local_60;
    puVar3 = PTR_WCRTGTabsSheetAction_026cf668;
    if (pcVar4 == (cfstringStruct *)0x2) {
      local_a0 = PTR___NSConcreteStackBlock_02578660;
      local_98 = 0xc2000000;
      local_94 = 0;
      local_90 = FUN_01e47e40;
      local_88 = &DAT_02579c60;
      _objc_copyWeak(auStack_78,auStack_58);
      pcVar4 = local_48;
      local_a1 = 1;
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_actionWithTitle_destructive_hand_026a2db8,&cf_TRR_NU__y,0,&local_a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
      local_a1 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      pcVar4 = local_48;
      puVar1 = local_60;
      puVar3 = PTR_WCRTGTabsSheetAction_026cf668;
      local_d8 = PTR___NSConcreteStackBlock_02578660;
      local_d0 = 0xc2000000;
      local_cc = 0;
      local_c8 = FUN_01e47f90;
      local_c0 = &DAT_02579c60;
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = pcVar4;
      _objc_copyWeak(auStack_b0,auStack_58);
      local_d9 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_actionWithTitle_destructive_hand_026a2db8,&cf__bXT,0,&local_d8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
      local_d9 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_destroyWeak(auStack_b0);
      _objc_storeStrong(&local_b8);
      _objc_storeStrong(&local_80,0);
      _objc_destroyWeak(auStack_78);
    }
    puVar1 = local_60;
    puVar3 = PTR_WCRTGTabsSheetAction_026cf668;
    local_110 = PTR___NSConcreteStackBlock_02578660;
    local_108 = 0xc2000000;
    local_104 = 0;
    local_100 = FUN_01e48118;
    local_f8 = &DAT_02579c60;
    _objc_copyWeak(auStack_e8,auStack_58);
    pcVar4 = local_48;
    local_111 = 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_actionWithTitle_destructive_hand_026a2db8,&cf__TT,0,&local_110);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
    local_111 = 0;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_disabled_026a2c20);
    pcVar4 = &cf__T_u;
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar4 = &cf_y_u;
    }
    (*(code *)PTR__objc_retain_02578638)();
    pcVar2 = local_48;
    puVar1 = local_60;
    puVar3 = PTR_WCRTGTabsSheetAction_026cf668;
    local_150 = PTR___NSConcreteStackBlock_02578660;
    local_148 = 0xc2000000;
    local_144 = 0;
    local_140 = FUN_01e4817c;
    local_138 = &DAT_02579c60;
    local_120 = pcVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = pcVar2;
    _objc_copyWeak(auStack_128,auStack_58);
    local_151 = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_actionWithTitle_destructive_hand_026a2db8,pcVar4,0,&local_150);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
    local_151 = 0;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_destroyWeak(auStack_128);
    _objc_storeStrong(&local_130);
    _objc_storeStrong(&local_120,0);
    pcVar4 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_removable_026b0138);
    puVar1 = local_60;
    puVar3 = PTR_WCRTGTabsSheetAction_026cf668;
    if (((ulong)pcVar4 & 1) != 0) {
      local_188 = PTR___NSConcreteStackBlock_02578660;
      local_180 = 0xc2000000;
      local_17c = 0;
      local_178 = FUN_01e482cc;
      local_170 = &DAT_02579c60;
      pcVar4 = local_48;
      (*(code *)PTR__objc_retain_02578638)();
      local_168 = pcVar4;
      _objc_copyWeak(auStack_160,auStack_58);
      local_189 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_actionWithTitle_destructive_hand_026a2db8,&cf_Rd,1,&local_188);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
      local_189 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_destroyWeak(auStack_160);
      _objc_storeStrong(&local_168,0);
    }
    puVar1 = local_60;
    puVar3 = PTR_WCRTGTabsSheetAction_026cf668;
    local_1c0 = PTR___NSConcreteStackBlock_02578660;
    local_1b8 = 0xc2000000;
    local_1b4 = 0;
    local_1b0 = FUN_01e483f4;
    local_1a8 = &DAT_02579c60;
    _objc_copyWeak(auStack_198,auStack_58);
    pcVar4 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a0 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_actionWithTitle_destructive_hand_026a2db8,&cf__cR_O,0,&local_1c0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar4 = local_28;
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_title_0269d250);
    _objc_retainAutoreleasedReturnValue();
    local_3e8 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_3e8 = &cf_R_;
    }
    FUN_01e48544(pcVar4,local_3e8,local_60,&cf_Sm);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    _objc_storeStrong(&local_1a0);
    _objc_destroyWeak(auStack_198);
    _objc_storeStrong(&local_f0,0);
    _objc_destroyWeak(auStack_e8);
    _objc_storeStrong(&local_60,0);
    _objc_destroyWeak(auStack_58);
    local_4c = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

