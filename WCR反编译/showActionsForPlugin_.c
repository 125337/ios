// showActionsForPlugin: @ 01c7da20

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefinePluginHubGroupManagerViewController::showActionsForPlugin_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined1 auStack_b8 [8];
  byte local_b0;
  undefined1 local_a9;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined1 auStack_80 [15];
  byte local_71;
  undefined *local_70;
  undefined *local_68 [3];
  byte local_49;
  undefined1 auStack_48 [8];
  undefined *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar3 = PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar3;
  _objc_initWeak(auStack_48,local_28);
  puVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isPluginHidden__026b4460,local_38);
  local_49 = (byte)puVar3;
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_71 = 0;
  puVar6 = local_40;
  local_68[0] = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_groupingEnabled_026b45c8);
  bVar1 = false;
  if (((ulong)puVar6 & 1) != 0) {
    puVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_groupDefinitions_026b4430);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_70 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = puVar3 != (undefined *)0x0;
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  IVar5 = local_28;
  puVar3 = local_68[0];
  if (bVar1) {
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_01c7e004;
    local_90 = &DAT_02579c60;
    _objc_copyWeak(auStack_80,auStack_48);
    local_a9 = 1;
    uVar4 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar5,PTR_s_menuActionWithTitle_block__026c27a8,&cf_bcR_,&local_a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
    local_a9 = 0;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    _objc_storeStrong(&local_88,0);
    _objc_destroyWeak(auStack_80);
  }
  IVar5 = local_28;
  puVar3 = local_68[0];
  pcVar2 = &cf_Sm;
  if ((local_49 & 1) == 0) {
    pcVar2 = &::cf__;
  }
  local_e8 = PTR___NSConcreteStackBlock_02578660;
  local_e0 = 0xc2000000;
  local_dc = 0;
  local_d8 = FUN_01c7e068;
  local_d0 = &DAT_02588a60;
  puVar6 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = local_49 & 1;
  uVar4 = local_38;
  local_c8 = puVar6;
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = uVar4;
  _objc_copyWeak(auStack_b8,auStack_48);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar5,PTR_s_menuActionWithTitle_block__026c27a8,pcVar2,&local_e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
  (*(code *)PTR__objc_release_02578630)(IVar5);
  IVar5 = local_28;
  puVar3 = local_68[0];
  puVar6 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_displayTitleForPlugin__026b1a30,local_38);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_showNativeActions_title__026c27c0,puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  _objc_destroyWeak(auStack_b8);
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(local_68,0);
  _objc_destroyWeak(auStack_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

