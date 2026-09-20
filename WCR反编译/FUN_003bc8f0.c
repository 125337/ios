// FUN_003bc8f0 @ 003bc8f0

void FUN_003bc8f0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_session_0269d000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_username_026a2238);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  FUN_003963a8();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar3 & 1) == 0) {
    puVar4 = PTR_WCRefineGroupDataProvider_026ce540;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_session_0269d000);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_groupScopeForNativeSession__026a2c60);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    if (puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_sys_friend;
    }
    else if (puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_sys_chatroom;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_sys_other;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_sys_other;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

