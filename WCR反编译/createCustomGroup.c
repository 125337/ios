// createCustomGroup @ 01e49824

/* Function Stack Size: 0x10 bytes */

void WCRefineTelegramGroupingTabsViewController::createCustomGroup(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_initWeak(auStack_28,param_1);
  IVar2 = local_18;
  puVar1 = PTR_WCRefineGroupManagementViewController_026ce580;
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_01e49918;
  local_38 = &DAT_0257be28;
  _objc_copyWeak(auStack_30,auStack_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_presentCreateGroupFromViewContro_026bdf48,IVar2,1,&local_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}

