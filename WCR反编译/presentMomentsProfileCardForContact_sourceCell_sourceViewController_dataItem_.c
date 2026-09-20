// presentMomentsProfileCardForContact:sourceCell:sourceViewController:dataItem: @ 0153a534

/* Function Stack Size: 0x30 bytes */

void WCRefineTopBarProfileCardPresenter::
     presentMomentsProfileCardForContact_sourceCell_sourceViewController_dataItem_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  ID local_60;
  uint local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  puVar5 = PTR___dispatch_main_q_02578680;
  bVar1 = local_38 != 0;
  if (bVar1) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_40;
    local_a0 = PTR___NSConcreteStackBlock_02578660;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = FUN_0153a74c;
    local_88 = &DAT_0257d7c8;
    (*(code *)PTR__objc_retain_02578638)();
    uVar3 = local_48;
    local_80 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    uVar2 = local_50;
    local_78 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    lVar4 = local_38;
    local_70 = uVar2;
    local_60 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = lVar4;
    _dispatch_async(puVar5,&local_a0);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_80,0);
  }
  local_54 = (uint)!bVar1;
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

