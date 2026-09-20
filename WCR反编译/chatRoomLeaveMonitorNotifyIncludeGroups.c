// chatRoomLeaveMonitorNotifyIncludeGroups @ 020881a4

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::chatRoomLeaveMonitorNotifyIncludeGroups(ID param_1,SEL param_2)

{
  ID IVar1;
  bool bVar2;
  SEL SVar3;
  ID IVar4;
  ID IVar5;
  ID local_40;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar3 = local_28;
  local_30 = param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  (*(code *)PTR__objc_release_02578630)(SVar3);
  if (local_38 == 0) {
    IVar5 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_chatRoomLeaveMonitorAllGroups_026ca310);
    if ((IVar5 & 1) == 0) {
      IVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_chatRoomLeaveMonitorSelectedGrou_026ca318);
      _objc_retainAutoreleasedReturnValue();
      local_40 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_count_0269cfe0);
      IVar1 = local_30;
      IVar5 = local_40;
      bVar2 = IVar4 != 0;
      if (bVar2) {
        SVar3 = local_28;
        _cmdString();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setObject_forKey__026ca9e8,IVar5);
        (*(code *)PTR__objc_release_02578630)(SVar3);
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)();
        IVar5 = local_40;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = IVar5;
      }
      _objc_storeStrong(bVar2,&local_40,0);
      if (bVar2) goto LAB_020883dc;
    }
    IVar5 = *(ID *)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar5;
  }
  else {
    IVar5 = local_38;
    FUN_02085d18();
    _objc_retainAutoreleasedReturnValue();
    local_18 = IVar5;
  }
LAB_020883dc:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

