// showFloatingButtonLongPressActionPicker: @ 019c1834

/* Function Stack Size: 0x18 bytes */

void WCRefineFloatingTabBarSettingsViewController::showFloatingButtonLongPressActionPicker_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined1 auStack_60 [8];
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHaptic_026bab98);
  _objc_initWeak(auStack_30,local_18);
  IVar3 = local_18;
  puVar2 = PTR_WCRefineBottomBarLongPressActionSelector_026ce258;
  puVar1 = PTR___NSConcreteStackBlock_02578660;
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_019c1aa8;
  local_40 = &DAT_0258a8a8;
  _objc_copyWeak(auStack_38,auStack_30);
  local_80 = puVar1;
  local_78 = 0xc2000000;
  local_74 = 0;
  local_70 = FUN_019c1c64;
  local_68 = &DAT_0258a8d8;
  _objc_copyWeak(auStack_60,auStack_30);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_showActionSelectorForButtonIndex_026b6c60,0,IVar3,&cf_c_cR_O,
             &PTR___NSConcreteGlobalBlock_0258a948,&local_58,&local_80);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_28,0);
  return;
}

