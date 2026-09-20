// openGroupForId: @ 01abdb6c

/* Function Stack Size: 0x18 bytes */

void WCRGroupListViewController::openGroupForId_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *local_d0;
  char *local_90;
  char *local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined1 auStack_60 [24];
  undefined *local_48;
  undefined1 auStack_40 [8];
  undefined *local_38;
  undefined4 local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_2c = 1;
  }
  else {
    puVar2 = PTR_WCRefineGroupManager_026ce2b8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_kind_026a27e8);
    if ((puVar2 == (undefined *)0x0) ||
       (puVar2 = local_38, FUN_01ab51b4(), ((ulong)puVar2 & 1) != 0)) {
      _objc_initWeak(auStack_40,local_18);
      puVar3 = PTR_WCRGroupCreateViewController_026cf318;
      _objc_alloc();
      puVar2 = local_38;
      local_80 = PTR___NSConcreteStackBlock_02578660;
      local_78 = 0xc2000000;
      local_74 = 0;
      local_70 = FUN_01abde80;
      local_68 = &DAT_0257be28;
      _objc_copyWeak(auStack_60,auStack_40);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_initWithGroup_completion__026bdef8,puVar2,&local_80);
      local_d0 = "MMUINavigationController";
      local_48 = puVar3;
      _objc_getClass();
      if (local_d0 == (char *)0x0) {
        local_d0 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      }
      local_88 = local_d0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_initWithRootViewController__0269d2a0,local_48);
      local_90 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_presentViewController_animated_c_0269d2b0,local_d0,1,0);
      local_2c = 1;
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_48,0);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_40);
    }
    else {
      local_2c = 0;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

