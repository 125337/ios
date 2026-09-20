// initWithTitle:paths:grouped:clearBlock: @ 019ad270

/* Function Stack Size: 0x2c bytes */

ID WCRFilePathListViewController::initWithTitle_paths_grouped_clearBlock_
             (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5,ID param_6,
             undefined4 param_7)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *local_50;
  undefined *local_48;
  undefined8 local_40;
  byte local_31;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (ID *)param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_31 = (byte)param_5;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  local_50 = local_18;
  local_18 = (ID *)0x0;
  ppuVar2 = &local_50;
  local_48 = PTR_WCRFilePathListViewController_026cfd50;
  _objc_msgSendSuper2(ppuVar2,PTR_s_init_026ca6a8);
  local_18 = (ID *)ppuVar2;
  _objc_storeStrong(&local_18);
  if ((undefined8 **)local_18 != (undefined8 **)0x0) {
    uVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
    uVar4 = *(undefined8 *)((long)local_18 + (long)_pageTitle);
    *(undefined8 *)((long)local_18 + (long)_pageTitle) = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
    uVar4 = *(undefined8 *)((long)local_18 + (long)_paths);
    *(undefined8 *)((long)local_18 + (long)_paths) = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    *(byte *)((long)local_18 + (long)_grouped) = local_31 & 1;
    uVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
    uVar4 = *(undefined8 *)((long)local_18 + (long)_clearBlock);
    *(undefined8 *)((long)local_18 + (long)_clearBlock) = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar4);
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return (ID)(undefined8 **)pIVar1;
}

