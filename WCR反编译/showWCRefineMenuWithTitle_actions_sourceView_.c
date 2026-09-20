// showWCRefineMenuWithTitle:actions:sourceView: @ 0178bc40

/* Function Stack Size: 0x28 bytes */

void WCPluginsViewControllerBehavior::showWCRefineMenuWithTitle_actions_sourceView_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_d0;
  undefined8 uVar5;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  ID local_f0;
  cfstringStruct *local_80;
  undefined *local_78;
  undefined *local_70;
  ID local_68;
  byte local_59;
  ID local_58;
  ID local_50;
  ID local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_59 = 0;
  bVar1 = local_48 == 0;
  if (bVar1) {
    local_f0 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_f0;
  }
  else {
    local_f0 = local_48;
  }
  local_59 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_f0;
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  IVar2 = local_50;
  _objc_getAssociatedObject(local_50,&DAT_028e4008);
  _objc_retainAutoreleasedReturnValue();
  local_68 = IVar2;
  if (IVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_removeInteraction__0269fdd8,IVar2);
  }
  puVar3 = PTR_WCRefinePluginContextMenuDelegate_026cefd0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginContextMenuDelegate_026cefd0,PTR_s_new_0269d288);
  local_70 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setActions__0269f1c0,local_40);
  puVar3 = PTR__OBJC_CLASS___UIContextMenuInteraction_026ce3c8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_78 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addInteraction__0269fde8,puVar3);
  _objc_setAssociatedObject(local_50,&DAT_028e4009,local_70);
  _objc_setAssociatedObject(local_50,&DAT_028e4008,local_78,1);
  local_80 = &cf__presentMenuAtLocation_;
  _NSSelectorFromString();
  puVar3 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_respondsToSelector__026ca818,local_80);
  if (((ulong)puVar3 & 1) == 0) {
    local_80 = &cf_presentMenuAtLocation_;
    _NSSelectorFromString();
  }
  puVar4 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_respondsToSelector__026ca818,local_80);
  puVar3 = local_78;
  if (((ulong)puVar4 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_showFallbackMenuWithTitle_action_026b4788,local_38,local_40,local_50);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
    _CGRectGetMidX();
    uVar5 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
    _CGRectGetMidY(uVar5,in_d1,in_d2,in_d3);
    FUN_01783fc4();
    (*(code *)PTR__objc_msgSend_02578628)(in_d0,uVar5,puVar3,local_80);
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

