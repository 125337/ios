// FUN_00355e04 @ 00355e04

void FUN_00355e04(undefined8 param_1)

{
  long lVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  cfstringStruct *local_68;
  bool local_49;
  cfstringStruct *local_48;
  undefined1 *local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_003aa040();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_WCRefine_groupEntry;
    local_2c = 1;
  }
  else {
    pcVar2 = &cf_WCRefine_groupEntry_;
    (*(code *)PTR__objc_msgSend_02578628)
              (&cf_WCRefine_groupEntry_,PTR_s_stringByAppendingString__0269d398,local_28);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineGroupManager_026ce2b8;
    local_38 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_scope_0269ea90);
    local_49 = puVar4 != (undefined1 *)((long)&MACH_HEADER.magic + 2);
    if (local_49) {
      local_68 = local_38;
    }
    else {
      local_68 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_stringByAppendingString__0269d398,&cf__chatroom);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_68;
    }
    local_49 = !local_49;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_68;
    if (local_49) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    local_2c = 1;
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

