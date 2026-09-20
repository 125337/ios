// pickTargets @ 01d36e8c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineScheduledTaskViewController::pickTargets(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_260;
  undefined4 local_258;
  undefined4 local_254;
  code *local_250;
  undefined *local_248;
  undefined1 auStack_240 [15];
  undefined1 local_231;
  undefined *local_230;
  undefined4 local_228;
  undefined4 local_224;
  code *local_220;
  undefined *local_218;
  undefined1 auStack_210 [8];
  undefined *local_208;
  undefined1 local_1f9;
  undefined *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  code *local_1e8;
  undefined *local_1e0;
  undefined1 auStack_1d8 [15];
  undefined1 local_1c9;
  undefined *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  code *local_1b8;
  undefined *local_1b0;
  undefined1 auStack_1a8 [15];
  undefined1 local_199;
  undefined *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188;
  undefined *local_180;
  undefined1 auStack_178 [15];
  undefined1 local_169;
  undefined *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  code *local_158;
  undefined *local_150;
  undefined1 auStack_148 [15];
  undefined1 local_139;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  undefined1 auStack_118 [15];
  undefined1 local_109;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  undefined1 auStack_e8 [15];
  undefined1 local_d9;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined1 auStack_b8 [15];
  undefined1 local_a9;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined1 auStack_88 [15];
  undefined1 local_79;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined1 auStack_58 [11];
  byte local_4d;
  undefined *local_40;
  undefined1 auStack_38 [8];
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentTask_026b3988);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar3 != 0) {
    _objc_initWeak(auStack_38,local_28);
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_28;
    local_40 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isAutoClearChatTask_026c45a0);
    puVar2 = local_40;
    puVar4 = PTR_WCRScheduledTaskSheetAction_026cf598;
    local_4d = (byte)IVar3;
    if ((IVar3 & 1) == 0) {
      local_168 = PTR___NSConcreteStackBlock_02578660;
      local_160 = 0xc2000000;
      local_15c = 0;
      local_158 = FUN_01d37f94;
      local_150 = &DAT_0257be28;
      _objc_copyWeak(auStack_148,auStack_38);
      local_169 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_actionWithTitle_handler__026b9738,&cf_KbReQ,&local_168);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      local_169 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar2 = local_40;
      puVar4 = PTR_WCRScheduledTaskSheetAction_026cf598;
      local_198 = PTR___NSConcreteStackBlock_02578660;
      local_190 = 0xc2000000;
      local_18c = 0;
      local_188 = FUN_01d37fe4;
      local_180 = &DAT_0257be28;
      _objc_copyWeak(auStack_178,auStack_38);
      local_199 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_actionWithTitle_handler__026b9738,&cf_b_J,&local_198);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      local_199 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar2 = local_40;
      puVar4 = PTR_WCRScheduledTaskSheetAction_026cf598;
      local_1c8 = PTR___NSConcreteStackBlock_02578660;
      local_1c0 = 0xc2000000;
      local_1bc = 0;
      local_1b8 = FUN_01d38034;
      local_1b0 = &DAT_0257be28;
      _objc_copyWeak(auStack_1a8,auStack_38);
      local_1c9 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_actionWithTitle_handler__026b9738,&cf_b_YS,&local_1c8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      local_1c9 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar2 = local_40;
      puVar4 = PTR_WCRScheduledTaskSheetAction_026cf598;
      local_1f8 = PTR___NSConcreteStackBlock_02578660;
      local_1f0 = 0xc2000000;
      local_1ec = 0;
      local_1e8 = FUN_01d38084;
      local_1e0 = &DAT_0257be28;
      _objc_copyWeak(auStack_1d8,auStack_38);
      local_1f9 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_actionWithTitle_handler__026b9738,&cf_bR_,&local_1f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      local_1f9 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_destroyWeak(auStack_1d8);
      _objc_destroyWeak(auStack_1a8);
      _objc_destroyWeak(auStack_178);
      _objc_destroyWeak(auStack_148);
    }
    else {
      local_78 = PTR___NSConcreteStackBlock_02578660;
      local_70 = 0xc2000000;
      local_6c = 0;
      local_68 = FUN_01d37df4;
      local_60 = &DAT_0257be28;
      _objc_copyWeak(auStack_58,auStack_38);
      local_79 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_actionWithTitle_handler__026b9738,&cf_b_J,&local_78);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      local_79 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar2 = local_40;
      puVar4 = PTR_WCRScheduledTaskSheetAction_026cf598;
      local_a8 = PTR___NSConcreteStackBlock_02578660;
      local_a0 = 0xc2000000;
      local_9c = 0;
      local_98 = FUN_01d37e44;
      local_90 = &DAT_0257be28;
      _objc_copyWeak(auStack_88,auStack_38);
      local_a9 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_actionWithTitle_handler__026b9738,&cf_N_JR_mR,&local_a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      local_a9 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar2 = local_40;
      puVar4 = PTR_WCRScheduledTaskSheetAction_026cf598;
      local_d8 = PTR___NSConcreteStackBlock_02578660;
      local_d0 = 0xc2000000;
      local_cc = 0;
      local_c8 = FUN_01d37e9c;
      local_c0 = &DAT_0257be28;
      _objc_copyWeak(auStack_b8,auStack_38);
      local_d9 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_actionWithTitle_handler__026b9738,&::cf___,&local_d8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      local_d9 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar2 = local_40;
      puVar4 = PTR_WCRScheduledTaskSheetAction_026cf598;
      local_108 = PTR___NSConcreteStackBlock_02578660;
      local_100 = 0xc2000000;
      local_fc = 0;
      local_f8 = FUN_01d37eec;
      local_f0 = &DAT_0257be28;
      _objc_copyWeak(auStack_e8,auStack_38);
      local_109 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_actionWithTitle_handler__026b9738,&cf_byJ,&local_108);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      local_109 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar2 = local_40;
      puVar4 = PTR_WCRScheduledTaskSheetAction_026cf598;
      local_138 = PTR___NSConcreteStackBlock_02578660;
      local_130 = 0xc2000000;
      local_12c = 0;
      local_128 = FUN_01d37f3c;
      local_120 = &DAT_0257be28;
      _objc_copyWeak(auStack_118,auStack_38);
      local_139 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_actionWithTitle_handler__026b9738,&cf_NyJR_mR,&local_138);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      local_139 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_destroyWeak(auStack_118);
      _objc_destroyWeak(auStack_e8);
      _objc_destroyWeak(auStack_b8);
      _objc_destroyWeak(auStack_88);
      _objc_destroyWeak(auStack_58);
    }
    puVar4 = PTR_WCRefineScheduledTask_026ce850;
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_currentTask_026b3988);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_stringArrayInTask_forKey__026a6cf0,IVar3,_kWCRScheduledTaskKeyTargets);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar2 = local_40;
    puVar4 = PTR_WCRScheduledTaskSheetAction_026cf598;
    local_208 = puVar5;
    if (puVar5 != (undefined *)0x0) {
      local_230 = PTR___NSConcreteStackBlock_02578660;
      local_228 = 0xc2000000;
      local_224 = 0;
      local_220 = FUN_01d380d4;
      local_218 = &DAT_0257be28;
      _objc_copyWeak(auStack_210,auStack_38);
      local_231 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_actionWithTitle_handler__026b9738,&cf_gw_,&local_230);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      local_231 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar2 = local_40;
      puVar4 = PTR_WCRScheduledTaskSheetAction_026cf598;
      local_260 = PTR___NSConcreteStackBlock_02578660;
      local_258 = 0xc2000000;
      local_254 = 0;
      local_250 = FUN_01d38124;
      local_248 = &DAT_0257be28;
      _objc_copyWeak(auStack_240,auStack_38);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_actionWithTitle_handler__026b9738,&cf_nzz_,&local_260);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_destroyWeak(auStack_240);
      _objc_destroyWeak(auStack_210);
    }
    pcVar1 = &cf_mRntO;
    if ((local_4d & 1) == 0) {
      pcVar1 = &cf_mRSvh;
    }
    FUN_01d38174(local_28,pcVar1,&cf_wcrSTTarget,local_40);
    _objc_storeStrong(&local_40,0);
    _objc_destroyWeak(auStack_38);
  }
  return;
}

