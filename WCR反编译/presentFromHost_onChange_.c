// presentFromHost:onChange: @ 0184b364

/* Function Stack Size: 0x20 bytes */

void WCRefineAvatarScaleSceneFilterViewController::presentFromHost_onChange_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *local_70;
  undefined *local_58;
  ID local_50;
  uint local_48;
  byte local_41;
  undefined *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_41 = 0;
  bVar1 = local_28 == (undefined *)0x0;
  if (bVar1) {
    local_70 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_70;
  }
  else {
    local_70 = local_28;
  }
  local_41 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_70;
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  while( true ) {
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (puVar2 == (undefined *)0x0) break;
    puVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_38;
    local_38 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  bVar1 = local_38 != (undefined *)0x0;
  if (bVar1) {
    IVar4 = local_18;
    _objc_alloc_init();
    local_50 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_setOnChange__026b6850,local_30);
    puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setModalPresentationStyle__0269d2a8,1);
    FUN_0184b5e4(local_58);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_presentViewController_animated_c_0269d2b0,local_58,1);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  local_48 = (uint)!bVar1;
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

