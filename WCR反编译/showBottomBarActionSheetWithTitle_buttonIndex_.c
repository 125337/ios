// showBottomBarActionSheetWithTitle:buttonIndex: @ 01a48b94

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRefineGeneralFunctionViewController::showBottomBarActionSheetWithTitle_buttonIndex_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined *puVar1;
  long_long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined1 auStack_88 [8];
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  ID local_50;
  undefined *local_48;
  long_long local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_48 = (undefined *)0x0;
  local_40 = param_4;
  if (param_4 == 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_48;
    local_48 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  else if (param_4 == 1) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_48;
    local_48 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  else if (param_4 == 2) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_48;
    local_48 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  else if (param_4 == 3) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_48;
    local_48 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_getBottomBarActionDisplayName__026bbf38,local_48);
  _objc_retainAutoreleasedReturnValue();
  local_50 = IVar5;
  _objc_initWeak(auStack_58,local_28);
  IVar5 = local_28;
  lVar2 = local_40;
  puVar3 = PTR_WCRefineBottomBarLongPressActionSelector_026ce258;
  puVar1 = PTR___NSConcreteStackBlock_02578660;
  local_80 = PTR___NSConcreteStackBlock_02578660;
  local_78 = 0xc2000000;
  local_74 = 0;
  local_70 = FUN_01a48f7c;
  local_68 = &DAT_0258a8a8;
  _objc_copyWeak(auStack_60,auStack_58);
  local_a8 = puVar1;
  local_a0 = 0xc2000000;
  local_9c = 0;
  local_98 = FUN_01a49014;
  local_90 = &DAT_0258a8d8;
  _objc_copyWeak(auStack_88,auStack_58);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_showActionSelectorForButtonIndex_026bca50,lVar2,IVar5,&local_80,&local_a8)
  ;
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  return;
}

