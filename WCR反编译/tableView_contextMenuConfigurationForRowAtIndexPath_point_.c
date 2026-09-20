// tableView:contextMenuConfigurationForRowAtIndexPath:point: @ 01bda90c

/* Function Stack Size: 0x30 bytes */

ID __thiscall
WCRefineMomentsCacheViewController::tableView_contextMenuConfigurationForRowAtIndexPath_point_
          (WCRefineMomentsCacheViewController *this,ID param_1,SEL param_2,ID param_3,ID param_4,
          CGPoint param_5)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID local_110;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  ID local_a8;
  ID local_a0;
  undefined1 auStack_98 [8];
  byte local_90;
  byte local_8f;
  undefined1 auStack_80 [10];
  byte local_76;
  byte local_75;
  undefined4 local_74;
  ID local_70;
  ID local_68;
  ID local_60;
  undefined8 local_58;
  undefined8 local_50;
  SEL local_48;
  ID local_40;
  undefined *local_28;
  
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3,param_3,param_4,param_5.field0_0x0,param_5.field1_0x8);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_4);
  IVar1 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_itemAtIndexPath__026c08a0,local_58);
  _objc_retainAutoreleasedReturnValue();
  local_60 = IVar1;
  FUN_01bc758c();
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_60;
  local_68 = IVar1;
  FUN_01bc7610();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_68;
  local_70 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    local_28 = (undefined *)0x0;
    local_74 = 1;
  }
  else {
    puVar3 = PTR_WCRefineMomentsMonitor_026ce718;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_sharedInstance_0269cd30);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_75 = (byte)puVar4;
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_76 = (byte)puVar5;
    _objc_initWeak(auStack_80,local_40);
    puVar3 = PTR__OBJC_CLASS___UIContextMenuConfiguration_026ce380;
    IVar1 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    if (IVar1 == 0) {
      local_110 = local_68;
    }
    else {
      local_110 = local_70;
    }
    local_c8 = PTR___NSConcreteStackBlock_02578660;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = FUN_01bdacec;
    local_b0 = &DAT_0258b900;
    _objc_copyWeak(auStack_98,auStack_80);
    IVar2 = local_60;
    (*(code *)PTR__objc_retain_02578638)();
    IVar1 = local_68;
    local_a8 = IVar2;
    local_90 = local_75 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = IVar1;
    local_8f = local_76 & 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_configurationWithIdentifier_prev_0269fb30,local_110,0,&local_c8);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar3;
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(&local_a8,0);
    _objc_destroyWeak(auStack_98);
    local_74 = 1;
    _objc_destroyWeak(auStack_80);
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

