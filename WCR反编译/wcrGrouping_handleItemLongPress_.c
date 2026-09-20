// wcrGrouping_handleItemLongPress: @ 0036ca24

/* Function Stack Size: 0x18 bytes */

void WCRGroupingSessionListViewController::wcrGrouping_handleItemLongPress_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  ID IVar10;
  ID local_128;
  uint local_10c;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  undefined1 auStack_e8 [8];
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  ID local_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [8];
  ID local_98;
  byte local_89;
  ID local_88;
  bool local_79;
  ID local_78;
  byte local_69;
  ID local_68;
  ID local_60;
  ulong local_58;
  long local_50;
  uint local_48;
  byte local_41;
  undefined *local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
  local_41 = 0;
  local_10c = 1;
  if (uVar3 == 1) {
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_10c = (uint)puVar4 ^ 1;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if ((local_10c & 1) == 0) {
    local_50 = 0;
    uVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar3;
    while (uVar3 = local_58, local_58 != 0) {
      puVar4 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      if ((uVar3 & 1) != 0) {
        _objc_storeStrong(&local_50,local_58);
        break;
      }
      uVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_58;
      local_58 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    local_48 = 2;
    _objc_storeStrong(&local_58,0);
    local_69 = 0;
    local_79 = false;
    bVar1 = local_50 == 0;
    if (bVar1) {
      local_128 = 0;
    }
    else {
      local_128 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tableView_0269e378);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_128;
    }
    local_79 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_128;
    if ((local_79 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    local_89 = 0;
    bVar1 = true;
    if (local_60 != 0) {
      IVar6 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_row_0269e210);
      bVar1 = true;
      if (-1 < (long)IVar6) {
        IVar6 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_row_0269e210);
        IVar7 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_items_0269e4b0);
        _objc_retainAutoreleasedReturnValue();
        local_89 = 1;
        local_88 = IVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = (long)IVar7 <= (long)IVar6;
      }
    }
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    if (!bVar1) {
      IVar6 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_items_0269e4b0);
      _objc_retainAutoreleasedReturnValue();
      IVar7 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_row_0269e210);
      IVar8 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_objectAtIndexedSubscript__0269cc78,IVar7);
      _objc_retainAutoreleasedReturnValue();
      local_98 = IVar8;
      (*(code *)PTR__objc_release_02578630)(IVar6);
      _objc_initWeak(auStack_a0,local_28);
      IVar8 = local_28;
      IVar9 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mainFrame_026a2610);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = local_98;
      IVar10 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_groupId_0269ea88);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = local_50;
      puVar4 = PTR___NSConcreteStackBlock_02578660;
      local_e0 = PTR___NSConcreteStackBlock_02578660;
      local_d8 = 0xc2000000;
      local_d4 = 0;
      local_d0 = FUN_0036ed94;
      local_c8 = &DAT_02579c60;
      _objc_copyWeak();
      IVar7 = local_98;
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = IVar7;
      local_108 = puVar4;
      local_100 = 0xc2000000;
      local_fc = 0;
      local_f8 = FUN_0036ee08;
      local_f0 = &DAT_0257be28;
      _objc_copyWeak(auStack_e8,auStack_a0);
      FUN_0036d100(IVar8,IVar9,IVar6,IVar10,lVar2,&local_e0,&local_108);
      (*(code *)PTR__objc_release_02578630)(IVar10);
      (*(code *)PTR__objc_release_02578630)(IVar9);
      _objc_destroyWeak(auStack_e8);
      _objc_storeStrong(&local_c0);
      _objc_destroyWeak(auStack_b8);
      _objc_destroyWeak(auStack_a0);
      _objc_storeStrong(&local_98,0);
    }
    local_48 = (uint)bVar1;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_50,0);
  }
  else {
    local_48 = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

