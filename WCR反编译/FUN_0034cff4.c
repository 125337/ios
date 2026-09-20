// FUN_0034cff4 @ 0034cff4

void FUN_0034cff4(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined *local_50;
  undefined *local_48;
  uint local_40;
  bool local_39;
  undefined *local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined *local_20;
  undefined8 local_18;
  
  local_20 = (undefined *)0x0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  puVar2 = local_20;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_object_0269ddb0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UITableView_026ce1a8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60)
  ;
  puVar4 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_39 = false;
  bVar1 = ((ulong)puVar4 & 1) == 0;
  if (bVar1) {
    local_68 = (undefined *)0x0;
  }
  else {
    local_68 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_object_0269ddb0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_68;
  }
  local_39 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_68;
  if ((local_39 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)();
  if ((local_30 == (undefined *)0x0) || (FUN_0034d318(), ((ulong)puVar2 & 1) == 0)) {
    local_40 = 1;
  }
  else {
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_userInfo_0269f138);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_48;
    puVar3 = PTR__OBJC_CLASS___NSNull_026ce0e8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (puVar2 == puVar3) {
      _objc_storeStrong(0,&local_48,0);
    }
    if (local_48 == (undefined *)0x0) {
      puVar3 = local_30;
      _objc_getAssociatedObject(local_30,&DAT_028ca001);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_48;
      local_48 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = PTR_WCRefineHomeTableHeaderHost_026ce570;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHomeTableHeaderHost_026ce570,PTR_s_stripSlotInTableView__026a23a0,
               local_30);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar2;
    if (puVar2 != (undefined *)0x0) {
      FUN_0034d324(puVar2,local_30,local_48);
    }
    local_40 = (uint)(puVar2 == (undefined *)0x0);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  if (local_40 == 0) {
    local_40 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

