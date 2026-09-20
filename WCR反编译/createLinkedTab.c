// createLinkedTab @ 01e48f84

/* Function Stack Size: 0x10 bytes */

void WCRefineTelegramGroupingTabsViewController::createLinkedTab(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 auStack_40 [24];
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_initWeak(auStack_28,param_1);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  IVar1 = local_18;
  uVar3 = *(undefined8 *)PTR____NSArray0___02578280;
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_01e490b8;
  local_48 = &DAT_0258c840;
  _objc_copyWeak(auStack_40,auStack_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_selectLinkedGroupsFrom_selected__026bdca8,IVar1,uVar3,0,&local_60);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_28);
  return;
}

