// showActionsForGroup:index: @ 01c7c238

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRefinePluginHubGroupManagerViewController::showActionsForGroup_index_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  ID IVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  undefined8 local_118;
  undefined1 auStack_110 [15];
  undefined1 local_101;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  undefined1 auStack_e0 [8];
  unsigned_long_long local_d8;
  undefined1 local_c9;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [8];
  unsigned_long_long local_a0;
  undefined1 local_95;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined1 auStack_60 [8];
  undefined *local_58;
  undefined1 auStack_50 [8];
  undefined1 *local_48;
  unsigned_long_long local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar1 = PTR_WCRefinePluginHubManager_026ce800;
  local_40 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_initWeak(auStack_50,local_28);
  IVar3 = local_28;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_88 = PTR___NSConcreteStackBlock_02578660;
  local_80 = 0xc2000000;
  local_7c = 0;
  local_78 = FUN_01c7c99c;
  local_70 = &DAT_02579c60;
  _objc_copyWeak(auStack_60,auStack_50);
  uVar5 = local_38;
  local_95 = 1;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_menuActionWithTitle_block__026c27a8,&cf__TT,&local_88);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_arrayWithObject__0269d538);
  _objc_retainAutoreleasedReturnValue();
  local_95 = 0;
  local_58 = puVar1;
  (*(code *)PTR__objc_release_02578630)(IVar3);
  IVar3 = local_28;
  puVar1 = local_58;
  if (local_40 != 0) {
    local_c8 = PTR___NSConcreteStackBlock_02578660;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = FUN_01c7ca00;
    local_b0 = &DAT_025799c0;
    local_a0 = local_40;
    _objc_copyWeak(auStack_a8,auStack_50);
    local_c9 = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_menuActionWithTitle_block__026c27a8,&cf_Ny,&local_c8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
    local_c9 = 0;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_destroyWeak(auStack_a8);
  }
  puVar2 = (undefined1 *)(local_40 + 1);
  puVar4 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
  IVar3 = local_28;
  puVar1 = local_58;
  if (puVar2 < puVar4) {
    local_100 = PTR___NSConcreteStackBlock_02578660;
    local_f8 = 0xc2000000;
    local_f4 = 0;
    local_f0 = FUN_01c7cab8;
    local_e8 = &DAT_025799c0;
    local_d8 = local_40;
    _objc_copyWeak(auStack_e0,auStack_50);
    local_101 = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_menuActionWithTitle_block__026c27a8,&cf_Ny,&local_100);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
    local_101 = 0;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_destroyWeak(auStack_e0);
  }
  puVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
  IVar3 = local_28;
  puVar1 = local_58;
  if ((undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar2) {
    local_138 = PTR___NSConcreteStackBlock_02578660;
    local_130 = 0xc2000000;
    local_12c = 0;
    local_128 = FUN_01c7cb70;
    local_120 = &DAT_02579c60;
    uVar5 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_118 = uVar5;
    _objc_copyWeak(auStack_110,auStack_50);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_menuActionWithTitle_block__026c27a8,&cf_Rd,&local_138);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _objc_destroyWeak(auStack_110);
    _objc_storeStrong(&local_118,0);
  }
  IVar3 = local_28;
  puVar1 = local_58;
  uVar5 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_showNativeActions_title__026c27c0,puVar1);
  (*(code *)PTR__objc_release_02578630)(uVar5);
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_68,0);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  return;
}

