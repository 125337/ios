// presentActionPickerForTab: @ 019b78bc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineFloatingTabBarButtonActionViewController::presentActionPickerForTab_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long_long lVar3;
  ID IVar4;
  undefined **ppuVar5;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined1 auStack_a0 [8];
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [8];
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined1 auStack_50 [8];
  undefined **local_48;
  undefined1 auStack_40 [8];
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hapticGenerator_026b5f48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_initWeak(auStack_40,local_28);
  puVar1 = PTR___NSConcreteStackBlock_02578660;
  ppuVar5 = &local_70;
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_019b7b04;
  local_58 = &DAT_0258a878;
  _objc_copyWeak(auStack_50,auStack_40);
  _objc_retainBlock();
  IVar4 = local_28;
  lVar3 = local_38;
  puVar2 = PTR_WCRefineBottomBarLongPressActionSelector_026ce258;
  local_98 = puVar1;
  local_90 = 0xc2000000;
  local_8c = 0;
  local_88 = FUN_019b7c28;
  local_80 = &DAT_0258a8a8;
  local_48 = ppuVar5;
  _objc_copyWeak(auStack_78,auStack_40);
  local_c0 = puVar1;
  local_b8 = 0xc2000000;
  local_b4 = 0;
  local_b0 = FUN_019b7d9c;
  local_a8 = &DAT_0258a8d8;
  _objc_copyWeak(auStack_a0,auStack_40);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_showActionSelectorForButtonIndex_026b6c60,lVar3,IVar4,&cf_bd_O,ppuVar5,
             &local_98,&local_c0);
  _objc_destroyWeak(auStack_a0);
  _objc_destroyWeak(auStack_78);
  _objc_storeStrong(&local_48,0);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_40);
  return;
}

