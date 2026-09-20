// createGroup @ 01abd8bc

/* Function Stack Size: 0x10 bytes */

void WCRGroupListViewController::createGroup(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  char *local_b8;
  char *local_78;
  char *local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [24];
  undefined *local_30;
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_WCRGroupCreateViewController_026cf318;
  _objc_alloc();
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_newGroupName_026bdee0);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_customScope_026bdee8);
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_01abdb1c;
  local_50 = &DAT_0257be28;
  _objc_copyWeak(auStack_48,auStack_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_initWithDefaultName_initialScope_026bdef0,IVar2,IVar3,&local_68);
  local_30 = puVar1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_b8 = "MMUINavigationController";
  _objc_getClass();
  if (local_b8 == (char *)0x0) {
    local_b8 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  }
  local_70 = local_b8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_initWithRootViewController__0269d2a0,local_30);
  local_78 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_b8,1,0);
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_30,0);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}

