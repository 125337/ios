// pluginRegistryDidChange: @ 017824c0

/* Function Stack Size: 0x18 bytes */

void WCPluginsViewControllerBehavior::pluginRegistryDidChange_(ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ID local_50;
  uint local_48;
  undefined1 local_41;
  ID local_40;
  byte local_31;
  ID local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  DAT_028e3ff8 = DAT_028e3ff8 + 1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPageDataDirty__026b45c0,1);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  IVar4 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_31 = 0;
  local_41 = 0;
  uVar1 = IVar4 == local_18;
  bVar2 = true;
  if ((bool)uVar1) {
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewIfLoaded_026a1fc8);
    _objc_retainAutoreleasedReturnValue();
    local_31 = 1;
    local_30 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    bVar2 = IVar5 == 0;
    local_41 = uVar1;
    local_40 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar5);
    uVar1 = local_41;
  }
  local_41 = uVar1;
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar3);
  puVar6 = PTR___dispatch_main_q_02578680;
  if (!bVar2) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_18;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_01782768;
    local_58 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = IVar3;
    _dispatch_async(puVar6,&local_70);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_storeStrong(&local_50,0);
  }
  local_48 = (uint)bVar2;
  _objc_storeStrong(&local_28,0);
  return;
}

