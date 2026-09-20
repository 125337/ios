// longPressActionsForPlugin:sourceView: @ 0178a144

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

ID WCPluginsViewControllerBehavior::longPressActionsForPlugin_sourceView_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  ID IVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *local_258;
  undefined4 local_250;
  undefined4 local_24c;
  code *local_248;
  undefined *local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined1 auStack_228 [15];
  byte local_219;
  undefined1 *local_218;
  undefined1 local_20f;
  undefined1 local_20e;
  undefined1 local_20d;
  undefined1 local_20c;
  undefined1 local_20b;
  undefined1 local_20a;
  undefined1 local_209;
  undefined *local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  code *local_1f8;
  undefined *local_1f0;
  undefined1 *local_1e8;
  undefined8 local_1e0;
  undefined1 auStack_1d8 [8];
  byte local_1d0;
  undefined *local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  code *local_1b8;
  undefined *local_1b0;
  undefined8 local_1a8;
  undefined1 auStack_1a0 [8];
  undefined *local_198;
  undefined4 local_190;
  undefined4 local_18c;
  code *local_188;
  undefined *local_180;
  undefined8 local_178;
  undefined1 auStack_170 [8];
  undefined *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  code *local_158;
  undefined *local_150;
  undefined8 local_148;
  undefined1 auStack_140 [8];
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  undefined8 local_118;
  undefined1 auStack_110 [8];
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [8];
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [8];
  undefined *local_a8;
  byte local_9d;
  undefined1 *local_90;
  undefined1 auStack_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  SEL local_70;
  ID local_68;
  ID local_60;
  ID local_58;
  ID local_50;
  ID local_48;
  ID local_40;
  ID local_38;
  ID local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_78 = 0;
  local_70 = param_2;
  local_68 = param_1;
  _objc_storeStrong(&local_78,param_3);
  local_80 = 0;
  _objc_storeStrong(&local_80,param_4);
  _objc_initWeak(auStack_88,local_68);
  puVar3 = PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  local_90 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isPluginHidden__026b4460,local_78);
  IVar4 = local_68;
  puVar13 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_9d = (byte)puVar3;
  local_d8 = PTR___NSConcreteStackBlock_02578660;
  local_d0 = 0xc2000000;
  local_cc = 0;
  local_c8 = FUN_0178af2c;
  local_c0 = &DAT_02579c60;
  _objc_copyWeak(auStack_b0,auStack_88);
  uVar11 = local_78;
  local_20f = 1;
  (*(code *)PTR__objc_retain_02578638)();
  local_b8 = uVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar4,PTR_s_menuActionWithTitle_handler__026b4740,&cf_n_v,&local_d8);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_68;
  local_108 = PTR___NSConcreteStackBlock_02578660;
  local_100 = 0xc2000000;
  local_fc = 0;
  local_f8 = FUN_0178af98;
  local_f0 = &DAT_02579c60;
  local_60 = IVar4;
  _objc_copyWeak(auStack_e0,auStack_88);
  uVar11 = local_78;
  local_20e = 1;
  (*(code *)PTR__objc_retain_02578638)();
  local_e8 = uVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar5,PTR_s_menuActionWithTitle_handler__026b4740,&cf_n__,&local_108);
  _objc_retainAutoreleasedReturnValue();
  IVar6 = local_68;
  local_138 = PTR___NSConcreteStackBlock_02578660;
  local_130 = 0xc2000000;
  local_12c = 0;
  local_128 = FUN_0178b004;
  local_120 = &DAT_02579c60;
  local_58 = IVar5;
  _objc_copyWeak(auStack_110,auStack_88);
  uVar11 = local_78;
  local_20d = 1;
  (*(code *)PTR__objc_retain_02578638)();
  local_118 = uVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar6,PTR_s_menuActionWithTitle_handler__026b4740,&cf_Ny,&local_138);
  _objc_retainAutoreleasedReturnValue();
  IVar7 = local_68;
  local_168 = PTR___NSConcreteStackBlock_02578660;
  local_160 = 0xc2000000;
  local_15c = 0;
  local_158 = FUN_0178b070;
  local_150 = &DAT_02579c60;
  local_50 = IVar6;
  _objc_copyWeak(auStack_140,auStack_88);
  uVar11 = local_78;
  local_20c = 1;
  (*(code *)PTR__objc_retain_02578638)();
  local_148 = uVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar7,PTR_s_menuActionWithTitle_handler__026b4740,&cf_Ny,&local_168);
  _objc_retainAutoreleasedReturnValue();
  IVar8 = local_68;
  local_198 = PTR___NSConcreteStackBlock_02578660;
  local_190 = 0xc2000000;
  local_18c = 0;
  local_188 = FUN_0178b0dc;
  local_180 = &DAT_02579c60;
  local_48 = IVar7;
  _objc_copyWeak(auStack_170,auStack_88);
  uVar11 = local_78;
  local_20b = 1;
  (*(code *)PTR__objc_retain_02578638)();
  local_178 = uVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar8,PTR_s_menuActionWithTitle_handler__026b4740,&cf__TT,&local_198);
  _objc_retainAutoreleasedReturnValue();
  IVar9 = local_68;
  local_1c8 = PTR___NSConcreteStackBlock_02578660;
  local_1c0 = 0xc2000000;
  local_1bc = 0;
  local_1b8 = FUN_0178b140;
  local_1b0 = &DAT_02579c60;
  local_40 = IVar8;
  _objc_copyWeak(auStack_1a0,auStack_88);
  uVar11 = local_78;
  local_20a = 1;
  (*(code *)PTR__objc_retain_02578638)();
  local_1a8 = uVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar9,PTR_s_menuActionWithTitle_handler__026b4740,&cf_Hr_gS,&local_1c8);
  _objc_retainAutoreleasedReturnValue();
  IVar12 = local_68;
  pcVar2 = &cf_Sm;
  if ((local_9d & 1) == 0) {
    pcVar2 = &::cf__;
  }
  local_208 = PTR___NSConcreteStackBlock_02578660;
  local_200 = 0xc2000000;
  local_1fc = 0;
  local_1f8 = FUN_0178b1a4;
  local_1f0 = &DAT_02588a60;
  puVar10 = local_90;
  local_38 = IVar9;
  (*(code *)PTR__objc_retain_02578638)();
  local_1d0 = local_9d & 1;
  uVar11 = local_78;
  local_1e8 = puVar10;
  (*(code *)PTR__objc_retain_02578638)();
  local_1e0 = uVar11;
  _objc_copyWeak(auStack_1d8,auStack_88);
  local_209 = 1;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar12,PTR_s_menuActionWithTitle_handler__026b4740,pcVar2,&local_208);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = IVar12;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,7);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar13,PTR_s_arrayWithArray__0269eab8);
  _objc_retainAutoreleasedReturnValue();
  local_209 = 0;
  local_20a = 0;
  local_20b = 0;
  local_20c = 0;
  local_20d = 0;
  local_20e = 0;
  local_20f = 0;
  local_a8 = puVar13;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(IVar12);
  (*(code *)PTR__objc_release_02578630)(IVar9);
  (*(code *)PTR__objc_release_02578630)(IVar8);
  (*(code *)PTR__objc_release_02578630)(IVar7);
  (*(code *)PTR__objc_release_02578630)(IVar6);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  local_219 = 0;
  puVar10 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_groupingEnabled_026b45c8);
  bVar1 = false;
  if (((ulong)puVar10 & 1) != 0) {
    puVar10 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_groupDefinitions_026b4430);
    _objc_retainAutoreleasedReturnValue();
    local_219 = 1;
    local_218 = puVar10;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = (undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar10;
  }
  if ((local_219 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_218);
  }
  IVar4 = local_68;
  puVar13 = local_a8;
  if (bVar1) {
    local_258 = PTR___NSConcreteStackBlock_02578660;
    local_250 = 0xc2000000;
    local_24c = 0;
    local_248 = FUN_0178b270;
    local_240 = &DAT_0257c978;
    _objc_copyWeak(auStack_228,auStack_88);
    uVar11 = local_78;
    (*(code *)PTR__objc_retain_02578638)();
    uVar14 = local_80;
    local_238 = uVar11;
    (*(code *)PTR__objc_retain_02578638)();
    local_230 = uVar14;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar4,PTR_s_menuActionWithTitle_handler__026b4740,&cf_bcR_,&local_258);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar13,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_storeStrong(&local_230);
    _objc_storeStrong(&local_238,0);
    _objc_destroyWeak(auStack_228);
  }
  puVar13 = local_a8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_a8);
  _objc_destroyWeak(auStack_1d8);
  _objc_storeStrong(&local_1e0,0);
  _objc_storeStrong(&local_1e8,0);
  _objc_storeStrong(&local_1a8,0);
  _objc_destroyWeak(auStack_1a0);
  _objc_storeStrong(&local_178,0);
  _objc_destroyWeak(auStack_170);
  _objc_storeStrong(&local_148,0);
  _objc_destroyWeak(auStack_140);
  _objc_storeStrong(&local_118,0);
  _objc_destroyWeak(auStack_110);
  _objc_storeStrong(&local_e8,0);
  _objc_destroyWeak(auStack_e0);
  _objc_storeStrong(&local_b8,0);
  _objc_destroyWeak(auStack_b0);
  _objc_storeStrong(&local_90,0);
  _objc_destroyWeak(auStack_88);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar13;
}

