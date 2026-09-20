// pickKeepRoom @ 0189f230

/* Function Stack Size: 0x10 bytes */

void WCRefineChatRoomDuplicateJoinViewController::pickKeepRoom(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  char *pcVar6;
  ID local_d0;
  ID local_b8;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  ID local_88;
  char *local_80;
  ID local_78;
  char *local_70;
  uint local_68;
  bool local_61;
  ID local_60;
  ID local_58;
  bool local_49;
  ID local_48;
  ID local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingItem_026b7490);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKeyedSubscript__0269d098,&cf_rooms);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  IVar4 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_49 = false;
  bVar1 = (IVar4 & 1) == 0;
  if (bVar1) {
    local_b8 = *(ID *)PTR____NSArray0___02578280;
  }
  else {
    local_b8 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_rooms);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_b8;
  }
  local_49 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_b8;
  if ((local_49 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_roomNames);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_61 = false;
  bVar1 = (IVar5 & 1) == 0;
  if (bVar1) {
    local_d0 = *(ID *)PTR____NSArray0___02578280;
  }
  else {
    local_d0 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_roomNames);
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_d0;
  }
  local_61 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_d0;
  if ((local_61 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
  if (IVar4 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingKeepRooms__026b74b0,local_40);
    pcVar6 = "WCUIActionSheet";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar2 = local_40;
    IVar5 = local_58;
    local_a8 = PTR___NSConcreteGlobalBlock_02578658;
    local_a0 = 0xd0800000;
    local_9c = 0;
    local_98 = FUN_0189f708;
    local_90 = &DAT_02584e50;
    local_70 = pcVar6;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar6 = local_70;
    local_88 = IVar5;
    (*(code *)PTR__objc_retain_02578638)();
    IVar5 = local_28;
    local_80 = pcVar6;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_enumerateObjectsUsingBlock__0269d3d0,&local_a8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar6 = local_70;
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_88,0);
    _objc_storeStrong(&local_70,0);
  }
  local_68 = (uint)(IVar4 == 0);
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

