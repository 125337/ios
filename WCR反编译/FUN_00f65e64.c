// FUN_00f65e64 @ 00f65e64

void FUN_00f65e64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *local_b0;
  undefined8 local_a0;
  undefined1 *local_90;
  bool local_61;
  undefined1 *local_60;
  bool local_51;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined *local_40;
  undefined1 *local_38;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined1 *)0x0;
  _objc_storeStrong(&local_20,param_2);
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_usernames);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_00f64f08();
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
  if (puVar2 == (undefined1 *)0x0) {
    local_18 = (undefined *)0x0;
    local_2c = 1;
  }
  else {
    puVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    FUN_00f646e4();
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (puVar2 == (undefined1 *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSUUID_026ce668;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_38;
      local_38 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    puVar1 = PTR_WCRefineForwardTargetHistoryItem_026cebb0;
    _objc_alloc_init();
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setItemId__026a17c0,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setUsernames__026ac870,local_28);
    puVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_name)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    FUN_00f646e4();
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (puVar2 == (undefined1 *)0x0) {
      local_90 = (undefined1 *)0x0;
    }
    else {
      local_90 = local_48;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setCustomName__026ac890,local_90);
    puVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_lastUsed);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_51 = ((ulong)puVar2 & 1) == 0;
    if (local_51) {
      local_a0 = 0;
    }
    else {
      local_50 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_lastUsed);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_a0 = param_1;
    }
    local_51 = !local_51;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,local_40,PTR_s_setLastUsedAt__026ac878);
    if (local_51) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_useCount);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_61 = ((ulong)puVar2 & 1) == 0;
    if (local_61) {
      local_b0 = (undefined1 *)((long)&MACH_HEADER.magic + 1);
    }
    else {
      local_60 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_useCount);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    local_61 = !local_61;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setUseCount__026ac888,local_b0);
    if (local_61) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = puVar1;
    local_2c = 1;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

