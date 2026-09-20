// openFileManagerSettings @ 0199e2e4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineFileManagerViewController::openFileManagerSettings(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  cfstringStruct *local_338;
  undefined *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  code *local_1c8;
  undefined *local_1c0;
  undefined1 auStack_1b8 [15];
  undefined1 local_1a9;
  undefined *local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  code *local_198;
  undefined *local_190;
  undefined1 auStack_188 [15];
  undefined1 local_179;
  undefined *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  code *local_168;
  undefined *local_160;
  undefined1 auStack_158 [15];
  byte local_149;
  cfstringStruct *local_148;
  byte local_139;
  undefined *local_138;
  cfstringStruct *local_130;
  undefined *local_128;
  undefined1 local_119;
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  undefined1 auStack_f8 [15];
  undefined1 local_e9;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined1 auStack_c8 [15];
  undefined1 local_b9;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  undefined1 auStack_98 [15];
  undefined1 local_89;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined1 auStack_60 [24];
  undefined *local_48;
  undefined1 auStack_40 [8];
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar2 = PTR_WCRFileManagerState_026cf1c8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileManagerState_026cf1c8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  _objc_initWeak(auStack_40,local_28);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRFileSheetAction_026cf1c0;
  puVar4 = local_38;
  local_48 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_showHidden_026ba430);
  local_68 = local_38;
  pcVar1 = &cf_N>f_yeN;
  if (((ulong)puVar4 & 1) == 0) {
    pcVar1 = &cf_>f_yeN;
  }
  local_88 = PTR___NSConcreteStackBlock_02578660;
  local_80 = 0xc2000000;
  local_7c = 0;
  local_78 = FUN_0199ef68;
  local_70 = &DAT_02579c60;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_copyWeak(auStack_60,auStack_40);
  local_89 = 1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_actionWithTitle_handler__026b9738,pcVar1,&local_88);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
  local_89 = 0;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar3 = local_48;
  puVar2 = PTR_WCRFileSheetAction_026cf1c0;
  local_b8 = PTR___NSConcreteStackBlock_02578660;
  local_b0 = 0xc2000000;
  local_ac = 0;
  local_a8 = FUN_0199f004;
  local_a0 = &DAT_0257be28;
  _objc_copyWeak(auStack_98,auStack_40);
  local_b9 = 1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_actionWithTitle_handler__026b9738,&cf_beN,&local_b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
  local_b9 = 0;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar3 = local_48;
  puVar2 = PTR_WCRFileSheetAction_026cf1c0;
  local_e8 = PTR___NSConcreteStackBlock_02578660;
  local_e0 = 0xc2000000;
  local_dc = 0;
  local_d8 = FUN_0199f054;
  local_d0 = &DAT_0257be28;
  _objc_copyWeak(auStack_c8,auStack_40);
  local_e9 = 1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_actionWithTitle_handler__026b9738,&cf___gu_Y_,&local_e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
  local_e9 = 0;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_resolvedDirectory_026ba370);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = IVar5;
  FUN_01988e34();
  _objc_retainAutoreleasedReturnValue();
  IVar7 = IVar5;
  FUN_0197ca78();
  (*(code *)PTR__objc_release_02578630)(IVar6);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  puVar3 = local_48;
  puVar2 = PTR_WCRFileSheetAction_026cf1c0;
  if ((IVar7 & 1) != 0) {
    local_118 = PTR___NSConcreteStackBlock_02578660;
    local_110 = 0xc2000000;
    local_10c = 0;
    local_108 = FUN_0199f274;
    local_100 = &DAT_0257be28;
    _objc_copyWeak(auStack_f8,auStack_40);
    local_119 = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_actionWithTitle_handler__026b9738,&cf_lveN2R,&local_118);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
    local_119 = 0;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_destroyWeak(auStack_f8);
  }
  puVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_migrationSource_026ba340);
  _objc_retainAutoreleasedReturnValue();
  local_139 = 0;
  local_149 = 0;
  local_128 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
  local_338 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  if (puVar2 == (undefined *)0x0) {
    local_338 = &cf_eN9Yy;
  }
  else {
    puVar2 = local_128;
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    local_139 = 1;
    local_138 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_338,PTR_s_stringWithFormat__0269cca8,&cf_y0_);
    _objc_retainAutoreleasedReturnValue();
    local_149 = 1;
    local_148 = local_338;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_130 = local_338;
  if ((local_149 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_148);
  }
  if ((local_139 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_138);
  }
  puVar3 = local_48;
  pcVar1 = local_130;
  puVar2 = PTR_WCRFileSheetAction_026cf1c0;
  local_178 = PTR___NSConcreteStackBlock_02578660;
  local_170 = 0xc2000000;
  local_16c = 0;
  local_168 = FUN_0199f2c4;
  local_160 = &DAT_0257be28;
  _objc_copyWeak(auStack_158,auStack_40);
  local_179 = 1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_actionWithTitle_handler__026b9738,pcVar1,&local_178);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
  local_179 = 0;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar3 = local_48;
  puVar2 = PTR_WCRFileSheetAction_026cf1c0;
  local_1a8 = PTR___NSConcreteStackBlock_02578660;
  local_1a0 = 0xc2000000;
  local_19c = 0;
  local_198 = FUN_0199f314;
  local_190 = &DAT_0257be28;
  _objc_copyWeak(auStack_188,auStack_40);
  local_1a9 = 1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_actionWithTitle_handler__026b9738,&cf_V0R9hvU_,&local_1a8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
  local_1a9 = 0;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar3 = local_48;
  puVar2 = PTR_WCRFileSheetAction_026cf1c0;
  local_1d8 = PTR___NSConcreteStackBlock_02578660;
  local_1d0 = 0xc2000000;
  local_1cc = 0;
  local_1c8 = FUN_0199f364;
  local_1c0 = &DAT_0257be28;
  _objc_copyWeak(auStack_1b8,auStack_40);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_actionWithTitle_handler__026b9738,&cf_7Re,&local_1d8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  FUN_0199377c(local_28,&cf_n_,local_48,&cf_Sm);
  _objc_destroyWeak(auStack_1b8);
  _objc_destroyWeak(auStack_188);
  _objc_destroyWeak(auStack_158);
  _objc_storeStrong(&local_130);
  _objc_storeStrong(&local_128,0);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_60);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_48,0);
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(&local_38,0);
  return;
}

