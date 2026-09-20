// editLinkedTab: @ 01e4947c

/* Function Stack Size: 0x18 bytes */

void WCRefineTelegramGroupingTabsViewController::editLinkedTab_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  ID IVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ulong local_50;
  undefined1 auStack_48 [24];
  undefined1 auStack_30 [8];
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_initWeak(auStack_30,local_18);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
  IVar2 = local_18;
  uVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_linkedGroupIds_026b00e8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_preserveLinkedGroups_026a2a80);
  uVar1 = local_28;
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_01e4964c;
  local_58 = &DAT_0258c870;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = uVar1;
  _objc_copyWeak(auStack_48,auStack_30);
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar3,PTR_s_selectLinkedGroupsFrom_selected__026bdca8,IVar2,uVar4,uVar5 & 0xffffffff,
             &local_70);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  _objc_destroyWeak(auStack_48);
  _objc_storeStrong(&local_50);
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_28,0);
  return;
}

