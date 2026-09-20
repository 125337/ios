// configureLongPressForCellManager:plugin: @ 01789de8

/* Function Stack Size: 0x20 bytes */

void WCPluginsViewControllerBehavior::configureLongPressForCellManager_plugin_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  uint local_a8;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined **local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [12];
  uint local_44;
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
  puVar2 = PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_a8 = 1;
  if (((ulong)puVar3 & 1) != 0) {
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_setLongPressAction__026b0118);
    local_a8 = (uint)uVar4 ^ 1;
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  bVar1 = (local_a8 & 1) == 0;
  if (bVar1) {
    _objc_initWeak(auStack_50,local_28);
    _objc_initWeak(auStack_58,local_38);
    ppuVar5 = &local_98;
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_0178a078;
    local_80 = &DAT_02581340;
    _objc_copyWeak(auStack_70,auStack_50);
    uVar4 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = uVar4;
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retainBlock();
    uVar4 = local_38;
    puVar2 = PTR_s_setLongPressAction__026b0118;
    local_60 = ppuVar5;
    _objc_retainBlock();
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,puVar2);
    (*(code *)PTR__objc_release_02578630)(ppuVar5);
    _objc_storeStrong(&local_60);
    _objc_destroyWeak(auStack_68);
    _objc_storeStrong(&local_78,0);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_50);
  }
  local_44 = (uint)!bVar1;
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

