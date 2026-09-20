// initWithTitle:groupId:items:mainFrame: @ 00359210

/* Function Stack Size: 0x30 bytes */

ID __thiscall
WCRGroupingSessionListViewController::initWithTitle_groupId_items_mainFrame_
          (WCRGroupingSessionListViewController *this,ID param_1,SEL param_2,ID param_3,ID param_4,
          ID param_5,ID param_6)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  cfstringStruct *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 in_d0;
  long local_d0;
  cfstringStruct *local_b0;
  long local_70;
  undefined8 *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
  SEL local_30;
  ID *local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = (ID *)param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  _CACurrentMediaTime();
  local_68 = local_28;
  local_28 = (ID *)0x0;
  ppuVar2 = &local_68;
  local_60 = PTR_WCRGroupingSessionListViewController_026cf878;
  local_58 = in_d0;
  _objc_msgSendSuper2(ppuVar2,PTR_s_initWithNibName_bundle__026a2600,0);
  local_28 = (ID *)ppuVar2;
  _objc_storeStrong(&local_28);
  if (ppuVar2 != (undefined8 **)0x0) {
    *(undefined8 *)((long)local_28 + (long)_openStartedAt) = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTitle__0269cef0,local_38);
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
    local_b0 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_b0 = &::cf___;
    }
    _objc_storeStrong((long)local_28 + (long)_groupId,local_b0);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    uVar4 = *(undefined8 *)((long)local_28 + (long)_groupId);
    FUN_003595c8();
    *(undefined8 *)((long)local_28 + (long)_sortMode) = uVar4;
    lVar5 = *(long *)((long)local_28 + (long)_groupId);
    FUN_003599ec(lVar5,local_48,*(undefined8 *)((long)local_28 + (long)_sortMode));
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_d0 = lVar6;
    if (lVar6 == 0) {
      local_d0 = *(long *)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_d0;
    (*(code *)PTR__objc_release_02578630)(lVar6);
    (*(code *)PTR__objc_release_02578630)(lVar5);
    _objc_storeStrong((long)local_28 + (long)_allItems,local_70);
    _objc_storeStrong((long)local_28 + (long)_items,local_70);
    _objc_storeWeak((long)local_28 + (long)_mainFrame,local_50);
    puVar7 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setHidesBottomBarWhenPushed__0269db60,(uint)puVar8 ^ 1);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setEdgesForExtendedLayout__026a1c38,0xf);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_setExtendedLayoutIncludesOpaqueB_026a1c30,1);
    _objc_storeStrong(&local_70,0);
  }
  pIVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return (ID)(undefined8 **)pIVar1;
}

