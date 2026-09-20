// chatRoomLeaveMonitorNotifyGroupRule @ 02087dd0

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::chatRoomLeaveMonitorNotifyGroupRule(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined1 *puVar2;
  SEL SVar3;
  ID IVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  ID local_48;
  byte local_39;
  undefined1 *local_38;
  undefined1 *local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar3 = local_28;
  local_30 = (undefined1 *)param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_38 = (undefined1 *)param_1;
  (*(code *)PTR__objc_release_02578630)(SVar3);
  if (local_38 == (undefined1 *)0x0) {
    IVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_chatRoomLeaveMonitorAllGroups_026ca310);
    local_39 = (byte)IVar4;
    IVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_chatRoomLeaveMonitorSelectedGrou_026ca318);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = (local_39 & 1) == 0;
    local_48 = IVar4;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_count_0269cfe0);
    }
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,bVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = local_38;
    local_38 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    puVar2 = local_30;
    puVar6 = local_38;
    SVar3 = local_28;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setObject_forKey__026ca9e8,puVar6);
    (*(code *)PTR__objc_release_02578630)(SVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_storeStrong(&local_48,0);
  }
  puVar6 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_integerValue_026ca750);
  local_18 = (ulong)(puVar6 == (undefined1 *)((long)&MACH_HEADER.magic + 1));
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

