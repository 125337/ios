// removeHistoryRecordsForRecord:removeDuplicateGroup: @ 01b301f0

/* Function Stack Size: 0x1c bytes */

unsigned_long_long __thiscall
WCRefineKeywordAlertHistoryViewController::removeHistoryRecordsForRecord_removeDuplicateGroup_
          (WCRefineKeywordAlertHistoryViewController *this,ID param_1,SEL param_2,ID param_3,
          bool param_4)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 in_d0;
  undefined8 local_140;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  undefined8 local_c8;
  ID local_c0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  ulong local_98;
  ID local_90;
  byte local_81;
  ulong local_80;
  undefined8 local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  uint local_54;
  ID local_50;
  byte local_41;
  ulong local_40;
  SEL local_38;
  ID local_30;
  ID local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_41 = (byte)param_4;
  IVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_historyRecords_026bea70);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_50 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (local_50 == 0) {
    local_28 = 0;
    local_54 = 1;
    goto LAB_01b308c0;
  }
  uVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  FUN_01b1fc40();
  _objc_retainAutoreleasedReturnValue();
  local_60 = uVar5;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_keyword);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  FUN_01b1fc40();
  _objc_retainAutoreleasedReturnValue();
  local_68 = uVar5;
  (*(code *)PTR__objc_release_02578630)(uVar4);
  uVar4 = local_40;
  FUN_01b24660();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_40;
  local_70 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_time);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_81 = 0;
  if ((uVar4 & 1) == 0) {
    local_140 = 0;
  }
  else {
    uVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_time)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_140 = in_d0;
  }
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  (*(code *)PTR__objc_release_02578630)(uVar5);
  local_78 = local_140;
  if (((local_41 & 1) == 0) ||
     (uVar5 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
     IVar2 = local_50, uVar4 = local_70, uVar5 == 0)) {
LAB_01b30658:
    uVar5 = local_40;
    IVar2 = local_50;
    local_108 = PTR___NSConcreteGlobalBlock_02578658;
    local_100 = 0xd0800000;
    local_fc = 0;
    local_f8 = FUN_01b309d4;
    local_f0 = &DAT_0258b298;
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = local_70;
    local_e8 = uVar5;
    (*(code *)PTR__objc_retain_02578638)();
    uVar5 = local_68;
    local_e0 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = local_60;
    local_d8 = uVar5;
    local_c8 = local_78;
    (*(code *)PTR__objc_retain_02578638)();
    local_d0 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_indexOfObjectPassingTest__026a27f8,&local_108)
    ;
    local_c0 = IVar2;
    if (IVar2 != 0x7fffffffffffffff) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_removeObjectAtIndex__0269d530,IVar2);
      IVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_copy_0269d150);
      puVar6 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_reloadTableData_0269dca8);
    }
    local_28 = (ID)(IVar2 != 0x7fffffffffffffff);
    local_54 = 1;
    _objc_storeStrong(&local_d0);
    _objc_storeStrong(&local_d8,0);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_e8,0);
  }
  else {
    local_b8 = PTR___NSConcreteGlobalBlock_02578658;
    local_b0 = 0xd0800000;
    local_ac = 0;
    local_a8 = FUN_01b308f0;
    local_a0 = &DAT_02581d20;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_indexesOfObjectsPassingTest__026a2c90,&local_b8);
    _objc_retainAutoreleasedReturnValue();
    local_90 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_count_0269cfe0);
    bVar1 = IVar2 != 0;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_removeObjectsAtIndexes__026a2c98,local_90);
      IVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_copy_0269d150);
      puVar6 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_reloadTableData_0269dca8);
      IVar2 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_count_0269cfe0);
      local_28 = IVar2;
    }
    local_54 = (uint)bVar1;
    _objc_storeStrong(bVar1,&local_90);
    _objc_storeStrong(&local_98,0);
    if (local_54 == 0) goto LAB_01b30658;
  }
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
LAB_01b308c0:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_40,0);
  return local_28;
}

