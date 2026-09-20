// presentMemberManagerForGroupId:fromViewController:completion: @ 01ac4008

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x28 bytes */

void WCRefineGroupManagementViewController::
     presentMemberManagerForGroupId_fromViewController_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  char *local_d0;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  char *local_70;
  char *local_68;
  undefined *local_60;
  undefined4 local_54;
  undefined *local_50;
  undefined8 local_48;
  long local_40 [3];
  ID local_28;
  
  local_40[1] = 0;
  local_40[2] = param_2;
  local_28 = param_1;
  _objc_storeStrong(local_40 + 1,param_3);
  local_40[0] = 0;
  _objc_storeStrong(local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  puVar2 = PTR_WCRefineGroupManager_026ce2b8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if ((local_50 == (undefined *)0x0) || (local_40[0] == 0)) {
    local_54 = 1;
  }
  else {
    puVar2 = PTR_WCRGroupListViewController_026cf330;
    _objc_alloc();
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manageScopeForGroup__026bdf68,local_50);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_initWithManageScope__026bdf60,IVar4);
    local_60 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setExternalCompletion__026bdf70,local_48);
    local_d0 = "MMUINavigationController";
    _objc_getClass();
    if (local_d0 == (char *)0x0) {
      local_d0 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    }
    local_68 = local_d0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    lVar1 = local_40[0];
    puVar2 = local_60;
    local_a0 = PTR___NSConcreteStackBlock_02578660;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = FUN_01ac4308;
    local_88 = &DAT_0257a7a0;
    local_70 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    puVar3 = local_50;
    local_80 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_presentViewController_animated_c_0269d2b0,local_d0,1,&local_a0);
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_60,0);
    local_54 = 0;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(local_40,0);
  _objc_storeStrong(local_40 + 1,0);
  return;
}

