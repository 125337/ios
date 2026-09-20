// FUN_003b6b3c @ 003b6b3c

ulong FUN_003b6b3c(undefined8 param_1)

{
  ulong uVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  uint local_5c;
  char *local_40;
  cfstringStruct *local_38;
  char *local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) ||
     (uVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_sortTimestampResolved_026a2ea0),
     (uVar1 & 1) != 0)) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_sortTimestamp_026a2ea8);
    local_24 = 1;
    local_18 = uVar1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setSortTimestampResolved__026a2eb0,1);
    uVar1 = local_20;
    FUN_003b6e7c(local_20);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setSortTimestamp__026a2eb8,uVar1);
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_sortTimestamp_026a2ea8);
    if (uVar1 == 0) {
      pcVar2 = "CMessageMgr";
      _objc_getClass(0);
      FUN_00392f1c();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = &cf_GetLastMsgFromUsr_;
      local_30 = pcVar2;
      _NSSelectorFromString();
      uVar1 = local_20;
      local_38 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_username_026a2238);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_5c = 0;
      if (uVar4 != 0) {
        pcVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,local_38);
        local_5c = (uint)pcVar2;
      }
      (*(code *)PTR__objc_release_02578630)(uVar1);
      pcVar2 = local_30;
      pcVar3 = local_38;
      if ((local_5c & 1) != 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_username_026a2238);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,pcVar3);
        _objc_retainAutoreleasedReturnValue();
        local_40 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
        pcVar2 = local_40;
        FUN_00396798(local_40,&cf_m_uiCreateTime);
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setSortTimestamp__026a2eb8,pcVar2);
        _objc_storeStrong(&local_40,0);
      }
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_sortTimestamp_026a2ea8);
      local_24 = 1;
      local_18 = uVar1;
      _objc_storeStrong(&local_30,0);
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_sortTimestamp_026a2ea8);
      local_24 = 1;
      local_18 = uVar1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

