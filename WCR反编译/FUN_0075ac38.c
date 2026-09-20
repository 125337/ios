// FUN_0075ac38 @ 0075ac38

void FUN_0075ac38(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  ulong local_c8;
  char *local_68;
  byte local_59;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  ulong local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_00743f78();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    local_28 = (char *)0x0;
    local_48 = 1;
  }
  else {
    local_59 = 0;
    uVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if ((uVar3 & 1) == 0) {
      local_c8 = 0;
    }
    else {
      local_c8 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      local_58 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_50 = local_c8;
    if ((long)local_c8 < 1) {
      local_28 = (char *)0x0;
      local_48 = 1;
    }
    else {
      if (DAT_028cc830 == (char *)0x0) {
        pcVar4 = "CMessageMgr";
        _objc_getClass();
        DAT_028cc830 = pcVar4;
      }
      pcVar4 = DAT_028cc830;
      _objc_retainAutoreleaseReturnValue();
      FUN_00744160();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR_s_GetMsg_LocalID__0269d5e8;
      local_68 = pcVar4;
      if ((pcVar4 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_GetMsg_LocalID__0269d5e8),
         ((ulong)pcVar4 & 1) == 0)) {
        local_28 = (char *)0x0;
      }
      else {
        pcVar4 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,puVar1,local_38,local_50);
        _objc_retainAutoreleasedReturnValue();
        local_28 = pcVar4;
      }
      local_48 = 1;
      _objc_storeStrong(&local_68,0);
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

