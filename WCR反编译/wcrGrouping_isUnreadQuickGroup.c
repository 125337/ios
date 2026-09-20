// wcrGrouping_isUnreadQuickGroup @ 00365ad8

/* Function Stack Size: 0x10 bytes */

bool WCRGroupingSessionListViewController::wcrGrouping_isUnreadQuickGroup(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined1 *puVar3;
  bool local_2c;
  undefined1 *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineGroupManager_026ce2b8;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_groupId_0269ea88);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_groupForId__026a27e0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_kind_026a27e8);
  local_2c = 0;
  if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
    puVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scope_0269ea90);
    local_2c = (bool)((qword *)puVar3 == &segment_command_00000020.vmsize);
  }
  _objc_storeStrong(&local_28,0);
  return local_2c;
}

